#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 17

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
  sym_number = 24,
  anon_sym_DQUOTE = 25,
  sym__string_fragment = 26,
  sym_true = 27,
  sym_false = 28,
  sym_null = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_return = 32,
  sym_comment = 33,
  sym_program = 34,
  sym_import_declaration = 35,
  sym_import_alias = 36,
  sym_class_declaration = 37,
  sym_class_inheritance = 38,
  sym_class_body = 39,
  sym_field_declaration = 40,
  sym_variable_type_definition = 41,
  sym_function_declaration = 42,
  sym_function_parameter = 43,
  sym_function_body = 44,
  sym_visibility_modifier = 45,
  sym_variable_kind = 46,
  sym_type = 47,
  sym_primary_expression = 48,
  sym_string = 49,
  sym_tuple_type = 50,
  sym_return_statement = 51,
  sym_statement = 52,
  aux_sym_program_repeat1 = 53,
  aux_sym_class_body_repeat1 = 54,
  aux_sym_function_parameter_repeat1 = 55,
  aux_sym_string_repeat1 = 56,
  aux_sym_tuple_type_repeat1 = 57,
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
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_fragment] = "_string_fragment",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_function_body] = "function_body",
  [sym_visibility_modifier] = "visibility_modifier",
  [sym_variable_kind] = "variable_kind",
  [sym_type] = "type",
  [sym_primary_expression] = "primary_expression",
  [sym_string] = "string",
  [sym_tuple_type] = "tuple_type",
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
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_fragment] = sym__string_fragment,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_function_body] = sym_function_body,
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym_variable_kind] = sym_variable_kind,
  [sym_type] = sym_type,
  [sym_primary_expression] = sym_primary_expression,
  [sym_string] = sym_string,
  [sym_tuple_type] = sym_tuple_type,
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
  [sym_function_body] = {
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
  [sym_primary_expression] = {
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
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
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
  field_body = 2,
  field_name = 3,
  field_parameters = 4,
  field_superclass = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_superclass] = "superclass",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_alias, 1},
  [4] =
    {field_superclass, 1},
  [5] =
    {field_body, 3},
    {field_name, 1},
  [7] =
    {field_name, 2},
  [8] =
    {field_name, 3},
  [9] =
    {field_name, 1},
    {field_value, 3},
  [11] =
    {field_name, 2},
    {field_value, 4},
  [13] =
    {field_name, 1},
    {field_value, 4},
  [15] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [18] =
    {field_name, 3},
    {field_value, 5},
  [20] =
    {field_name, 2},
    {field_value, 5},
  [22] =
    {field_body, 4},
    {field_name, 2},
    {field_parameters, 3},
  [25] =
    {field_name, 3},
    {field_value, 6},
  [27] =
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
      if (eof) ADVANCE(80);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(113);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '[') ADVANCE(128);
      if (lookahead == ']') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(128);
      if (lookahead == ']') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '/') ADVANCE(117);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '/') ADVANCE(4);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'u') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_static);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '/') ADVANCE(117);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
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
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(109),
    [sym_import_declaration] = STATE(28),
    [sym_class_declaration] = STATE(28),
    [sym_field_declaration] = STATE(28),
    [sym_visibility_modifier] = STATE(66),
    [sym_variable_kind] = STATE(106),
    [sym_return_statement] = STATE(28),
    [sym_statement] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
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
    [anon_sym_return] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_class,
    ACTIONS(30), 1,
      sym_static,
    ACTIONS(36), 1,
      anon_sym_return,
    STATE(66), 1,
      sym_visibility_modifier,
    STATE(106), 1,
      sym_variable_kind,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(21), 2,
      anon_sym_import,
      anon_sym_using,
    ACTIONS(33), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_repeat1,
    ACTIONS(27), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
    STATE(28), 4,
      sym_import_declaration,
      sym_class_declaration,
      sym_field_declaration,
      sym_return_statement,
  [47] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      sym_static,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_visibility_modifier,
    STATE(106), 1,
      sym_variable_kind,
    ACTIONS(7), 2,
      anon_sym_import,
      anon_sym_using,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
    STATE(28), 4,
      sym_import_declaration,
      sym_class_declaration,
      sym_field_declaration,
      sym_return_statement,
  [93] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      sym_static,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_visibility_modifier,
    STATE(106), 1,
      sym_variable_kind,
    ACTIONS(7), 2,
      anon_sym_import,
      anon_sym_using,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(3), 2,
      sym_statement,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
    STATE(28), 4,
      sym_import_declaration,
      sym_class_declaration,
      sym_field_declaration,
      sym_return_statement,
  [139] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(13), 1,
      sym_static,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_visibility_modifier,
    STATE(106), 1,
      sym_variable_kind,
    ACTIONS(7), 2,
      anon_sym_import,
      anon_sym_using,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
    STATE(28), 4,
      sym_import_declaration,
      sym_class_declaration,
      sym_field_declaration,
      sym_return_statement,
  [185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 14,
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
      anon_sym_return,
  [205] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_function,
    ACTIONS(55), 1,
      sym_static,
    STATE(49), 1,
      sym_visibility_modifier,
    STATE(106), 1,
      sym_variable_kind,
    ACTIONS(58), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(7), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(52), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 14,
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
      anon_sym_return,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 14,
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
      anon_sym_return,
  [279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 14,
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
      anon_sym_return,
  [299] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_function,
    ACTIONS(71), 1,
      sym_static,
    STATE(49), 1,
      sym_visibility_modifier,
    STATE(106), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(12), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [333] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_function,
    ACTIONS(71), 1,
      sym_static,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_visibility_modifier,
    STATE(106), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(7), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 14,
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
      anon_sym_return,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 14,
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
      anon_sym_return,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 14,
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
      anon_sym_return,
  [427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 14,
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
      anon_sym_return,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 14,
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
      anon_sym_return,
  [467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 14,
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
      anon_sym_return,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 14,
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
      anon_sym_return,
  [507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 14,
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
      anon_sym_return,
  [527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 13,
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
      anon_sym_return,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 13,
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
      anon_sym_return,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 13,
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
      anon_sym_return,
  [584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 13,
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
      anon_sym_return,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 13,
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
      anon_sym_return,
  [622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 13,
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
      anon_sym_return,
  [641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 13,
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
      anon_sym_return,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 13,
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
      anon_sym_return,
  [679] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      sym_primary_expression,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [708] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_type,
    STATE(114), 1,
      sym_primary_expression,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [737] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_type,
    STATE(114), 1,
      sym_primary_expression,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [766] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(99), 1,
      sym_type,
    STATE(114), 1,
      sym_primary_expression,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      sym_primary_expression,
    STATE(116), 1,
      sym_type,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_type,
    STATE(114), 1,
      sym_primary_expression,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [853] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym_type,
    STATE(114), 1,
      sym_primary_expression,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [882] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_primary_expression,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [908] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(93), 1,
      sym_primary_expression,
    STATE(59), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(107), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 9,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 9,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 9,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 9,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 9,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [1009] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_function,
    STATE(52), 1,
      sym_visibility_modifier,
    STATE(98), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1032] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_visibility_modifier,
    STATE(98), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(11), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_or,
    ACTIONS(129), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
  [1065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_as,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_function_parameter_repeat1,
    STATE(72), 1,
      sym_variable_type_definition,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_semicolon,
  [1094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_extends,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_class_body,
    STATE(87), 1,
      sym_class_inheritance,
  [1110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_function,
    STATE(98), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
  [1124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_as,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(147), 1,
      sym_semicolon,
    STATE(78), 1,
      sym_variable_type_definition,
  [1140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_as,
    ACTIONS(149), 1,
      anon_sym_EQ,
    ACTIONS(151), 1,
      sym_semicolon,
    STATE(86), 1,
      sym_variable_type_definition,
  [1156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_function,
    STATE(96), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
  [1170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_as,
    ACTIONS(155), 1,
      anon_sym_EQ,
    ACTIONS(157), 1,
      sym_semicolon,
    STATE(79), 1,
      sym_variable_type_definition,
  [1186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_as,
    STATE(77), 1,
      sym_variable_type_definition,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      sym_semicolon,
      anon_sym_RBRACK,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      sym_semicolon,
      anon_sym_RBRACK,
  [1218] = 4,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym__string_fragment,
    ACTIONS(170), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [1231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_tuple_type_repeat1,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_COMMA,
      sym_semicolon,
      anon_sym_RBRACK,
  [1253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_function,
      anon_sym_var,
      anon_sym_const,
  [1262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_function_parameter_repeat1,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_COMMA,
      sym_semicolon,
      anon_sym_RBRACK,
  [1284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_function_parameter_repeat1,
  [1297] = 4,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym__string_fragment,
    STATE(74), 1,
      aux_sym_string_repeat1,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_COMMA,
      sym_semicolon,
      anon_sym_RBRACK,
  [1319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(98), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
  [1330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_as,
    ACTIONS(195), 1,
      sym_semicolon,
    STATE(90), 1,
      sym_import_alias,
  [1343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(96), 1,
      sym_variable_kind,
    ACTIONS(15), 2,
      anon_sym_var,
      anon_sym_const,
  [1354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_function_parameter_repeat1,
  [1367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_tuple_type_repeat1,
  [1380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_tuple_type_repeat1,
  [1393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_function_parameter_repeat1,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_COMMA,
      sym_semicolon,
      anon_sym_RBRACK,
  [1415] = 4,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__string_fragment,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [1428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_function_parameter,
  [1438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_EQ,
    ACTIONS(218), 1,
      sym_semicolon,
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(222), 1,
      sym_semicolon,
  [1474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_function_parameter,
  [1484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      sym_variable_identifier,
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_function_body,
  [1504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_function_parameter,
  [1514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_function_body,
  [1524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_function_body,
  [1534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(232), 1,
      sym_semicolon,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_class_body,
  [1554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_semicolon,
  [1561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_semicolon,
  [1568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_semicolon,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_identifier,
  [1582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
  [1589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_semicolon,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_identifier,
  [1603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_identifier,
  [1610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_variable_identifier,
  [1617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_variable_identifier,
  [1624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_variable_identifier,
  [1631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_semicolon,
  [1638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_semicolon,
  [1645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_variable_identifier,
  [1652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_identifier,
  [1666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_semicolon,
  [1673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_variable_identifier,
  [1687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_semicolon,
  [1694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
  [1708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_variable_identifier,
  [1715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
  [1722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_variable_identifier,
  [1729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_variable_identifier,
  [1736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_semicolon,
  [1743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_identifier,
  [1750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_semicolon,
  [1757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 239,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 279,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 407,
  [SMALL_STATE(16)] = 427,
  [SMALL_STATE(17)] = 447,
  [SMALL_STATE(18)] = 467,
  [SMALL_STATE(19)] = 487,
  [SMALL_STATE(20)] = 507,
  [SMALL_STATE(21)] = 527,
  [SMALL_STATE(22)] = 546,
  [SMALL_STATE(23)] = 565,
  [SMALL_STATE(24)] = 584,
  [SMALL_STATE(25)] = 603,
  [SMALL_STATE(26)] = 622,
  [SMALL_STATE(27)] = 641,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 679,
  [SMALL_STATE(30)] = 708,
  [SMALL_STATE(31)] = 737,
  [SMALL_STATE(32)] = 766,
  [SMALL_STATE(33)] = 795,
  [SMALL_STATE(34)] = 824,
  [SMALL_STATE(35)] = 853,
  [SMALL_STATE(36)] = 882,
  [SMALL_STATE(37)] = 908,
  [SMALL_STATE(38)] = 934,
  [SMALL_STATE(39)] = 949,
  [SMALL_STATE(40)] = 964,
  [SMALL_STATE(41)] = 979,
  [SMALL_STATE(42)] = 994,
  [SMALL_STATE(43)] = 1009,
  [SMALL_STATE(44)] = 1032,
  [SMALL_STATE(45)] = 1052,
  [SMALL_STATE(46)] = 1065,
  [SMALL_STATE(47)] = 1084,
  [SMALL_STATE(48)] = 1094,
  [SMALL_STATE(49)] = 1110,
  [SMALL_STATE(50)] = 1124,
  [SMALL_STATE(51)] = 1140,
  [SMALL_STATE(52)] = 1156,
  [SMALL_STATE(53)] = 1170,
  [SMALL_STATE(54)] = 1186,
  [SMALL_STATE(55)] = 1200,
  [SMALL_STATE(56)] = 1209,
  [SMALL_STATE(57)] = 1218,
  [SMALL_STATE(58)] = 1231,
  [SMALL_STATE(59)] = 1244,
  [SMALL_STATE(60)] = 1253,
  [SMALL_STATE(61)] = 1262,
  [SMALL_STATE(62)] = 1275,
  [SMALL_STATE(63)] = 1284,
  [SMALL_STATE(64)] = 1297,
  [SMALL_STATE(65)] = 1310,
  [SMALL_STATE(66)] = 1319,
  [SMALL_STATE(67)] = 1330,
  [SMALL_STATE(68)] = 1343,
  [SMALL_STATE(69)] = 1354,
  [SMALL_STATE(70)] = 1367,
  [SMALL_STATE(71)] = 1380,
  [SMALL_STATE(72)] = 1393,
  [SMALL_STATE(73)] = 1406,
  [SMALL_STATE(74)] = 1415,
  [SMALL_STATE(75)] = 1428,
  [SMALL_STATE(76)] = 1438,
  [SMALL_STATE(77)] = 1446,
  [SMALL_STATE(78)] = 1454,
  [SMALL_STATE(79)] = 1464,
  [SMALL_STATE(80)] = 1474,
  [SMALL_STATE(81)] = 1484,
  [SMALL_STATE(82)] = 1494,
  [SMALL_STATE(83)] = 1504,
  [SMALL_STATE(84)] = 1514,
  [SMALL_STATE(85)] = 1524,
  [SMALL_STATE(86)] = 1534,
  [SMALL_STATE(87)] = 1544,
  [SMALL_STATE(88)] = 1554,
  [SMALL_STATE(89)] = 1561,
  [SMALL_STATE(90)] = 1568,
  [SMALL_STATE(91)] = 1575,
  [SMALL_STATE(92)] = 1582,
  [SMALL_STATE(93)] = 1589,
  [SMALL_STATE(94)] = 1596,
  [SMALL_STATE(95)] = 1603,
  [SMALL_STATE(96)] = 1610,
  [SMALL_STATE(97)] = 1617,
  [SMALL_STATE(98)] = 1624,
  [SMALL_STATE(99)] = 1631,
  [SMALL_STATE(100)] = 1638,
  [SMALL_STATE(101)] = 1645,
  [SMALL_STATE(102)] = 1652,
  [SMALL_STATE(103)] = 1659,
  [SMALL_STATE(104)] = 1666,
  [SMALL_STATE(105)] = 1673,
  [SMALL_STATE(106)] = 1680,
  [SMALL_STATE(107)] = 1687,
  [SMALL_STATE(108)] = 1694,
  [SMALL_STATE(109)] = 1701,
  [SMALL_STATE(110)] = 1708,
  [SMALL_STATE(111)] = 1715,
  [SMALL_STATE(112)] = 1722,
  [SMALL_STATE(113)] = 1729,
  [SMALL_STATE(114)] = 1736,
  [SMALL_STATE(115)] = 1743,
  [SMALL_STATE(116)] = 1750,
  [SMALL_STATE(117)] = 1757,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(95),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(110),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(113),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(60),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(43),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(110),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 8, .production_id = 15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 7, .production_id = 13),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 7, .production_id = 12),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 9),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 10),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 14),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 16),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type_definition, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type_definition, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameter_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameter_repeat1, 2), SHIFT_REPEAT(101),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(36),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameter_repeat1, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inheritance, 2, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 5),
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
