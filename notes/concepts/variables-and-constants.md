# Inicialização de Variáveis e Constantes

## 1. Inicialização de Variáveis

Inicializar uma variável significa atribuir um valor inicial a ela no momento de sua declaração.

Em C, o comportamento da inicialização depende da duração de armazenamento (_storage duration_) da variável.

Existem diferentes categorias de duração de armazenamento, mas vamos começar pelas duas abordadas neste estudo:

- **Duração automática:** comum em variáveis locais de funções e blocos.
- **Duração estática:** presente em variáveis globais e variáveis locais declaradas com `static`.

## 2. Variáveis com Duração de Armazenamento Estática

Variáveis com duração de armazenamento estática são inicializadas apenas uma vez, antes da execução normal do programa.

Isso significa que seu valor inicial é estabelecido antes de o programa começar a executar suas instruções.

Exemplo:

```c
#include <stdio.h>

int global = 10;

int main()
{
    static int counter = 5;

    printf("%d\n", global);
    printf("%d\n", counter);

    return 0;
}
```

Nesse exemplo:

- `global` possui duração de armazenamento estática por ser uma variável global.
- `counter` possui duração de armazenamento estática por utilizar o especificador `static`.

### 2.1. Inicializadores constantes

Variáveis com duração de armazenamento estática precisam de inicializadores constantes, conforme as regras da linguagem C.

Exemplo:

```c
int global = 10; // Correto

int main()
{
    int value = 20;

    static int counter = 10; // Correto

    // static int result = value; // Incorreto

    return 0;
}
```

O problema com `result` é que `value` é uma variável comum, cujo valor não constitui uma expressão constante adequada para essa inicialização.

O inicializador de uma variável com duração de armazenamento estática não pode depender de um valor calculado durante a execução normal do programa.

### 2.2. Inicialização padrão

Se uma variável com duração de armazenamento estática não receber um inicializador explícito, ela será inicializada automaticamente com zero.

Exemplo:

```c
#include <stdio.h>

int global;

int main()
{
    static int counter;

    printf("%d\n", global);  // 0
    printf("%d\n", counter); // 0

    return 0;
}
```

Isso também vale para arrays e estruturas: seus elementos e membros são inicializados com zero (ou valores equivalentes a zero para seus respectivos tipos).

## 3. Variáveis com Duração de Armazenamento Automática

Variáveis automáticas são normalmente declaradas dentro de funções ou blocos, sem utilizar `static`.

Quando possuem um inicializador explícito, são inicializadas cada vez que a execução entra no bloco em que foram declaradas.

Diferentemente das variáveis estáticas, seus inicializadores podem utilizar expressões calculadas durante a execução do programa.

Exemplo:

```c
#include <stdio.h>

int main()
{
    int x = 10;
    int y = x * 2;

    printf("%d\n", y); // 20

    return 0;
}
```

Nesse exemplo, `y` recebe o resultado de uma expressão que depende do valor de outra variável.

### 3.1. Variáveis automáticas sem inicialização

Se uma variável automática não receber um inicializador explícito, seu valor será indeterminado.

Exemplo:

```c
int main()
{
    int number;

    return 0;
}
```

Nesse caso, `number` não recebe automaticamente zero.

Seu valor é indeterminado, portanto não devemos utilizá-lo antes de atribuir um valor válido.

**Importante:** ler uma variável automática não inicializada pode resultar em comportamento indefinido.

## 4. Qualificador const

O qualificador `const` é utilizado para indicar que um objeto não deve ser modificado por meio de uma expressão que tente alterá-lo.

Exemplo:

```c
const double PI = 3.14159;
```

Nesse caso, `PI` é um objeto constante.

Uma tentativa de modificar seu valor diretamente resulta em uma violação das restrições da linguagem:

```c
PI = 3.14; // Erro de compilação
```

O `const` é especialmente útil para valores que não devem ser modificados durante a execução do programa.

### 4.1. const em arrays

O qualificador `const` também pode ser utilizado em arrays.

Exemplo:

```c
const char message[] = "warning: ";
```

Nesse caso, os elementos do array não podem ser modificados.

```c
message[0] = 'W'; // Erro de compilação
```

### 4.2. const em parâmetros de funções

O `const` também pode ser utilizado nos parâmetros de funções para indicar que a função não deve modificar determinado objeto por meio daquele parâmetro.

Exemplo:

```c
int string_length(const char text[]);
```

Nesse caso, a função recebe um array de caracteres e não deve modificar seus elementos por meio de `text`.

Exemplo de implementação:

```c
int string_length(const char text[])
{
    int count = 0;

    while (text[count] != '\0') {
        count++;
    }

    return count;
}
```

A função consegue ler os caracteres normalmente, mas não pode modificá-los através de `text`.

## 5. Tentativa de Modificar um Objeto const

O compilador impede tentativas diretas de modificar objetos declarados como `const`.

Entretanto, é possível tentar contornar essa proteção utilizando ponteiros e conversões de tipos.

Exemplo:

```c
const int number = 10;

int *ptr = (int *)&number;

*ptr = 20;
```

Apesar de esse código poder compilar, modificar um objeto que foi originalmente declarado como `const` dessa maneira resulta em comportamento indefinido (_undefined behavior_).

Portanto, não devemos tentar modificar objetos constantes utilizando ponteiros.

---

## Referências

- Kernighan, Brian W.; Ritchie, Dennis M. _The C Programming Language_, 2ª edição.
- ISO C Standard (ISO/IEC 9899).
