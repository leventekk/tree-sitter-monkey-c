#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 15

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
  anon_sym_hidden = 10,
  anon_sym_public = 11,
  anon_sym_protected = 12,
  anon_sym_private = 13,
  sym_identifier = 14,
  sym_variable_identifier = 15,
  sym_static = 16,
  anon_sym_var = 17,
  anon_sym_const = 18,
  sym_semicolon = 19,
  sym_number = 20,
  anon_sym_DQUOTE = 21,
  sym__string_fragment = 22,
  sym_true = 23,
  sym_false = 24,
  sym_null = 25,
  anon_sym_LBRACK = 26,
  anon_sym_COMMA = 27,
  anon_sym_RBRACK = 28,
  sym_comment = 29,
  sym_program = 30,
  sym_import_declaration = 31,
  sym_import_alias = 32,
  sym_class_declaration = 33,
  sym_class_inheritance = 34,
  sym_class_body = 35,
  sym_field_declaration = 36,
  sym_variable_type_definition = 37,
  sym_function_declaration = 38,
  sym_visibility_modifier = 39,
  sym_variable_kind = 40,
  sym_type = 41,
  sym_primary_expression = 42,
  sym_string = 43,
  sym_tuple_type = 44,
  sym_statement = 45,
  aux_sym_program_repeat1 = 46,
  aux_sym_class_body_repeat1 = 47,
  aux_sym_string_repeat1 = 48,
  aux_sym_tuple_type_repeat1 = 49,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
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
  [sym_visibility_modifier] = "visibility_modifier",
  [sym_variable_kind] = "variable_kind",
  [sym_type] = "type",
  [sym_primary_expression] = "primary_expression",
  [sym_string] = "string",
  [sym_tuple_type] = "tuple_type",
  [sym_statement] = "statement",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_visibility_modifier] = sym_visibility_modifier,
  [sym_variable_kind] = sym_variable_kind,
  [sym_type] = sym_type,
  [sym_primary_expression] = sym_primary_expression,
  [sym_string] = sym_string,
  [sym_tuple_type] = sym_tuple_type,
  [sym_statement] = sym_statement,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  field_superclass = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_name] = "name",
  [field_superclass] = "superclass",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
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
    {field_name, 0},
  [6] =
    {field_body, 3},
    {field_name, 1},
  [8] =
    {field_name, 2},
  [9] =
    {field_name, 3},
  [10] =
    {field_name, 1},
    {field_value, 3},
  [12] =
    {field_name, 2},
    {field_value, 4},
  [14] =
    {field_name, 1},
    {field_value, 4},
  [16] =
    {field_name, 3},
    {field_value, 5},
  [18] =
    {field_name, 2},
    {field_value, 5},
  [20] =
    {field_name, 3},
    {field_value, 6},
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
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(98);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '/') ADVANCE(102);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 67:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 68:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'u') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_static);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '/') ADVANCE(102);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
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
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
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
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(81),
    [sym_import_declaration] = STATE(40),
    [sym_class_declaration] = STATE(40),
    [sym_statement] = STATE(30),
    [aux_sym_program_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_static,
    STATE(33), 1,
      sym_visibility_modifier,
    STATE(76), 1,
      sym_variable_kind,
    ACTIONS(19), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(3), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(13), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [34] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_static,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_visibility_modifier,
    STATE(76), 1,
      sym_variable_kind,
    ACTIONS(19), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(4), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(13), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [68] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_static,
    STATE(33), 1,
      sym_visibility_modifier,
    STATE(76), 1,
      sym_variable_kind,
    ACTIONS(34), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(4), 3,
      sym_field_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(25), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [102] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      sym_primary_expression,
    STATE(75), 1,
      sym_type,
    STATE(47), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(37), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [131] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_primary_expression,
    STATE(47), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(37), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [160] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_type,
    STATE(74), 1,
      sym_primary_expression,
    STATE(47), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(37), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [189] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_type,
    STATE(74), 1,
      sym_primary_expression,
    STATE(47), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(37), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [218] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_type,
    STATE(74), 1,
      sym_primary_expression,
    STATE(47), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(37), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [247] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_type,
    STATE(74), 1,
      sym_primary_expression,
    STATE(47), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(37), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [276] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      sym_primary_expression,
    STATE(80), 1,
      sym_type,
    STATE(47), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(37), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_primary_expression,
    STATE(47), 2,
      sym_string,
      sym_tuple_type,
    ACTIONS(37), 4,
      sym_variable_identifier,
      sym_true,
      sym_false,
      sym_null,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [466] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(36), 1,
      sym_visibility_modifier,
    STATE(84), 1,
      sym_variable_kind,
    ACTIONS(19), 2,
      anon_sym_var,
      anon_sym_const,
    ACTIONS(13), 4,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 9,
      anon_sym_RBRACE,
      anon_sym_hidden,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      sym_identifier,
      sym_static,
      anon_sym_var,
      anon_sym_const,
  [579] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_class,
    ACTIONS(81), 2,
      anon_sym_import,
      anon_sym_using,
    STATE(29), 2,
      sym_statement,
      aux_sym_program_repeat1,
    STATE(40), 2,
      sym_import_declaration,
      sym_class_declaration,
  [601] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_import,
      anon_sym_using,
    STATE(29), 2,
      sym_statement,
      aux_sym_program_repeat1,
    STATE(40), 2,
      sym_import_declaration,
      sym_class_declaration,
  [623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_as,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      sym_semicolon,
    STATE(64), 1,
      sym_variable_type_definition,
  [639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_extends,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_class_body,
    STATE(59), 1,
      sym_class_inheritance,
  [655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(84), 1,
      sym_variable_kind,
    ACTIONS(19), 2,
      anon_sym_var,
      anon_sym_const,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
  [679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
  [689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(83), 1,
      sym_variable_kind,
    ACTIONS(19), 2,
      anon_sym_var,
      anon_sym_const,
  [703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
  [713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_as,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      sym_semicolon,
    STATE(60), 1,
      sym_variable_type_definition,
  [729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
  [749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_as,
    ACTIONS(115), 1,
      anon_sym_EQ,
    ACTIONS(117), 1,
      sym_semicolon,
    STATE(62), 1,
      sym_variable_type_definition,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
  [775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_using,
      anon_sym_class,
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      sym_semicolon,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      sym_semicolon,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_or,
    ACTIONS(127), 2,
      anon_sym_EQ,
      sym_semicolon,
  [814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 3,
      sym_semicolon,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [823] = 4,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym__string_fragment,
    ACTIONS(137), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      sym_identifier,
      anon_sym_var,
      anon_sym_const,
  [845] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym__string_fragment,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      sym_semicolon,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_tuple_type_repeat1,
  [880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_tuple_type_repeat1,
  [893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_as,
    ACTIONS(159), 1,
      sym_semicolon,
    STATE(68), 1,
      sym_import_alias,
  [906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_tuple_type_repeat1,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      sym_semicolon,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [928] = 4,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym__string_fragment,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      sym_semicolon,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_class_body,
  [960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      sym_semicolon,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(177), 1,
      sym_semicolon,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_EQ,
      sym_semicolon,
  [996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      sym_semicolon,
  [1006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_identifier,
  [1013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_semicolon,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_semicolon,
  [1027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_semicolon,
  [1034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_semicolon,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
  [1048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_semicolon,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_semicolon,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
  [1069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_semicolon,
  [1076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_semicolon,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_variable_identifier,
  [1090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_identifier,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
  [1104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
  [1111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_semicolon,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_variable_identifier,
  [1132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_variable_identifier,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_variable_identifier,
  [1146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 247,
  [SMALL_STATE(11)] = 276,
  [SMALL_STATE(12)] = 305,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 346,
  [SMALL_STATE(15)] = 361,
  [SMALL_STATE(16)] = 376,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 406,
  [SMALL_STATE(19)] = 421,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 466,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 504,
  [SMALL_STATE(25)] = 519,
  [SMALL_STATE(26)] = 534,
  [SMALL_STATE(27)] = 549,
  [SMALL_STATE(28)] = 564,
  [SMALL_STATE(29)] = 579,
  [SMALL_STATE(30)] = 601,
  [SMALL_STATE(31)] = 623,
  [SMALL_STATE(32)] = 639,
  [SMALL_STATE(33)] = 655,
  [SMALL_STATE(34)] = 669,
  [SMALL_STATE(35)] = 679,
  [SMALL_STATE(36)] = 689,
  [SMALL_STATE(37)] = 703,
  [SMALL_STATE(38)] = 713,
  [SMALL_STATE(39)] = 729,
  [SMALL_STATE(40)] = 739,
  [SMALL_STATE(41)] = 749,
  [SMALL_STATE(42)] = 765,
  [SMALL_STATE(43)] = 775,
  [SMALL_STATE(44)] = 785,
  [SMALL_STATE(45)] = 794,
  [SMALL_STATE(46)] = 803,
  [SMALL_STATE(47)] = 814,
  [SMALL_STATE(48)] = 823,
  [SMALL_STATE(49)] = 836,
  [SMALL_STATE(50)] = 845,
  [SMALL_STATE(51)] = 858,
  [SMALL_STATE(52)] = 867,
  [SMALL_STATE(53)] = 880,
  [SMALL_STATE(54)] = 893,
  [SMALL_STATE(55)] = 906,
  [SMALL_STATE(56)] = 919,
  [SMALL_STATE(57)] = 928,
  [SMALL_STATE(58)] = 941,
  [SMALL_STATE(59)] = 950,
  [SMALL_STATE(60)] = 960,
  [SMALL_STATE(61)] = 970,
  [SMALL_STATE(62)] = 978,
  [SMALL_STATE(63)] = 988,
  [SMALL_STATE(64)] = 996,
  [SMALL_STATE(65)] = 1006,
  [SMALL_STATE(66)] = 1013,
  [SMALL_STATE(67)] = 1020,
  [SMALL_STATE(68)] = 1027,
  [SMALL_STATE(69)] = 1034,
  [SMALL_STATE(70)] = 1041,
  [SMALL_STATE(71)] = 1048,
  [SMALL_STATE(72)] = 1055,
  [SMALL_STATE(73)] = 1062,
  [SMALL_STATE(74)] = 1069,
  [SMALL_STATE(75)] = 1076,
  [SMALL_STATE(76)] = 1083,
  [SMALL_STATE(77)] = 1090,
  [SMALL_STATE(78)] = 1097,
  [SMALL_STATE(79)] = 1104,
  [SMALL_STATE(80)] = 1111,
  [SMALL_STATE(81)] = 1118,
  [SMALL_STATE(82)] = 1125,
  [SMALL_STATE(83)] = 1132,
  [SMALL_STATE(84)] = 1139,
  [SMALL_STATE(85)] = 1146,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(49),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(21),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(82),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 8, .production_id = 14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, .production_id = 8),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 10),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 1, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, .production_id = 11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 7, .production_id = 12),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 7, .production_id = 13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(85),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type_definition, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifier, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(50),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2), SHIFT_REPEAT(12),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_type_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_type_definition, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_alias, 2, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inheritance, 2, .production_id = 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_kind, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
