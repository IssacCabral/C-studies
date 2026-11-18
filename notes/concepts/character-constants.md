# Constantes de caractere

Em C, uma constante de caractere (ex.: `'A'` ou `'\n'`) representa um valor inteiro correspondente ao código do caractere (ASCII, por exemplo).

Por isso, ela pode ser atribuída tanto a uma variável do tipo `char` quanto a uma variável do tipo `int`:

```c
char c = 'A'; /* armazena o caractere */
int  n = 'A'; /* armazena o código inteiro (65 em ASCII) */
```

## Uso em comparações

Constantes de caractere podem ser usadas em expressões e comparações. Por exemplo:

```c
current_character == '\n'
```

equivale a comparar o código inteiro do caractere de quebra de linha, mas é muito mais legível e independente da codificação utilizada.

## Aspas simples vs aspas duplas

| Forma   | Significado                                              |
| ------- | -------------------------------------------------------- |
| `'\n'`  | Um caractere (constante de caractere)                    |
| `"\n"`  | Uma string: o caractere `'\n'` e o terminador `'\0'`     |

Misturar os dois é um erro comum: comparações com `==` usam constantes de caractere; strings envolvem arrays e o terminador nulo.

## Relacionado

- [Strings terminadas em nulo](null-terminated-strings.md)

---

## Programas relacionados

- `programs/chapter-1/4-line_counting.c`
