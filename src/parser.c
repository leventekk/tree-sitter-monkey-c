#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_import = 1,
  anon_sym_using = 2,
  anon_sym_as = 3,
  anon_sym_class = 4,
  anon_sym_extends = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_EQ = 8,
  anon_sym_or = 9,
  anon_sym_function = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_hidden = 14,
  anon_sym_public = 15,
  anon_sym_protected = 16,
  anon_sym_private = 17,
  sym_identifier = 18,
  sym_variable_identifier = 19,
  sym_static = 20,
  anon_sym_var = 21,
  anon_sym_const = 22,
  sym_semicolon = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_and = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_GT_GT = 27,
  anon_sym_LT_LT = 28,
  anon_sym_AMP = 29,
  anon_sym_CARET = 30,
  anon_sym_PIPE = 31,
  anon_sym_PLUS = 32,
  anon_sym_DASH = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_PERCENT = 36,
  anon_sym_LT = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_EQ_EQ = 39,
  anon_sym_BANG_EQ = 40,
  anon_sym_GT_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_instanceof = 43,
  sym_number = 44,
  anon_sym_DQUOTE = 45,
  sym__string_fragment = 46,
  sym_true = 47,
  sym_false = 48,
  sym_null = 49,
  anon_sym_LBRACK = 50,
  anon_sym_RBRACK = 51,
  anon_sym_else = 52,
  anon_sym_if = 53,
  anon_sym_return = 54,
  sym_comment = 55,
  sym_program = 56,
  sym_import_declaration = 57,
  sym_import_alias = 58,
  sym_class_declaration = 59,
  sym_class_inheritance = 60,
  sym_class_body = 61,
  sym_field_declaration = 62,
  sym_variable_type_definition = 63,
  sym_function_declaration = 64,
  sym_function_parameter = 65,
  sym_statement_block = 66,
  sym_visibility_modifier = 67,
  sym_variable_kind = 68,
  sym_type = 69,
  sym_parenthesized_expression = 70,
  sym_expression = 71,
  sym_primary_expression = 72,
  sym_binary_expression = 73,
  sym_string = 74,
  sym_tuple_type = 75,
  sym_else_clause = 76,
  sym_if_statement = 77,
  sym_return_statement = 78,
  sym_statement = 79,
  aux_sym_program_repeat1 = 80,
  aux_sym_class_body_repeat1 = 81,
  aux_sym_function_parameter_repeat1 = 82,
  aux_sym_string_repeat1 = 83,
  aux_sym_tuple_type_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_using] = "using",
  [anon_sym_as] = "as",
  [anon_sym_class] = "class",
  [anon_sym_extends] = "extends",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_or] = "or",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_hidden] = "hidden",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [sym_identifier] = "identifier",
  [sym_variable_identifier] = "variable_identifier",
  [sym_static] = "static",
  [anon_sym_var] = "var",
  [anon_sym_const] = "const",
  [sym_semicolon] = "semicolon",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_instanceof] = "instanceof",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_fragment] = "_string_fragment",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_else] = "else",
  [anon_sym_if] = "if",
  [anon_sym_return] = "return",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_import_declaration] = "import_declaration",
  [sym_import_alias] = "import_alias",
  [sym_class_declaration] = "class_declaration",
  [sym_class_inheritance] = "class_inheritance",
  [sym_class_body] = "class_body",
  [sym_field_declaration] = "field_declaration",
  [sym_variable_type_definition] = "variable_type_definition",
  [sym_function_declaration] = "function_declaration",
  [sym_function_parameter] = "function_parameter",
  [sym_statement_block] = "statement_block",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym_variable_kind] = "variable_kind",
  [sym_type] = "type",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_expression] = "expression",
  [sym_primary_expression] = "primary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [sym_tuple_type] = "tuple_type",
  [sym_else_clause] = "else_clause",
  [sym_if_statement] = "if_statement",
  [sym_return_statement] = "return_statement",
  [sym_statement] = "statement",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_function_parameter_repeat1] = "function_parameter_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_tuple_type_repeat1] = "tuple_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_private] = anon_sym_private,
  [sym_identifier] = sym_identifier,
  [sym_variable_identifier] = sym_variable_identifier,
  [sym_static] = sym_static,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_const] = anon_sym_const,
  [sym_semicolon] = sym_semicolon,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_instanceof] = anon_sym_instanceof,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_fragment] = sym__string_fragment,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_return] = anon_sym_return,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym_import_declaration] = sym_import_declaration,
  [sym_import_alias] = sym_import_alias,
  [sym_class_declaration] = sym_class_declaration,
  [sym_class_inheritance] = sym_class_inheritance,
  [sym_class_body] = sym_class_body,
  [sym_field_declaration] = sym_field_declaration,
  [sym_variable_type_definition] = sym_variable_type_definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_parameter] = sym_function_parameter,
  [sym_statement_block] = sym_statement_block,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym_variable_kind] = sym_variable_kind,
  [sym_type] = sym_type,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_expression] = sym_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string] = sym_string,
  [sym_tuple_type] = sym_tuple_type,
  [sym_else_clause] = sym_else_clause,
  [sym_if_statement] = sym_if_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_statement] = sym_statement,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_function_parameter_repeat1] = aux_sym_function_parameter_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_tuple_type_repeat1] = aux_sym_tuple_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instanceof] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_alternative = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_left = 6,
  field_name = 7,
  field_operator = 8,
  field_parameters = 9,
  field_right = 10,
  field_superclass = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_superclass] = "superclass",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_condition, 1},
    {field_consequence, 2},
  [5] =
    {field_alias, 1},
  [6] =
    {field_superclass, 1},
  [7] =
    {field_body, 3},
    {field_name, 1},
  [9] =
    {field_name, 2},
  [10] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [13] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [16] =
    {field_name, 3},
  [17] =
    {field_name, 1},
    {field_value, 3},
  [19] =
    {field_name, 2},
    {field_value, 4},
  [21] =
    {field_name, 1},
    {field_value, 4},
  [23] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [26] =
    {field_name, 3},
    {field_value, 5},
  [28] =
    {field_name, 2},
    {field_value, 5},
  [30] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
  [33] =
    {field_name, 3},
    {field_value, 6},
  [35] =
    {field_body, 5},
    {field_name, 3},
    {field_parameters, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
};

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(98);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '%') ADVANCE(145);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == ']') ADVANCE(168);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '{') ADVANCE(104);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(145);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == ']') ADVANCE(168);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '|') ADVANCE(140);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '[') ADVANCE(167);
      if (lookahead == ']') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 't') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '/') ADVANCE(156);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(68);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '/') ADVANCE(6);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(173);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'u') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'u') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_static);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(133);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(135);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '/') ADVANCE(156);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_static] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_instanceof] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(120),
    [sym_import_declaration] = STATE(44),
    [sym_class_declaration] = STATE(44),
    [sym_field_declaration] = STATE(44),
    [sym_visibility_modifier] = STATE(95),
    [sym_variable_kind] = STATE(122),
    [sym_if_statement] = STATE(44),
    [sym_return_statement] = STATE(44),
    [sym_statement] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_hidden] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(11),
    [sym_static] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 20,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
      anon_sym_RBRACK,
  [33] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 20,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
      anon_sym_RBRACK,
  [66] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 20,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
      anon_sym_RBRACK,
  [99] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 20,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
      anon_sym_RBRACK,
  [132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 20,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
      anon_sym_RBRACK,
  [165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 20,
      anon_sym_or,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
      anon_sym_RBRACK,
  [198] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(59), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
    ACTIONS(45), 7,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [243] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(59), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
    ACTIONS(45), 6,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
  [292] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(59), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
    ACTIONS(45), 7,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
  [339] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(59), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
    ACTIONS(45), 4,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_PIPE_PIPE,
  [390] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(59), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
    ACTIONS(45), 6,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
  [439] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_class,
    ACTIONS(82), 1,
      sym_static,
    ACTIONS(88), 1,
      anon_sym_if,
    ACTIONS(91), 1,
      anon_sym_return,
    STATE(95), 1,
      sym_visibility_modifier,
    STATE(122), 1,
      sym_variable_kind,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(73), 2,
      anon_sym_import,
      anon_sym_using,
    ACTIONS(85), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(13), 2,
      sym_statement,
      aux_sym_program_repeat1,
    ACTIONS(79), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
    STATE(44), 5,
      sym_import_declaration,
      sym_class_declaration,
      sym_field_declaration,
      sym_if_statement,
      sym_return_statement,
  [490] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 14,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
  [527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(94), 18,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
  [558] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(49), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
    ACTIONS(45), 9,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [601] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 12,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
  [640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 18,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
  [671] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(49), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
      anon_sym_or,
      anon_sym_RPAREN,
      sym_semicolon,
      anon_sym_AMP_AMP,
      anon_sym_and,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
  [706] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      sym_semicolon,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(98), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
  [758] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      sym_static,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_visibility_modifier,
    STATE(122), 1,
      sym_variable_kind,
    ACTIONS(7), 2,
      anon_sym_import,
      anon_sym_using,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(13), 2,
      sym_statement,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
    STATE(44), 5,
      sym_import_declaration,
      sym_class_declaration,
      sym_field_declaration,
      sym_if_statement,
      sym_return_statement,
  [808] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      sym_static,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_visibility_modifier,
    STATE(122), 1,
      sym_variable_kind,
    ACTIONS(7), 2,
      anon_sym_import,
      anon_sym_using,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(13), 2,
      sym_statement,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
    STATE(44), 5,
      sym_import_declaration,
      sym_class_declaration,
      sym_field_declaration,
      sym_if_statement,
      sym_return_statement,
  [858] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(98), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_instanceof,
  [910] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      sym_static,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_visibility_modifier,
    STATE(122), 1,
      sym_variable_kind,
    ACTIONS(7), 2,
      anon_sym_import,
      anon_sym_using,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(22), 2,
      sym_statement,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
    STATE(44), 5,
      sym_import_declaration,
      sym_class_declaration,
      sym_field_declaration,
      sym_if_statement,
      sym_return_statement,
  [960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_else,
    STATE(40), 1,
      sym_else_clause,
    ACTIONS(110), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 16,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_else,
      anon_sym_if,
      anon_sym_return,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 16,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_else,
      anon_sym_if,
      anon_sym_return,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 15,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1322] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_function,
    ACTIONS(150), 1,
      sym_static,
    STATE(85), 1,
      sym_visibility_modifier,
    STATE(122), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(47), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1436] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_function,
    ACTIONS(150), 1,
      sym_static,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_visibility_modifier,
    STATE(122), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(51), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1530] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_function,
    ACTIONS(176), 1,
      sym_static,
    STATE(85), 1,
      sym_visibility_modifier,
    STATE(122), 1,
      sym_variable_kind,
    ACTIONS(179), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(51), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(173), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 14,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_return,
  [1584] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1614] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1644] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1674] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1704] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1734] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1764] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1794] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1854] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1884] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1914] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    STATE(15), 2,
      sym_primary_expression,
      sym_binary_expression,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1944] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(118), 1,
      sym_type,
    STATE(131), 1,
      sym_primary_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [1973] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_type,
    STATE(131), 1,
      sym_primary_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [2002] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(119), 1,
      sym_type,
    STATE(131), 1,
      sym_primary_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [2031] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(121), 1,
      sym_type,
    STATE(131), 1,
      sym_primary_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [2060] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_primary_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [2089] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      sym_type,
    STATE(131), 1,
      sym_primary_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [2118] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_primary_expression,
    STATE(132), 1,
      sym_type,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [2147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_number,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym_primary_expression,
    STATE(5), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(184), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 9,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [2188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 9,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [2203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_function,
    STATE(81), 1,
      sym_visibility_modifier,
    STATE(136), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [2226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 9,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [2241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(90), 1,
      sym_visibility_modifier,
    STATE(136), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_or,
    ACTIONS(202), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
  [2274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_as,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_function_parameter_repeat1,
    STATE(97), 1,
      sym_variable_type_definition,
  [2293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_extends,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_class_body,
    STATE(117), 1,
      sym_class_inheritance,
  [2309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_function,
    STATE(133), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
  [2323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_as,
    STATE(108), 1,
      sym_variable_type_definition,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_as,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(222), 1,
      sym_semicolon,
    STATE(116), 1,
      sym_variable_type_definition,
  [2353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_as,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(226), 1,
      sym_semicolon,
    STATE(106), 1,
      sym_variable_type_definition,
  [2369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_function,
    STATE(136), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
  [2383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
  [2393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_as,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(232), 1,
      sym_semicolon,
    STATE(103), 1,
      sym_variable_type_definition,
  [2409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_tuple_type_repeat1,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_function,
      anon_sym_var,
      anon_sym_const,
  [2431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(133), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
  [2442] = 4,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__string_fragment,
    ACTIONS(244), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_string_repeat1,
  [2455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_tuple_type_repeat1,
  [2468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_tuple_type_repeat1,
  [2481] = 4,
    ACTIONS(244), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      sym__string_fragment,
    STATE(101), 1,
      aux_sym_string_repeat1,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(136), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
  [2505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_function_parameter_repeat1,
  [2518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_function_parameter_repeat1,
  [2531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_function_parameter_repeat1,
  [2544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_function_parameter_repeat1,
  [2557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_as,
    ACTIONS(266), 1,
      sym_semicolon,
    STATE(138), 1,
      sym_import_alias,
  [2570] = 4,
    ACTIONS(244), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      sym__string_fragment,
    STATE(101), 1,
      aux_sym_string_repeat1,
  [2583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_function_parameter,
  [2593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(277), 1,
      sym_semicolon,
  [2603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_statement_block,
  [2613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_statement_block,
  [2623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(283), 1,
      sym_semicolon,
  [2633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_statement_block,
  [2659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      sym_variable_identifier,
  [2669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_statement_block,
  [2679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_function_parameter,
  [2689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_function_parameter,
  [2699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_statement_block,
  [2709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_parenthesized_expression,
  [2719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_EQ,
    ACTIONS(295), 1,
      sym_semicolon,
  [2729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_class_body,
  [2739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_semicolon,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_semicolon,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [2760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_semicolon,
  [2767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_variable_identifier,
  [2774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_semicolon,
  [2781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_semicolon,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_variable_identifier,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
  [2802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_identifier,
  [2809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_variable_identifier,
  [2816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_identifier,
  [2823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_variable_identifier,
  [2830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_semicolon,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_semicolon,
  [2844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_variable_identifier,
  [2851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_variable_identifier,
  [2858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_variable_identifier,
  [2872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_identifier,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_semicolon,
  [2886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
  [2893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_identifier,
  [2900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
  [2914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
  [2921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_variable_identifier,
  [2928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [2935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_semicolon,
  [2942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 390,
  [SMALL_STATE(13)] = 439,
  [SMALL_STATE(14)] = 490,
  [SMALL_STATE(15)] = 527,
  [SMALL_STATE(16)] = 558,
  [SMALL_STATE(17)] = 601,
  [SMALL_STATE(18)] = 640,
  [SMALL_STATE(19)] = 671,
  [SMALL_STATE(20)] = 706,
  [SMALL_STATE(21)] = 758,
  [SMALL_STATE(22)] = 808,
  [SMALL_STATE(23)] = 858,
  [SMALL_STATE(24)] = 910,
  [SMALL_STATE(25)] = 960,
  [SMALL_STATE(26)] = 986,
  [SMALL_STATE(27)] = 1008,
  [SMALL_STATE(28)] = 1030,
  [SMALL_STATE(29)] = 1051,
  [SMALL_STATE(30)] = 1072,
  [SMALL_STATE(31)] = 1093,
  [SMALL_STATE(32)] = 1114,
  [SMALL_STATE(33)] = 1135,
  [SMALL_STATE(34)] = 1156,
  [SMALL_STATE(35)] = 1177,
  [SMALL_STATE(36)] = 1198,
  [SMALL_STATE(37)] = 1219,
  [SMALL_STATE(38)] = 1240,
  [SMALL_STATE(39)] = 1261,
  [SMALL_STATE(40)] = 1282,
  [SMALL_STATE(41)] = 1302,
  [SMALL_STATE(42)] = 1322,
  [SMALL_STATE(43)] = 1356,
  [SMALL_STATE(44)] = 1376,
  [SMALL_STATE(45)] = 1396,
  [SMALL_STATE(46)] = 1416,
  [SMALL_STATE(47)] = 1436,
  [SMALL_STATE(48)] = 1470,
  [SMALL_STATE(49)] = 1490,
  [SMALL_STATE(50)] = 1510,
  [SMALL_STATE(51)] = 1530,
  [SMALL_STATE(52)] = 1564,
  [SMALL_STATE(53)] = 1584,
  [SMALL_STATE(54)] = 1614,
  [SMALL_STATE(55)] = 1644,
  [SMALL_STATE(56)] = 1674,
  [SMALL_STATE(57)] = 1704,
  [SMALL_STATE(58)] = 1734,
  [SMALL_STATE(59)] = 1764,
  [SMALL_STATE(60)] = 1794,
  [SMALL_STATE(61)] = 1824,
  [SMALL_STATE(62)] = 1854,
  [SMALL_STATE(63)] = 1884,
  [SMALL_STATE(64)] = 1914,
  [SMALL_STATE(65)] = 1944,
  [SMALL_STATE(66)] = 1973,
  [SMALL_STATE(67)] = 2002,
  [SMALL_STATE(68)] = 2031,
  [SMALL_STATE(69)] = 2060,
  [SMALL_STATE(70)] = 2089,
  [SMALL_STATE(71)] = 2118,
  [SMALL_STATE(72)] = 2147,
  [SMALL_STATE(73)] = 2173,
  [SMALL_STATE(74)] = 2188,
  [SMALL_STATE(75)] = 2203,
  [SMALL_STATE(76)] = 2226,
  [SMALL_STATE(77)] = 2241,
  [SMALL_STATE(78)] = 2261,
  [SMALL_STATE(79)] = 2274,
  [SMALL_STATE(80)] = 2293,
  [SMALL_STATE(81)] = 2309,
  [SMALL_STATE(82)] = 2323,
  [SMALL_STATE(83)] = 2337,
  [SMALL_STATE(84)] = 2353,
  [SMALL_STATE(85)] = 2369,
  [SMALL_STATE(86)] = 2383,
  [SMALL_STATE(87)] = 2393,
  [SMALL_STATE(88)] = 2409,
  [SMALL_STATE(89)] = 2422,
  [SMALL_STATE(90)] = 2431,
  [SMALL_STATE(91)] = 2442,
  [SMALL_STATE(92)] = 2455,
  [SMALL_STATE(93)] = 2468,
  [SMALL_STATE(94)] = 2481,
  [SMALL_STATE(95)] = 2494,
  [SMALL_STATE(96)] = 2505,
  [SMALL_STATE(97)] = 2518,
  [SMALL_STATE(98)] = 2531,
  [SMALL_STATE(99)] = 2544,
  [SMALL_STATE(100)] = 2557,
  [SMALL_STATE(101)] = 2570,
  [SMALL_STATE(102)] = 2583,
  [SMALL_STATE(103)] = 2593,
  [SMALL_STATE(104)] = 2603,
  [SMALL_STATE(105)] = 2613,
  [SMALL_STATE(106)] = 2623,
  [SMALL_STATE(107)] = 2633,
  [SMALL_STATE(108)] = 2641,
  [SMALL_STATE(109)] = 2649,
  [SMALL_STATE(110)] = 2659,
  [SMALL_STATE(111)] = 2669,
  [SMALL_STATE(112)] = 2679,
  [SMALL_STATE(113)] = 2689,
  [SMALL_STATE(114)] = 2699,
  [SMALL_STATE(115)] = 2709,
  [SMALL_STATE(116)] = 2719,
  [SMALL_STATE(117)] = 2729,
  [SMALL_STATE(118)] = 2739,
  [SMALL_STATE(119)] = 2746,
  [SMALL_STATE(120)] = 2753,
  [SMALL_STATE(121)] = 2760,
  [SMALL_STATE(122)] = 2767,
  [SMALL_STATE(123)] = 2774,
  [SMALL_STATE(124)] = 2781,
  [SMALL_STATE(125)] = 2788,
  [SMALL_STATE(126)] = 2795,
  [SMALL_STATE(127)] = 2802,
  [SMALL_STATE(128)] = 2809,
  [SMALL_STATE(129)] = 2816,
  [SMALL_STATE(130)] = 2823,
  [SMALL_STATE(131)] = 2830,
  [SMALL_STATE(132)] = 2837,
  [SMALL_STATE(133)] = 2844,
  [SMALL_STATE(134)] = 2851,
  [SMALL_STATE(135)] = 2858,
  [SMALL_STATE(136)] = 2865,
  [SMALL_STATE(137)] = 2872,
  [SMALL_STATE(138)] = 2879,
  [SMALL_STATE(139)] = 2886,
  [SMALL_STATE(140)] = 2893,
  [SMALL_STATE(141)] = 2900,
  [SMALL_STATE(142)] = 2907,
  [SMALL_STATE(143)] = 2914,
  [SMALL_STATE(144)] = 2921,
  [SMALL_STATE(145)] = 2928,
  [SMALL_STATE(146)] = 2935,
  [SMALL_STATE(147)] = 2942,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(141),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(140),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 10),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 11),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 7, .production_id = 16),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 7),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 7),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 8, .production_id = 18),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 7, .production_id = 15),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 12),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 13),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(144),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(89),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(75),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(125),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 19),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 14),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type_definition, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameter_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type_definition, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(72),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameter_repeat1, 2), SHIFT_REPEAT(134),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(101),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameter_repeat1, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inheritance, 2, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_monkey_c(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
