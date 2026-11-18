# Tipos inteiros para contagem

Ao contar caracteres (ou outros eventos) lidos da entrada até EOF, a quantidade pode ser maior do que um `int` comporta em algumas arquiteturas.

Por isso, um contador pode ser declarado como `long`:

```c
long nc;
nc = 0;
while (getchar() != EOF) {
    ++nc;
}
printf("%ld\n", nc);
```

O especificador `"%ld"` informa ao `printf` que a variável é um `long`.

Outra variante do livro usa `double` com `%.0f` para imprimir o contador sem casas decimais — útil quando se quer um tipo com faixa maior, embora `long` (ou tipos de largura fixa posteriores) seja a escolha mais natural para contagem inteira.

---

## Programas relacionados

- `programs/chapter-1/3-character_counting.c`
