/** @type {import('eslint').Linter.Config} */
module.exports = {
  env: {
    commonjs: true,
    es2021: true,
  },
  globals: {
    grammar: true,
    field: true,
    seq: true,
    choice: true,
    repeat: true,
    repeat1: true,
    optional: true,
    prec: true,
    token: true,
    alias: true
  },
  extends: ['eslint:recommended'],
  parserOptions: {
    ecmaVersion: 'latest',
    sourceType: 'module',
  },
  rules: {
    indent: ['error', 2, { 'SwitchCase': 1 }],
    'max-len': [
      'error',
      { code: 120, ignoreComments: true, ignoreUrls: true, ignoreStrings: true },
    ],
  },
};
