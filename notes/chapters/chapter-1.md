# Chapter 1 — A Tutorial Introduction

Índice das anotações do Capítulo 1. Conceitos reutilizáveis ficam em [`notes/concepts/`](../concepts/); aqui só o fio do livro e os links.

## 1.1 Getting Started

### Language and Standard Library

O livro apresenta uma distinção entre a linguagem C e sua biblioteca padrão.

- Conceito: [Linguagem C e Biblioteca Padrão](../concepts/language-and-standard-library.md)
- Conceito: [Padrões e Versões da Linguagem C](../concepts/c-language-standards.md)

## 1.2 Variables and Arithmetic Expressions

- Programa: `programs/chapter-1/1-celsius.c`
- Comentário auxiliar no código: constantes simbólicas (`#define`)

## 1.5 Character Input and Output

### File Copying

- Programa: `programs/chapter-1/2-character_stream.c`
- Conceitos:
  - [Stream e Buffer](../concepts/stream-and-buffer.md)
  - [`getchar()` e EOF](../concepts/getchar-and-eof.md)

### Character Counting

- Programa: `programs/chapter-1/3-character_counting.c`
- Conceitos:
  - [Tipos inteiros para contagem](../concepts/integer-types-for-counting.md)
  - [Null Statement](../concepts/null-statement.md)
  - [`getchar()` e EOF](../concepts/getchar-and-eof.md)

### Line Counting

- Programa: `programs/chapter-1/4-line_counting.c`
- Conceito: [Constantes de caractere](../concepts/character-constants.md)

### Word Counting

- Programas:
  - `programs/chapter-1/5-word_counting.c`
  - `programs/chapter-1/5-word_counting2.c`
- No código: definição operacional de “palavra” (sequência sem espaço, tab ou nova linha)

## 1.6 Arrays

- Programa: `programs/chapter-1/6-digit_frequency_counter.c`

## 1.9 Character Arrays

- Programa: `programs/chapter-1/7-find_longest_line.c`
- Conceito: [Strings terminadas em nulo](../concepts/null-terminated-strings.md)

## 1.10 External Variables and Scope

- Programa: `programs/chapter-1/8-find_longest_line_extern.c`
- Programa (vários arquivos): `programs/chapter-1/9-find_longest_line_multiple_files/`
- Conceito: [Variáveis externas](../concepts/external-variables.md)
