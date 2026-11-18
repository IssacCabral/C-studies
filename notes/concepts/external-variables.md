# Variáveis externas

Uma variável definida fora de qualquer função é uma variável externa (global) e pode ser utilizada por diferentes funções.

## Definição

```c
int max;
```

Cria a variável e reserva espaço de memória.

## Declaração

```c
extern int max;
```

Apenas informa ao compilador que a variável existe em outro lugar. Não cria uma nova variável nem reserva armazenamento.

Se a definição da variável externa aparece antes de seu uso, o `extern` pode ser omitido.

## Vários arquivos

Em programas divididos em vários arquivos, normalmente usamos `extern` para informar aos outros arquivos sobre variáveis definidas em outro arquivo. Essas declarações podem ser colocadas em um arquivo `.h` (header).

Exemplo neste repositório: `programs/chapter-1/9-find_longest_line_multiple_files/`.

## Cuidado

Variáveis externas facilitam o compartilhamento de dados, mas seu uso excessivo aumenta o acoplamento. Qualquer função pode alterar esses dados, tornando o programa mais difícil de entender, testar e modificar.

Sempre que possível, passar dados por parâmetros torna as dependências da função mais explícitas e mantém as funções mais genéricas e reutilizáveis.

---

## Programas relacionados

- `programs/chapter-1/8-find_longest_line_extern.c`
- `programs/chapter-1/9-find_longest_line_multiple_files/`
