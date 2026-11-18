# `getchar()` e EOF

## Uma leitura por chamada

`getchar()` lê apenas **um** caractere por chamada.

Em um loop típico:

```c
int c;
while ((c = getchar()) != EOF) {
    putchar(c);
}
```

cada iteração consome o próximo caractere do buffer de entrada até o fim do stream.

## Por que `getchar()` retorna `int`, não `char`

Motivo:

- Se houver um caractere disponível, retorna seu código (ex.: `'A'`, `'0'`, `'\n'`).
- Se não houver mais entrada, retorna `EOF` (_End Of File_).

`EOF` é um valor especial que **não** representa um caractere válido (geralmente `-1`). A variável precisa ser do tipo `int` para armazenar tanto qualquer caractere quanto o valor `EOF` sem ambiguidades.

Se a variável fosse `char`, em algumas implementações (especialmente `char` sem sinal) seria impossível distinguir um caractere legítimo do valor de fim de arquivo.

## Relacionado

- [Stream e Buffer](stream-and-buffer.md)

---

## Programas relacionados

- `programs/chapter-1/2-character_stream.c`
- `programs/chapter-1/3-character_counting.c`
