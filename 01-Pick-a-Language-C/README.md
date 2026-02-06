# Estudos de Linguagem C - Guia do Beej

Repositório destinado ao aprendizado de C focado em fundamentos de Ciência da Computação.

## 🛠️ Ambiente de Desenvolvimento
- **SO:** Ubuntu Linux
- **IDE:** CLion
- **Compilador:** GCC

<details>
  <summary><b>🔹 Dia 1: Como compilar com o GCC</b></summary>

- **Passo 1** - Ir até a Pasta (Diretório) do arquivo com o comando `cd`.
- **Passo 2** - Compilar o arquivo com o comando `gcc (nome_do_arquivo.c) -o (nome_do_executavel)`.
- **Passo 3** - Rodar o programa com o comando `./(nome_do_executavel)`.

> **Nota do Professor:** Se não usar o `-o`, o GCC criará o padrão `a.out`, que será sobrescrito na próxima compilação.
</details>

---

## 🧠 Filosofia do C (Segundo o Guia do Beej)
- **Baixo Nível:** C é uma linguagem sem "cinto de segurança". Ela permite interfacear diretamente com a memória e o hardware.
- **Conectividade:** Aprender C é a base para entender Sistemas Operacionais e linguagens modernas (C++, Rust, Go).
- **O Desafio:** O conceito de **Ponteiros** é identificado como o principal obstáculo (endereços de memória).

---

<details>
  <summary><b>🔹 Dia 2: Hello World</b></summary>

## 📖 O Hello World

### 🧠 O que aprendi:
- **Pré-processador (#):** Age antes do compilador. O `#include` copia bibliotecas para o código.
- **Header Files (.h):** Arquivos como `stdio.h` fornecem ferramentas básicas (como o `printf`).
- **Comentários:** Essenciais para documentar a lógica (`//` ou `/* */`).
- **Fluxo de Execução:** O programa sempre começa na função `main()` e termina na sua última chave `}`.
- **\n:** Comando para pular linha (newline).

### 🛠️ Comando de Compilação Revisado:
- `gcc -o hello hello.c` (Cria o executável 'hello').
- `./hello` (Executa o arquivo no diretório atual).

### 🧠 O que aprendi:
- **Compilação:** É o processo de traduzir código-fonte para um executável.
- **Machine Code:** C produz binários (1s e 0s) que a CPU executa diretamente, sem intermediários.
- **C vs Outras Linguagens:** Enquanto Python/Java usam *bytecode*, o C vai direto ao "ferro" (hardware).
- **GCC:** É o programa que faz essa tradução no ambiente Unix/Linux.

> **Nota do Professor:** O C pode ser interpretado, mas quase sempre é compilado para garantir a velocidade máxima que a linguagem oferece.
</details>


---

<details>
  <summary><b>🔹 Dia 3: Variáveis e Declarações</b></summary>

### 🧠 O que esperar:
- Aprender a classificar os elementos de um programa.
- Entender como o C lida com diferentes tipos de dados e instruções.
---
### 🧠 O que aprendi (Seção 3.1):
- **Memória RAM:** Funciona como um grande array de bytes. Cada byte tem um "index" chamado de **Endereço**.
- **Variável:** É apenas um nome legível para humanos que aponta para um endereço específico na memória.
- **Por que usamos nomes?:** Porque é muito mais fácil lembrar de `preco` do que do endereço hexadecimal `0xAF23`.
- **Conexão com Ponteiros:** Entender que variáveis ocupam endereços é a base para entender ponteiros (que guardam esses endereços).
---
### Regras para Nomes de Variáveis (Seção 3.1.1)

### ✅ O que é permitido:
- Letras (A-Z, a-z), Números (0-9) e Underscore (`_`).

### ❌ O que é proibido ou restrito:
- **Iniciar com número:** Ex: `1vitor` (Erro!).
- **Reservados do Sistema:** Evitar iniciar com `__` ou `_` seguido de letra maiúscula (ex: `_V`).

### 💡 Dica:
O C é **Case Sensitive**, ou seja, `vitor`, `Vitor` e `VITOR` seriam três variáveis diferentes em endereços diferentes.

---
### 3.1.2 Tipos de variáveis

### 📦 Tipos Básicos:
- `int`: Números inteiros (ex: 2, -10).
- `float`: Números reais com vírgula (ex: 3.14).
- `char`: Uma única letra (ex: 'A').
- `char *`: Uma string/texto (ex: "Olá").

### ⚠️ O Perigo do "Lixo de Memória":
- Variáveis declaradas e não inicializadas (ex: `int i;`) possuem valores **indeterminados**.
- **Sempre** inicialize suas variáveis para evitar comportamentos estranhos.

### 🖨️ Saída Formatada:
Para imprimir variáveis, usamos o `printf` com marcadores:
- `%d` -> inteiros
- `%f` -> floats
- `%s` -> strings
- `%c` -> char

> **💡 Descoberta Prática (Truncamento):**
> Se você tentar colocar um número decimal (ex: 3.99) em uma variável `int`, o C irá **truncar** o valor, resultando apenas em `3`. Ele não arredonda, ele simplesmente descarta a parte fracionária para caber no tipo inteiro.
---
### Tipos Booleanos (Seção 3.1.3)

### 🧠 O conceito de Verdade no C:
- **Falso (False):** Representado pelo número `0`.
- **Verdadeiro (True):** Qualquer número diferente de zero (`1`, `-5`, `100`).

### 🆕 No C23:
- Agora temos o tipo `bool` e as palavras-chave `true` e `false` nativamente.
- O valor numérico de `true` é `1`.

### ⚠️ Cuidado na Comparação:
Embora `12` seja "verdadeiro", a expressão `(12 == true)` retornará **Falso (0)**, pois o C compara os valores numéricos (`12` vs `1`).

```c
bool rico = true;
if (rico) {
    printf("Isso vai aparecer!\n");
}
```
---
### Operadores Aritméticos (Seção 3.2.1)

### 🔢 Operações Comuns:
- `+`, `-`, `*`, `/`: Operações básicas.
- `%`: Módulo (Resto da divisão).

### ⚡ Atalhos (Shorthands):
- `i += 5` é o mesmo que `i = i + 5`.

### 🚫 O que NÃO fazer:
- **Potência:** Não use `^`. Use `pow(base, expoente)` da biblioteca `<math.h>`.

> **Pulo do Gato:** Cuidado com a divisão de inteiros! Se você fizer `int x = 5 / 2;`, o resultado será `2` (o C trunca o .5 porque a variável é int).
---
### Operador Ternário (Seção 3.2.2)
### 💡 O "if" de uma linha:
- **Sintaxe:** `condição ? verdadeiro : falso;`
- **Exemplo:** `y += (x > 10) ? 17 : 37;`
    - Se `x` for maior que 10, soma 17. Senão, soma 37.

### 🚀 Vantagem:
- Pode ser usado dentro de outras funções (como o `printf`) para decidir qual valor enviar na hora.
```
codigo de exemplo: 
int x = 7;
char *resultado = (x % 2 == 0) ? "par" : "impar";
printf("O numero %d e %s\n", x, resultado);
```
> **Dica do Professor:** Use o ternário para escolhas simples. Se a lógica começar a ficar muito complexa, prefira o `if/else` tradicional para não deixar seu código difícil de ler (o famoso "código espaguete").
---

### Incremento e Decremento (Seção 3.2.3)

### 🆙 Operadores de Passo:
- `i++` (Pós): Usa o valor atual na expressão e **depois** incrementa.
- `++i` (Pré): Incrementa primeiro e **depois** usa o novo valor na expressão.
- O mesmo vale para o decremento (`i--` e `--i`).

### 🧪 Exemplo Comparativo:
```c
int i = 10;
printf("%d", i++); // Vai imprimir 10 (e i vira 11 depois)
printf("%d", ++i); // Vai imprimir 12 (i já era 11, vira 12 e imprime)
```

-----

### 🛠️ Desafio Prático no CLion:

Tente prever o que este código vai imprimir antes de rodar:

```c
int a = 5;
int b = 5;
printf("A: %d\n", a++ + a++);
printf("B: %d\n", ++b + ++b);
```
---

### Operador Vírgula (Seção 3.2.4)

### ➡️ Sequência da Esquerda para a Direita:
- Permite agrupar múltiplas expressões em uma única linha.
- O valor resultante da expressão é sempre o valor da **última** (mais à direita).

```c
int x;
x = (10, 20, 30); 
// O C processa o 10, depois o 20, e por fim o 30.
// O resultado final que vai para 'x' é 30.
```
#### 2. Uso Prático: Loops (for) 🚀
- Este operador é muito utilizado em loops for para inicializar ou incrementar múltiplas variáveis simultaneamente no mesmo bloco da instrução.

Exemplo de Contagem Dupla:

```c
// 'i' sobe de 0 a 10 e 'j' desce de 10 a 0 ao mesmo tempo
for (int i = 0, j = 10; i <= 10; i++, j--) {
printf("i: %d | j: %d\n", i, j);
}
```
---

### ⚖️ Operadores Condicionais (Seção 3.2.5)

Estes operadores comparam dois valores e retornam um resultado booleano (verdadeiro ou falso).

#### 🔍 Lista de Operadores:
* `a == b`: Verdadeiro se **a** for igual a **b**.
* `a != b`: Verdadeiro se **a** for diferente de **b**.
* `a < b`: Verdadeiro se **a** for menor que **b**.
* `a > b`: Verdadeiro se **a** for maior que **b**.
* `a <= b`: Verdadeiro se **a** for menor ou igual a **b**.
* `a >= b`: Verdadeiro se **a** for maior ou igual a **b**.



#### ⚠️ O Erro mais Comum no C:
Nunca confunda **Atribuição** (`=`) com **Comparação** (`==`):
- `x = 10`: Você está **guardando** o número 10 dentro de x.
- `x == 10`: Você está **perguntando** se x vale 10.

#### 🛠️ Exemplo de Uso:
```c
if (a <= 10) {
    printf("Sucesso! O valor esta dentro do limite.\n");
}
```
---
### 🧠 Operadores Lógicos (Seção 3.2.6)

Estes operadores servem para combinar ou inverter expressões condicionais.

|  Operador  | Significado | Descrição |
|:----------:| :---: | :--- |
|    `&&`    | **AND** (E) | Verdadeiro se **todas** as condições forem verdadeiras. |
| `\|    \|` | **OR** (OU) | Verdadeiro se **pelo menos uma** condição for verdadeira. |
|    `!`     | **NOT** (NÃO) | Inverte o valor: transforma verdadeiro em falso e vice-versa. |



#### 🛠️ Exemplos de Uso:

**1. Usando o "E" (&&):**
```c
// Só entra no if se AMBAS as condições forem reais
if (x < 10 && y > 20) {
    printf("Condicao aceita!\n");
}
```
**2. Usando o "OU" (||):**
Basta que **uma** das condições seja verdadeira para o código entrar no `if`.

```c
// Entra no if se x for menor que 10 OU se y for maior que 20
if (x < 10 || y > 20) {
    printf("Pelo menos uma das condicoes e verdadeira!\n");
}
```
**3. Usando o "NÃO" (!): O operador ! tem alta precedência, por isso geralmente usamos parênteses.**

```c
if (!(x < 12)) {
    // É o mesmo que dizer: "Se x NÃO for menor que 12" (ou seja, x >= 12)
    printf("x e maior ou igual a 12\n");
}
```

#### 💡 Teste Mental:
Se você tiver o código: `if (5 > 2 || 2 > 10)`, o programa entrará no `if`?

**Resposta:** **Sim!** No operador `||` (OU), o resultado é verdadeiro se **pelo menos uma** das partes for verdade (e como 5 é maior que 2, a condição é satisfeita).

> **Dica de Ouro:** No C, os operadores && e || são "curto-circuito". Se no && a primeira condição já for falsa, o C nem olha para a segunda, pois sabe que o resultado final será falso de qualquer jeito. ⚡
---
### 📏 O Operador `sizeof`: Medindo a Memória (Seção 3.2.7)

O `sizeof` é a ferramenta que usamos para não precisar adivinhar o tamanho das coisas. Como o C roda em tudo (desde relógios até supercomputadores), o tamanho de um `int` pode mudar. O `sizeof` garante que seu código se adapte.

#### 🗝️ O que você precisa saber:
* **Unidade de Medida:** Ele sempre responde em **Bytes**.
* **O "RG" do Resultado:** O valor que ele devolve não é um `int` comum, é um `size_t`.
* **No `printf`:** Para exibir esse valor, usamos o código `%zu`.
* **Momento da Descoberta:** O C resolve o `sizeof` durante a **compilação**. Ou seja, o programa já nasce sabendo esses tamanhos.

#### 🧪 Exemplos Práticos:

```c
float nota = 9.5;
char letra = 'V';

// 1. Medindo uma variável diretamente
printf("A variavel 'nota' ocupa %zu bytes\n", sizeof nota);

// 2. Medindo um tipo (obrigatorio usar parenteses aqui!)
printf("Um 'int' ocupa %zu bytes nesta maquina\n", sizeof(int));

// 3. Medindo expressoes
// O C olha o resultado da conta (1 + 1.0 = 2.0) que e um 'double'
printf("O resultado da conta ocupa %zu bytes\n", sizeof(1 + 1.0));
```
---

</details>
