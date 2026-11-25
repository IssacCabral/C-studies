# Escape Sequences (Sequências de Escape)

Sequências de escape (escape sequences) são combinações de caracteres iniciadas por uma barra invertida (`\`) que representam caracteres especiais ou valores numéricos em constantes de caracteres e strings.

Embora sejam escritas utilizando dois ou mais caracteres, algumas sequências de escape representam apenas um caractere.

Por exemplo:

c

```c
'\n'
```

Essa sequência representa um único caractere: a quebra de linha (newline).

## 1. Sequências de Escape

A linguagem C define sequências de escape para representar caracteres especiais e caracteres de controle.

| Sequência | Significado                           |
| --------- | ------------------------------------- |
| `\a`      | Alerta sonoro (bell)                  |
| `\b`      | Retrocesso (backspace)                |
| `\f`      | Alimentação de formulário (form feed) |
| `\n`      | Nova linha (newline)                  |
| `\r`      | Retorno de carro (carriage return)    |
| `\t`      | Tabulação horizontal (horizontal tab) |
| `\v`      | Tabulação vertical (vertical tab)     |
| `\\`      | Barra invertida                       |
| `\?`      | Ponto de interrogação                 |
| `\'`      | Aspas simples                         |
| `\"`      | Aspas duplas                          |

Exemplo:

c

```c
#include <stdio.h>

int main()
{
    printf("Hello\nWorld\n");
    printf("Name:\tIsaac\n");

    return 0;
}
```

Nesse exemplo:

- `\n` insere uma quebra de linha.
- `\t` insere uma tabulação horizontal.

## 2. Representações Numéricas

Além das sequências de escape predefinidas, C permite representar caracteres por meio de seus valores numéricos em octal ou hexadecimal.

### 2.1. Representação Octal

A sequência `\ooo` representa um valor numérico em octal, utilizando de um a três dígitos entre `0` e `7`.

Octal é um sistema numérico de base 8.

Exemplo:

c

```c
#define VTAB '\013'  /* ASCII vertical tab */
#define BELL '\007'  /* ASCII bell character */
```

Os valores correspondentes são:

| Representação | Valor decimal | Caractere          |
| ------------- | ------------- | ------------------ |
| `'\013'`      | 11            | Tabulação vertical |
| `'\007'`      | 7             | Alerta sonoro      |

### 2.2. Representação Hexadecimal

A sequência `\xhh` representa um valor numérico hexadecimal, utilizando um ou mais dígitos entre `0` e `9`, `a` e `f` ou `A` e `F`.

Hexadecimal é um sistema numérico de base 16.

Exemplo:

c

```c
#define VTAB '\xb'  /* ASCII vertical tab */
#define BELL '\x7'  /* ASCII bell character */
```

Os valores correspondentes são:

| Representação | Valor hexadecimal | Valor decimal |
| ------------- | ----------------- | ------------- |
| `'\xb'`       | B                 | 11            |
| `'\x7'`       | 7                 | 7             |

As representações octal e hexadecimal podem expressar o mesmo valor numérico:

c

```c
'\013' == '\xb'  /* Mesmo valor: 11 */
'\007' == '\x7'  /* Mesmo valor: 7 */
```

A diferença está apenas no sistema numérico utilizado.

## 3. Caractere Nulo (`'\0'`)

A sequência `'\0'` representa o caractere nulo (null character), cujo valor numérico é zero.

c

```c
char c = '\0';
```

Esse caractere é utilizado para indicar o término de strings em C.

Por exemplo:

c

```c
char name[] = "Ana";
```

Internamente, o array contém:

text

```text
+-----+-----+-----+------+
| 'A' | 'n' | 'a' | '\0' |
+-----+-----+-----+------+
```

O caractere nulo indica onde a string termina.

### 3.1. Diferença entre `0` e `'\0'`

Embora sejam escritos de maneiras diferentes, ambos representam o valor numérico zero.

c

```c
0       /* Constante inteira */
'\0'    /* Constante de caractere */
```

A diferença está na intenção expressa pelo código:

- `0` enfatiza o valor numérico.
- `'\0'` enfatiza a natureza de caractere do valor.

O valor numérico é o mesmo: zero.

É comum utilizar `'\0'` em vez de `0` quando queremos deixar explícito que estamos tratando de um caractere.

## 4\. Observações Importantes

- Uma sequência de escape pode representar um único caractere, mesmo quando é escrita utilizando vários símbolos.
- Representações octais e hexadecimais permitem especificar valores numéricos de caracteres.
- `'\0'` não é o mesmo que `'0'`: o primeiro representa o valor zero, enquanto o segundo representa o caractere do dígito zero.
- O caractere nulo (`'\0'`) não deve ser confundido com o ponteiro nulo (`NULL`).

## Referências

- Kernighan, Brian W.; Ritchie, Dennis M. The C Programming Language, 2ª edição, seção 2.3.
- ISO C Standard (ISO/IEC 9899).
