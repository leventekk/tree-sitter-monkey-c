/** @type {import('eslint').Linter.Config} */
module.exports = {
  env: {
    commonjs: true,
    es2021: true,
  },
  extends: 'eslint:recommended',
  parserOptions: {
    ecmaVersion: 'latest',
    sourceType: 'module',
  },
  globals: {
    grammar: true
  },
  rules: {
    indent: ['error', 2, { 'SwitchCase': 1 }],
    'max-len': [
      'error',
      { code: 120, ignoreComments: true, ignoreUrls: true, ignoreStrings: true },
    ],
  },
};
