module.exports = grammar({
  name: 'monkey_c',

  extras: $ => [
    $.comment,
    /[\s\p{Zs}\uFEFF\u2060\u200B]/,

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
      field('body', $.function_body)
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

    function_body: $ => seq(
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

    primary_expression: $ => choice(
      $.number,
      $.string,
      $.variable_identifier,
      $.true,
      $.false,
      $.null,
      $.tuple_type
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

    return_statement: $ => seq(
      'return',
      $.primary_expression,
      $.semicolon
    ),

    statement: $ => choice(
      $.import_declaration,
      $.field_declaration,
      $.class_declaration,
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
