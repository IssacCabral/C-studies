# Strings terminadas em nulo

Em C, uma string é representada por um array de caracteres terminado pelo caractere nulo (`'\0'`).

O array por si só **não** recebe automaticamente esse terminador quando é preenchido manualmente; ele apenas reserva espaço na memória. Por isso, após ler todos os caracteres da linha, é necessário inserir explicitamente o `'\0'` para indicar onde a string termina.

## Exemplo

Entrada: `"hi"`

Antes do terminador:

```text
+---+---+----+----+
| h | i | ?  | ?  |
+---+---+----+----+
```

Depois de `s[i] = '\0'`:

```text
+---+---+----+----+
| h | i | \0 | ?  |
+---+---+----+----+
```

## Por que isso importa

Funções como `printf`, `strlen`, `strcpy` e `strcmp` dependem desse terminador para saber onde a string termina.

O caractere `'\0'` possui valor numérico zero (`0`). Por isso, uma inicialização como:

```c
char s[10] = {0};
```

preenche todas as posições do array com o valor zero, que para um `char` corresponde exatamente ao caractere nulo `'\0'`.

## Relacionado

- [Constantes de caractere](character-constants.md)

---

## Programas relacionados

- `programs/chapter-1/7-find_longest_line.c`
- `programs/chapter-1/8-find_longest_line_extern.c`
