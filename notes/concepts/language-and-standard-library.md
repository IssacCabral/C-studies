Writing

# Linguagem C e Biblioteca Padrão

## 1\. Linguagem C

A linguagem C define as regras e construções utilizadas para escrever programas em C.

Ela especifica como os programas são estruturados, como as instruções são escritas e como o compilador deve interpretar o código.

Alguns exemplos de elementos que fazem parte da linguagem:

- **Tipos de dados:** `int`, `char`, `float`, `double`.
- **Variáveis:** declaração, inicialização e atribuição.
- **Operadores:** `+`, `-`, `*`, `/`, `%`, `==`, `&&`.
- **Estruturas condicionais:** `if`, `else`, `switch`.
- **Estruturas de repetição:** `for`, `while`, `do`.
- **Funções:** declaração, definição e chamadas de funções.
- **Ponteiros:** `*` e `&`.
- **Arrays:** declaração e acesso aos elementos.
- **Estruturas:** `struct` e `union`.
- **Controle de fluxo:** `return`, `break`, `continue`, `goto`.

Esses são elementos definidos pela própria linguagem C.

## 2\. Biblioteca Padrão

A Biblioteca Padrão do C (C Standard Library) é uma coleção de funções, macros e tipos predefinidos que fornecem funcionalidades comumente utilizadas em programas C.

Ela é especificada pelo padrão C, mas suas funções não são construções da linguagem propriamente dita.

Alguns exemplos:

- `printf()` — exibe informações formatadas.
- `scanf()` — recebe informações formatadas.
- `strlen()` — retorna o tamanho de uma string.
- `malloc()` — aloca memória dinamicamente.
- `free()` — libera memória alocada dinamicamente.
- `sqrt()` — calcula a raiz quadrada.

Essas funções são disponibilizadas pela biblioteca padrão, e não são funcionalidades intrínsecas da linguagem.

### 2.1. Cabeçalhos (Headers)

As funcionalidades da biblioteca padrão são disponibilizadas por meio de arquivos de cabeçalho (_header files_).

Alguns exemplos:

| Cabeçalho  | Funcionalidade                                |
| ---------- | --------------------------------------------- |
| `stdio.h`  | Entrada e saída de dados                      |
| `stdlib.h` | Alocação de memória, conversões e utilitários |
| `string.h` | Manipulação de strings                        |
| `math.h`   | Funções matemáticas                           |
| `ctype.h`  | Classificação e conversão de caracteres       |
| `time.h`   | Data e hora                                   |
| `assert.h` | Verificações durante a execução               |

Para utilizar uma função da biblioteca, geralmente incluímos o cabeçalho correspondente.

Exemplo:

c

```c
#include <stdio.h>

int main()
{
    printf("Hello, world!\n");

    return 0;
}
```

Nesse exemplo:

- `printf()` é uma função fornecida pela biblioteca padrão.
- `stdio.h` contém a declaração de `printf()`.
- `#include` é uma diretiva do pré-processador.

## 3\. Pré-processador

O pré-processador é responsável por processar determinadas diretivas antes da compilação propriamente dita.

Essas diretivas começam com o caractere `#`.

Alguns exemplos:

- `#include` — inclui o conteúdo de um arquivo de cabeçalho.
- `#define` — define macros.
- `#ifdef` — verifica se uma macro está definida.
- `#ifndef` — verifica se uma macro não está definida.

Exemplo:

c

```c
#include <stdio.h>

#define PI 3.14159

int main()
{
    double raio = 5.0;
    double area = PI * raio * raio;

    printf("Area: %f\n", area);

    return 0;
}
```

Nesse exemplo, `PI` é uma macro. Antes da compilação, o pré-processador substitui suas ocorrências pelo valor `3.14159`.

As diretivas do pré-processador são especificadas pelo padrão C, mas não são instruções ou funções comuns da linguagem.

## 4\. Bibliotecas Externas e Recursos Específicos de Plataformas

Nem tudo o que pode ser utilizado em um programa C pertence à linguagem C ou à sua biblioteca padrão.

Também existem bibliotecas externas e APIs específicas de determinados sistemas operacionais.

### 4.1. Bibliotecas Externas

São bibliotecas que oferecem funcionalidades adicionais, não disponibilizadas pela biblioteca padrão do C.

Exemplos:

- **SDL:** desenvolvimento de jogos e aplicações multimídia.
- **OpenSSL:** operações criptográficas.
- **SQLite:** gerenciamento de bancos de dados.

### 4.2. APIs Específicas de Plataformas

Os sistemas operacionais disponibilizam suas próprias APIs, que podem ser utilizadas por programas escritos em C.

Exemplos:

- `fork()` — cria um novo processo em sistemas POSIX.
- `CreateProcess()` — cria um processo no Windows.
- `sleep()` — suspende a execução, dependendo da plataforma ou biblioteca utilizada.

Esses recursos não são necessariamente portáveis entre diferentes sistemas operacionais.

## 5\. Resumo

Podemos organizar o ambiente de programação em C em quatro categorias principais:

| Categoria                   | Exemplos                                      |
| --------------------------- | --------------------------------------------- |
| Linguagem C                 | `int`, `if`, `for`, `return`, ponteiros       |
| Pré-processador             | `#include`, `#define`, `#ifdef`               |
| Biblioteca Padrão           | `printf()`, `scanf()`, `strlen()`, `malloc()` |
| Bibliotecas externas e APIs | SDL, OpenSSL, SQLite, Windows API             |

### Distinção importante

`printf()` não é uma construção da linguagem C. É uma função comum fornecida pela Biblioteca Padrão.

O padrão C especifica tanto a linguagem quanto sua biblioteca padrão. Portanto, embora `printf()` não faça parte da linguagem propriamente dita, ela faz parte do ambiente padronizado de programação em C.

Um compilador e uma implementação da biblioteca padrão que estejam em conformidade com o mesmo padrão C devem fornecer o comportamento especificado por esse padrão.

---

## Referências

- Kernighan, Brian W.; Ritchie, Dennis M. _The C Programming Language_, 2ª edição.
- ISO C Standard (ISO/IEC 9899).
