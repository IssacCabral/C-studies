# Stream e Buffer

## Stream

Stream (fluxo) é um conceito lógico: a forma como o programa enxerga os dados.

Em C, a entrada padrão (`stdin`) é tratada como um stream de caracteres. O programa não precisa saber se os dados vêm do teclado, de um arquivo ou de um pipe — ele lê caracteres do fluxo.

## Buffer

Buffer é uma área de memória usada para armazenar temporariamente esses dados.

Quando digitamos uma linha e pressionamos Enter, o sistema coloca os caracteres em um buffer de entrada, por exemplo:

```text
Entrada: "issac\n"
Buffer:  ['i']['s']['s']['a']['c']['\n']
```

Cada chamada de `getchar()` consome (remove) o próximo caractere desse buffer:

1. 1ª chamada → `'i'`
2. imprime `'i'` → lê `'s'`
3. imprime `'s'` → lê `'s'`
4. imprime `'s'` → lê `'a'`
5. imprime `'a'` → lê `'c'`
6. imprime `'c'` → lê `'\n'`
7. imprime `'\n'` → espera novos dados ou EOF

O loop termina somente quando `getchar()` retorna EOF (fim da entrada).

## Relação

| Conceito | Papel                                      |
| -------- | ------------------------------------------ |
| Stream   | Visão lógica do fluxo de dados             |
| Buffer   | Armazenamento temporário dos caracteres    |

---

## Programas relacionados

- `programs/chapter-1/2-character_stream.c`
