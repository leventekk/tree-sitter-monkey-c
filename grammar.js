module.exports = grammar({
  name: 'monkey_c',

  extras: $ => [
    $.comment,
    /[\s\p{Zs}\uFEFF\u2060\u200B]/,
  ],

  supertypes: $ => [
    $.expression,
    $.statement,
    $.declaration,
  ],

  precedences: $ => [
    [
      'binary_times',
      'binary_plus',
      'binary_shift',
      'binary_relation',
      'binary_equality',
      'bitwise_and',
      'bitwise_xor',
      'bitwise_or',
      'logical_and',
      'logical_or',
    ],
    [$.primary_expression, $.statement_block, 'object'],
    [$.import_declaration],
  ],

  inline: $ => [
    $._class_body_declaration,
  ],

  rules: {
    program: $ => repeat($.statement),

    import_declaration: $ => seq(
      choice('import', 'using'),
      field(
        'name',
        $.identifier,
      ),
      optional($.import_alias),
      $.semicolon
    ),

    import_alias: $ => seq('as', field('alias', $.identifier)),

    class_declaration: $ => seq(
      'class',
      field('name', $.identifier),
      optional($.class_inheritance),
      field('body', $.class_body),
    ),

    class_inheritance: $ => seq('extends', field('superclass', $.identifier)),
    class_body: $ => seq(
      '{',
      repeat($._class_body_declaration),
      '}'
    ),

    _class_body_declaration: $ => choice(
      $.field_declaration,
      $.function_declaration
    ),

    field_declaration: $ => seq(
      optional($.static),
      optional($.visibility_modifier),
      $.variable_kind,
      field('name', $.variable_identifier),
      optional($.variable_type_definition),
      optional(
        seq(
          '=',
          field('value', $.type),
        )
      ),
      $.semicolon
    ),

    variable_type_definition: $ => seq(
      'as',
      $.identifier,
      optional(
        seq(
          'or',
          $.identifier
        )
      )
    ),

    function_declaration: $ => seq(
      optional($.static),
      optional($.visibility_modifier),
      'function',
      field('name', $.variable_identifier),
      field('parameters', $.function_parameter),
      field('body', $.statement_block)
    ),

    function_parameter: $ => seq(
      '(',
      optional(
        commaSep(
          seq(
            $.variable_identifier,
            optional($.variable_type_definition),
          )
        )
      ),
      ')'
    ),

    statement_block: $ => seq(
      '{',
      optional(repeat($.statement)),
      '}'
    ),

    visibility_modifier: () => choice('hidden', 'public', 'protected', 'private'),

    identifier: () => /[A-Z][a-zA-Z0-9_.]*/,
    variable_identifier: () => /[a-zA-Z_][a-zA-Z0-9_]*/,
    static: () => 'static',
    variable_kind: () => choice('var', 'const'),
    type: $ => choice(
      $.primary_expression
    ),
    semicolon: () => ';',

    parenthesized_expression: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    declaration: $ => choice(
      $.import_declaration,
      $.class_declaration
    ),

    expression: $ => choice(
      $.primary_expression,
      $.binary_expression
    ),

    primary_expression: $ => choice(
      $.number,
      $.string,
      $.variable_identifier,
      $.true,
      $.false,
      $.null,
      $.tuple_type
    ),

    binary_expression: $ => choice(
      ...[
        ['&&', 'logical_and'],
        ['and', 'logical_and'],
        ['||', 'logical_or'],
        ['or', 'logical_or'],
        ['>>', 'binary_shift'],
        ['<<', 'binary_shift'],
        ['&', 'bitwise_and'],
        ['^', 'bitwise_xor'],
        ['|', 'bitwise_or'],
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['%', 'binary_times'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['==', 'binary_equality'],
        ['!=', 'binary_equality'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
        ['instanceof', 'binary_relation'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $.expression),
          field('operator', operator),
          field('right', $.expression)
        ))
      )
    ),

    number: () => /\d/,
    string: $ => seq(
      '"',
      repeat($._string_fragment),
      '"'
    ),
    _string_fragment: () =>
      token.immediate(prec(1, /[^"\\]+/)),

    true: () => 'true',
    false: () => 'false',
    null: () => 'null',

    tuple_type: $ => seq(
      '[',
      commaSep($.primary_expression),
      ']'
    ),

    else_clause: $ => seq('else', $.statement_block),

    if_statement: $ => prec.right(seq(
      'if',
      field('condition', $.parenthesized_expression),
      field('consequence', $.statement_block),
      optional(field('alternative', $.else_clause))
    )),

    return_statement: $ => seq(
      'return',
      $.expression,
      $.semicolon
    ),

    statement: $ => choice(
      $.import_declaration,
      $.field_declaration,
      $.class_declaration,

      $.if_statement,
      $.return_statement
    ),

    comment: () => token(
      choice(
        seq('//', /.*/),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/'
        )
      )
    )
  }
});

function commaSep(rule) {
  return sepBy(',', rule);
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}
