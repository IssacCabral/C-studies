# Null Statement

O corpo de um `for` (ou de outros loops) pode ser uma instrução vazia (`;`), chamada de _null statement_.

Nesse padrão, todo o trabalho é feito no cabeçalho do `for`:

```c
double nc;
for (nc = 0; getchar() != EOF; ++nc)
    ;
printf("%.0f\n", nc);
```

- inicializa `nc`;
- `getchar()` lê um caractere por iteração;
- `++nc` incrementa o contador.

Como não há nenhuma instrução adicional para executar, o corpo do loop é apenas `;`.

É um recurso válido da linguagem, mas deve ser usado com cuidado: um `;` solto após um `for` ou `while` pode parecer um erro ou dificultar a leitura.

---

## Programas relacionados

- `programs/chapter-1/3-character_counting.c`
