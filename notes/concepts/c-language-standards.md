# Padrões e Versões da Linguagem C

## 1. O que é ANSI?

ANSI significa _American National Standards Institute_ (Instituto Nacional Americano de Padronização).

É uma organização responsável por coordenar e aprovar padrões técnicos nos Estados Unidos, promovendo a padronização de tecnologias, produtos e processos.

No contexto da linguagem C, o ANSI teve um papel importante na sua padronização.

## 2. Por que foi necessário padronizar C?

Antes da existência de um padrão oficial, diferentes compiladores implementavam C com algumas diferenças.

Isso gerava problemas de portabilidade e compatibilidade:

- Um programa que funcionava em determinado compilador poderia apresentar problemas em outro.
- Algumas funcionalidades podiam ter comportamentos diferentes.
- Não existia uma especificação única que os fabricantes de compiladores precisassem seguir.

Para resolver esses problemas, surgiu a necessidade de estabelecer um padrão oficial para a linguagem.

## 3. ANSI C (1989)

Em 1989, o ANSI aprovou o primeiro padrão oficial da linguagem C, identificado como **ANSI X3.159-1989**.

Esse padrão ficou conhecido como **ANSI C** ou **C89**.

Ele estabeleceu especificações para:

- A sintaxe e a semântica da linguagem C.
- Os tipos de dados e as operações.
- A declaração e definição de funções.
- O pré-processador.
- A biblioteca padrão, incluindo funções como `printf()` e `scanf()`.

Com isso, diferentes compiladores passaram a ter uma especificação comum para seguir, favorecendo a portabilidade dos programas.

## 4. ISO C (1990)

Em 1990, o padrão ANSI foi adotado internacionalmente pela ISO (_International Organization for Standardization_), organização responsável pela elaboração de padrões internacionais.

O documento recebeu a identificação **ISO/IEC 9899:1990**.

Essa versão ficou conhecida como **C90**.

C89 e C90 representam essencialmente o mesmo padrão. A diferença está na identificação e no processo de publicação: C89 faz referência à aprovação pelo ANSI em 1989, enquanto C90 faz referência à adoção internacional pela ISO em 1990.

## 5. Evolução dos padrões de C

A linguagem C continuou evoluindo e recebeu diversas revisões ao longo dos anos.

| Padrão |  Ano | Descrição                                                                                           |
| ------ | ---: | --------------------------------------------------------------------------------------------------- |
| C89    | 1989 | Primeiro padrão ANSI                                                                                |
| C90    | 1990 | Adoção internacional pela ISO                                                                       |
| C99    | 1999 | Introdução de diversas funcionalidades, como declarações de variáveis em qualquer ponto de um bloco |
| C11    | 2011 | Novas funcionalidades, incluindo suporte a threads                                                  |
| C17    | 2018 | Revisão focada principalmente em correções e esclarecimentos do C11                                 |
| C23    | 2024 | Nova revisão com mudanças na linguagem e na biblioteca padrão                                       |

Cada versão pode introduzir funcionalidades, modificar regras existentes ou corrigir aspectos de versões anteriores.

## 6. Padrões e compiladores

Os compiladores de C implementam as regras estabelecidas pelos padrões da linguagem.

É possível escolher qual versão do padrão C utilizar durante a compilação.

Por exemplo, utilizando GCC:

```bash
gcc -std=c90 program.c
```

```bash
gcc -std=c99 program.c
```

```bash
gcc -std=c11 program.c
```

```bash
gcc -std=c17 program.c
```

```bash
gcc -std=c23 program.c
```

A opção `-std` indica ao compilador qual padrão da linguagem deve ser utilizado.

Isso é importante porque um código válido em uma versão mais recente pode utilizar funcionalidades que não existiam em versões anteriores.

## 7. Relação entre o padrão C e a Biblioteca Padrão

O padrão C não especifica apenas a linguagem propriamente dita. Ele também especifica a Biblioteca Padrão.

Por exemplo, a função `printf()` não é uma construção da linguagem C, mas seu comportamento é definido pelo padrão.

Isso significa que implementações compatíveis com determinado padrão devem fornecer o comportamento especificado para essa função.

Essa padronização permite que programas sejam escritos de maneira mais portátil, reduzindo a dependência de um compilador ou sistema operacional específico.

## 8. Resumo

- **ANSI:** organização americana responsável pela aprovação de padrões técnicos.
- **ISO:** organização internacional responsável pela elaboração de padrões internacionais.
- **ANSI C / C89:** primeiro padrão oficial de C, aprovado em 1989.
- **C90:** adoção internacional do padrão pela ISO, em 1990.
- **C99, C11, C17 e C23:** revisões posteriores que evoluíram a linguagem e sua biblioteca padrão.

### Ideia principal

A padronização existe para estabelecer regras comuns que compiladores e bibliotecas possam implementar.

Dessa forma, um programa escrito em C, respeitando determinado padrão, tem maiores chances de funcionar corretamente em diferentes ambientes que implementem esse mesmo padrão.

---

## Referências

- ANSI X3.159-1989 — Programming Language C.
- ISO/IEC 9899:1990 — Programming Languages: C.
- ISO/IEC 9899 — Padrão internacional da linguagem C.
- GCC Documentation — C Dialect Options.
