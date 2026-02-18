# Estudos de Linguagem C - Guia do Beej

Repositório destinado ao aprendizado de C focado em fundamentos de Ciência da Computação.

## 🛠️ Ambiente de Desenvolvimento
- **SO:** Ubuntu Linux
- **IDE:** CLion
- **Compilador:** GCC

## 🧠 Filosofia do C (Segundo o Guia do Beej)
- **Baixo Nível:** C é uma linguagem sem "cinto de segurança". Ela permite interfacear diretamente com a memória e o hardware.
- **Conectividade:** Aprender C é a base para entender Sistemas Operacionais e linguagens modernas (C++, Rust, Go).
- **O Desafio:** O conceito de **Ponteiros** é identificado como o principal obstáculo (endereços de memória).

<details>
  <summary><b>🔹 Dia 1: Como compilar com o GCC</b></summary>

---

[Codigos do dia 1 podem ser encontrados aqui](./DIA_001)

---

- **Passo 1** - Ir até a Pasta (Diretório) do arquivo com o comando `cd`.
- **Passo 2** - Compilar o arquivo com o comando `gcc (nome_do_arquivo.c) -o (nome_do_executavel)`.
- **Passo 3** - Rodar o programa com o comando `./(nome_do_executavel)`.

> **Nota:** Se não usar o `-o`, o GCC criará o padrão `a.out`, que será sobrescrito na próxima compilação.
</details>

---

<details>
  <summary><b>🔹 Dia 2: Hello World</b></summary>

---

[Codigos do dia 2 podem ser encontrados aqui](./DIA_002)

---

## 📖 O Hello World

### 🧠 O que aprendi:
- **Pré-processador (#):** Age antes do compilador. O `#include` copia bibliotecas para o código. (Tudo que começa com # roda antes do compilador.)
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
- **Memória RAM:** Funciona como um grande array de bytes. Cada byte tem um "index" chamado de **Endereço**.
- **Variável:** É apenas um nome legível para humanos que aponta para um endereço específico na memória.
- **Por que usamos nomes?:** Porque é muito mais fácil lembrar de `preco` do que do endereço hexadecimal `0xAF23`.
- **Conexão com Ponteiros:** Entender que variáveis ocupam endereços é a base para entender ponteiros (que guardam esses endereços).

> **Nota:** O C pode ser interpretado, mas quase sempre é compilado para garantir a velocidade máxima que a linguagem oferece.
</details>


---

<details>
  <summary><b>🔹 Dia 3: Variáveis e Declarações</b></summary>

---

[Codigos do dia 3 podem ser encontrados aqui](./DIA_003)

---

### 🧠 O que esperar:
- Aprender a classificar os elementos de um programa.
- Entender como o C lida com diferentes tipos de dados e instruções.
---

<details>
<summary><b> 📦 Variaveis (Seção 3.1.0):</b></summary>
<br>

## 💾O que é uma Variável? (Visão de Baixo Nível)

Para o usuário, é um nome. Para o C, uma variável é uma **abstração de um endereço de memória física**.

### 🏗️ A Anatomia de uma Variável
Toda variável no seu código possui quatro características fundamentais que o computador precisa gerenciar:

1.  **Nome (Identificador):** O apelido que nós usamos no código (ex: `idade`).
2.  **Tipo:** Define quantos bytes ela ocupa e como esses bits devem ser interpretados (ex: `int` vs `float`).
3.  **Endereço (Pointer):** A localização exata do primeiro byte da variável na memória RAM.
4.  **Valor:** O estado atual dos bits armazenados naquele endereço.

### 🗺️ Memória como um Array de Bytes
Pense na memória RAM como um **array gigantesco de bytes**. Cada byte tem um índice (o endereço).
- Se você declara um `int x`, o C reserva um bloco (geralmente 4 bytes).
- O nome `x` passa a ser o rótulo para o endereço do **primeiro byte** desse bloco.

[Image showing a sequence of memory cells with addresses like 0x100, 0x101, etc., highlighting a block of 4 cells labeled as 'Variable X']

### 🔄 O Salto para Ponteiros
A razão pela qual estudamos isso agora é simples: em C, você pode manipular o **endereço** diretamente, não apenas o **valor**.
* **Variável Comum:** `x = 10;` (Muda o que está dentro do quarto).
* **Ponteiro:** `p = &x;` (Guarda o número do quarto onde `x` mora).

> **🎓 Nota:** No C, você está muito perto do hardware. Quando você declara uma variável, você está literalmente reservando eletricidade e silício para guardar seus dados. Se você não inicializa uma variável, ela terá "lixo de memória" — os restos de dados de algum programa que usou aquele endereço antes do seu!

### 🏨 A Analogia do Hotel (Memória RAM)
Imagine a memória do computador como um grande hotel com milhares de quartos:

1.  **O Quarto (Memória):** Cada quarto guarda um pedaço de dado (bytes).
2.  **O Número do Quarto (Endereço/Pointer):** Todo quarto tem um número único. Esse índice é o que chamamos de **endereço**, **localização** ou **ponteiro**.
3.  **O Nome na Reserva (Variável):** Como é difícil decorar "Quarto 0xFF32", nós damos um nome a ele, como `idade`.

</details>

---

<details>
<summary><b>📜 Regras para Nomes de Variáveis (Seção 3.1.1)</b></summary>
<br>

---

[Codigos da Seção 3.1.1 podem ser encontrados aqui](./(SECAO-3-1-1)-NOMES DE VARIAVEIS)

---

### Nomes de Variáveis

### ✅ O que é permitido:
- Letras (A-Z, a-z), Números (0-9) e Underscore (`_`).

### ❌ O que é proibido ou restrito:
- **Iniciar com número:** Ex: `1vitor` (Erro!).
- **Reservados do Sistema:** Evitar iniciar com `__` ou `_` seguido de letra maiúscula (ex: `_V`).

### 💡 Dica:
O C é **Case Sensitive**, ou seja, `vitor`, `Vitor` e `VITOR` seriam três variáveis diferentes em endereços diferentes.
</details>

---

<details>
<summary><b>🧬 Tipos de variáveis (Seção 3.1.2)</b></summary>
<br>

---

[Codigos da Seção 3.1.2 podem ser encontrados aqui](./(SECAO 3-1-2)-TIPOS-DE-VARIAVEIS)

---

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
</details>

---

<details>
<summary><b>🔘 Tipos Booleanos (Seção 3.1.3)</b></summary>
<br>

---

[Codigos da Seção 3.1.3 podem ser encontrados aqui](./(SECAO 3-1-3)-TIPOS-BOOLEANOS)

---

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
</details>

---

<details>
<summary><b>🔢 Operadores Aritméticos (Seção 3.2.1)</b></summary>
<br>

---

[Codigos da Seção 3.2.1 podem ser encontrados aqui](./(SECAO 3-2-1)-OPERADORES-ARITMETICOS)

---

### 🔢 Operações Comuns:
- `+`, `-`, `*`, `/`: Operações básicas.
- `%`: Módulo (Resto da divisão).

### ⚡ Atalhos (Shorthands):
- `i += 5` é o mesmo que `i = i + 5`.

### 🚫 O que NÃO fazer:
- **Potência:** Não use `^`. Use `pow(base, expoente)` da biblioteca `<math.h>`.

> **Pulo do Gato:** Cuidado com a divisão de inteiros! Se você fizer `int x = 5 / 2;`, o resultado será `2` (o C trunca o .5 porque a variável é int).
</details>

---

<details>
<summary><b>↔️ Operador Ternário (Seção 3.2.2)</b></summary>
<br>

---

[Codigos da Seção 3.2.2 podem ser encontrados aqui](./(SECAO 3-2-2)-OPERADOR-TERNARIO)

---

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
> **Dica:** Use o ternário para escolhas simples. Se a lógica começar a ficar muito complexa, prefira o `if/else` tradicional para não deixar seu código difícil de ler (o famoso "código espaguete").
</details>

---

<details>
<summary><b>🆙 Incremento e Decremento (Seção 3.2.3)</b></summary>
<br>

---

[Codigos da Seção 3.2.3 podem ser encontrados aqui](./(SECAO 3-2-3)-INCREMENTO-E-DECREMENTO)

---

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
</details>

---

<details>
<summary><b>➡️ Operador Vírgula (Seção 3.2.4)</b></summary>
<br>

---

[Codigos da Seção 3.2.4 podem ser encontrados aqui](./(SECAO 3-2-4)-OPERADOR-VIRGULA)

---

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
</details>

---

<details>
<summary><b>⚖️ Operadores Condicionais (Seção 3.2.5)</b></summary>
<br>

---

[Codigos da Seção 3.2.5 podem ser encontrados aqui](./(SECAO 3-2-5)-OPERADORES-CONDICIONAIS)

---

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
</details>

---

<details>
<summary><b>🧠 Operadores Lógicos (Seção 3.2.6)</b></summary>
<br>

---

[Codigos da Seção 3.2.6 podem ser encontrados aqui](./(SECAO 3-2-6)-OPERADORES-LOGICOS)

---

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

</details>

---

<details>
<summary><b>📏 O Operador `sizeof`: Medindo a Memória (Seção 3.2.7)</b></summary>
<br>

---

[Codigos da Seção 3.2.7 podem ser encontrados aqui](./(SECAO 3-2-7)-OPERADOR SIZEOF-(Medindo-a-Memoria))

---

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
## 🎓 Por que aprender isso agora?
Imagine que você vai comprar uma caixa para guardar 10 laranjas. Você precisa saber o tamanho da laranja para a caixa não ficar pequena demais, certo? No C, quando formos criar listas (arrays) ou reservar memória manualmente (alocação dinâmica), o `sizeof` é quem vai dizer o tamanho exato da "caixa" que o computador precisa preparar.

</details>

---
<details>
 <summary><b>🚦 Controle de Fluxo (Seção 3.3.0) </b></summary>
<br>

---

[Codigos da Seção 3.3.0 podem ser encontrados aqui](./(SECAO 3-3-0)-CONTROLE-DE-FLUXO)

---

O controle de fluxo permite que o programa decida quais partes do código executar com base em condições.

### 🧱 Blocos vs. Declarações Únicas
No C, após um comando de controle (como `if`, `while` ou `for`), você pode executar **uma única linha** ou um **bloco inteiro**.

#### 1. Declaração Única (Single Statement)
Se você não usar chaves, apenas a **primeira linha** após o comando será controlada por ele.

```c
if (x == 10) 
    printf("x é 10\n"); // Só esta linha depende do if
```
#### 2. Blocos de Código (Chaves { })
Para executar várias coisas baseadas em uma única condição, **usamos as "squirrelly braces" (chaves)** para criar um bloco.

```c
if (x == 10) {
    printf("x é 10\n");
    printf("Isso também só acontece se x for 10\n");
}
```
### ⚠️ O Perigo do "Falso Visual"
Cuidado! Diferente do Python, o C ignora espaços e identação. O que define o que pertence ao if são as chaves, não o espaço que você deixa.

Exemplo de Erro Comum:
```c
if (x == 10)
    printf("Isso depende do x\n");
    printf("Isso SEMPRE acontece!\n"); // Cuidado: Esta linha NÃO está no if!
```
💡Dica: 
Siga a "Boa Prática dos Veteranos": Sempre use chaves { }, mesmo que seja para uma única linha. Isso evita erros bobos no futuro e deixa seu código muito mais fácil de ler.

</details>

---

<details>
<summary><b> 🔀 A Estrutura `if-else` (Seção 3.3.1)</b></summary>
<br>

---

[Codigos da Seção 3.3.1 podem ser encontrados aqui](./DIA_003/(SECAO-3-3-1)-ESTRUTURA-(if-else))

---

O `if` testa uma condição. Se ela for verdadeira, o bloco do `if` roda. Se for falsa, o C pula para o próximo comando — a menos que você forneça um `else`.

#### 1. O Plano B: `else`
O `else` serve para executar um código especificamente quando a condição do `if` **falha**.

```c
int i = 99;

if (i == 10) {
    printf("i é 10!\n");
} else {
    printf("i não é 10. Isso me irrita um pouco...\n");
}
```

### 2. O if-else (A Bifurcação)
Aqui você garante que um dos dois caminhos será tomado. É impossível o C executar o if e o else ao mesmo tempo, ou não executar nenhum dos dois.
```c
#include <stdio.h>

int main() {
    int i = 99;

    if (i == 10) {
        printf("i e 10!\n");
    } else {
        printf("i decididamente NAO e 10.\n");
        printf("Isso me irrita um pouco, francamente.\n");
    }

    return 0;
}
```

### 3. O Cascateamento: else if
Quando você tem várias opções e quer testar uma por uma até achar a verdadeira, você "empilha" os else if.
```c
int i = 99;

if (i == 10) {
    printf("i é 10!\n");
} else if (i == 20) {
    printf("i é 20!\n");
} else if (i == 99) {
    printf("i é 99! Meu favorito!\n");
} else {
    printf("i é um número que eu nunca ouvi falar.\n");
}
```
</details>

---

<details>
<summary><b>🔄 O Laço `while`: Repetição com Condição (Seção 3.3.2)</b></summary>

---

[Codigos da Seção 3.3.2 podem ser encontrados aqui](./(SECAO 3-3-2)-WHILE-(LACO DE REPETIÇAO))

---

O `while` (enquanto) executa um bloco de código repetidamente **enquanto** uma condição específica for verdadeira.

#### ⚙️ Como funciona o Ciclo:
1.  **Teste:** O C verifica a condição no parênteses.
2.  **Execução:** Se for verdadeira, ele roda o bloco `{ }`.
3.  **Retorno:** Ele volta para o passo 1 e testa novamente.

#### 🛠️ Exemplo Prático (Contador):
```c
int i = 0;

while (i < 10) {
    printf("i agora é %d!\n", i);
    i++; // Importante: Incrementa para que a condição um dia seja falsa!
}

printf("Acabou o loop!\n");
```

</details>

---

<details>

<summary><b>🔃 Controle de Fluxo: O Laço `do-while` (Seção 3.3.3)</b></summary>
<br>

---

[Codigos da Seção 3.3.3 podem ser encontrados aqui](./(SECAO 3-3-3-)-DO-WHILE-(CONTROLE DE FLUXO))

---

O `do-while` é uma estrutura de repetição com **teste no final** (post-test loop). Ele é fundamental quando a lógica do programa exige que o corpo do laço seja processado antes que a primeira validação ocorra.

#### 🏗️ Arquitetura e Fluxo de Execução
Diferente do `while` comum, que pode ser executado **zero** vezes, o `do-while` garante **pelo menos uma execução** (garantia de passagem única).

1.  **Entrada:** O fluxo entra diretamente no bloco `{ }` sem checar condições.
2.  **Processamento:** Todas as instruções dentro das chaves são executadas.
3.  **Avaliação:** Só então o compilador avalia a expressão booleana no `while(condicao);`.
4.  **Bifurcação:** Se `true`, o fluxo volta para o `do`. Se `false`, o laço é encerrado.

#### 💻 Comparativo Técnico: `while` vs `do-while`

```c
int i = 10;

// Cenário A: O 'while' checa antes. Como 10 não é < 10, nada acontece.
while (i < 10) {
    printf("Isso nunca será impresso.\n");
    i++;
}

// Cenário B: O 'do-while' executa primeiro. Ele imprime "10", incrementa para 11 e só aí para.
do {
    printf("do-while executou com i = %d\n", i);
    i++;
} while (i < 10); // <--- ATENÇÃO: O ponto e vírgula aqui é obrigatório!
```

### 🎲 Aplicação Avançada: Números Pseudoaleatórios:
Um uso clássico é repetir uma tarefa até que um valor aleatório específico seja gerado.

```c
#include <stdio.h>
#include <stdlib.h> // Necessário para rand() e srand()
#include <time.h>   // Necessário para usar o tempo como semente

int main(void) {
    int r;
    do {
        r = rand() % 100; // Gera número entre 0 e 99
        printf("Tentativa: %d\n", r);
    } while (r != 37);    // Repete o sorteio até que o número seja exatamente 37
    
    return 0;
}

```


🔍 O Problema do Determinismo (rand vs srand)
rand(): Gera números "pseudoaleatórios". Sem uma semente diferente, ele produzirá a mesma sequência toda vez que o programa iniciar.

srand(): É usado para "semear" o gerador. Geralmente usamos srand(time(NULL)) para que cada execução use o horário atual como base, garantindo sequências diferentes.

### 🎓 Nota:
O do-while é ideal para validação de entrada de dados. Por exemplo: "Peça uma nota ao usuário -> Verifique se é válida -> Se não for, peça de novo". Você não pode verificar se a nota é válida antes de pedir que o usuário a digite!

</details>

---

<details>
<summary><b>⚙️O Laço `for`: O Rei das Repetições (Seção 3.3.4)</b></summary>
<br>

---

[Codigos da Seção 3.3.4 podem ser encontrados aqui](./(SECAO 3-3-4)FOR-(LACO DE REPETIÇÃO))

---

O `for` é a escolha ideal quando você sabe **antecipadamente** quantas vezes deseja repetir um bloco de código. Embora ele possa ser escrito como um `while`, o `for` organiza a inicialização, a condição e a atualização em um lugar só, facilitando a leitura e evitando erros de lógica.

#### 🧬 Anatomia do Comando
O `for` é dividido em três seções separadas por ponto e vírgula (`;`):

`for (inicialização; condição; atualização)`

1.  **Inicialização:** Executada apenas **uma vez**, antes de o loop começar. Geralmente usada para definir o valor inicial do contador.
2.  **Condição:** Verificada **antes** de cada repetição. Se for falsa logo de início, o loop nem chega a rodar.
3.  **Atualização:** Executada ao **final** de cada bloco, logo antes de testar a condição novamente. Geralmente usada para incrementar (`i++`) ou decrementar (`i--`) o contador.



#### 🛠️ Comparativo Técnico: `while` vs `for`
Ambos os códigos abaixo produzem o mesmo resultado exato (imprimir de 0 a 9), mas o `for` é muito mais compacto:

```c
// Versão com while
i = 0;
while (i < 10) {
    printf("i is %d\n", i);
    i++;
}

// Versão com for (Muito mais limpa!)
for (i = 0; i < 10; i++) {
    printf("i is %d\n", i);
}
```
🚀 Recursos Avançados
O Operador Vírgula (Múltiplas Ações):
Você pode inicializar e atualizar várias variáveis simultaneamente no mesmo for.

```c
for (i = 0, j = 999; i < 10; i++, j--) {
    printf("i: %d, j: %d\n", i, j);
}
```

O Loop Infinito "Eterno":
Diferente do while(1), no for você pode simplesmente omitir as três partes. Se não houver condição, o C assume que ela é sempre verdadeira.

```c
for (;;) {
    printf("Executando até o fim dos tempos...\n");
}
```

Seções Opcionais:
Qualquer uma das três partes pode ficar vazia, desde que os pontos e vírgulas sejam mantidos.

### 🎓 Nota:
A grande vantagem do for sobre o while é o escopo. No for, a variável de controle (como o i) fica vinculada à lógica do loop. Se você esquecer o i++ no final de um while, você cria um bug infinito. No for, como a atualização está na assinatura do comando, é muito mais difícil esquecer de atualizar o contador.

</details>

---

<details>
<summary><b>🚥 O Comando `switch`: Seleção Direta (Seção 3.3.5)</b></summary>
<br>

---

[Codigos da Seção 3.3.5 podem ser encontrados aqui](./(SECAO 3-3-5)-SWITCH-CASE)

---

O `switch` permite executar diferentes partes do código com base no valor de uma **expressão inteira**. É como um painel de controle onde você pula diretamente para o botão (caso) que foi acionado.

#### 🏗️ Anatomia do `switch`
O funcionamento se baseia em três palavras-chave:
1.  **`case`:** Define os valores que você quer testar.
2.  **`break`:** É a "saída de emergência". Se você não colocar, o C continua executando os casos abaixo (o perigoso *fall-through*).
3.  **`default`:** O Plano C. É executado se nenhum dos casos anteriores for atendido.



#### 🛠️ Exemplo Prático (Contador de Cabras)
```c
int contador_cabras = 2;

switch (contador_cabras) {
    case 0:
        printf("Você não tem cabras.\n");
        break;
    case 1:
        printf("Você tem uma única cabra.\n");
        break;
    case 2:
        printf("Você tem um par de cabras.\n");
        break;
    default:
        printf("Você tem uma verdadeira multidão de cabras!\n");
        break;
}
```

⚠️ O Fenômeno do "Fall-through" (Cair Através)
Se você esquecer o break, o C não para no final do case. Ele continua "escorregando" para o próximo código, mesmo que o valor do próximo case seja diferente!

```c
switch (x) {
    case 1:
        printf("1\n"); // Se x for 1, ele imprime "1"...
        // Faltou o break!
    case 2:
        printf("2\n"); // ...e DEPOIS imprime "2" também!
        break;
```
### Dica Profissinal:
Se você realmente quiser que um caso "caia" no outro de propósito, sempre deixe um comentário avisando: // Fall through!(Cair-Atravessar) . Isso evita que outros programadores achem que foi um erro.


### 🔍 O "Pulo do Gato": Usando char no switch
O Beej mencionou que o switch só aceita inteiros. Mas, como no C o tipo char é guardado como um número (código ASCII), você pode usar letras nos seus casos!

```c
char escolha = 'b';
switch (escolha) {
case 'a':
printf("Opção A\n"); break;
case 'b':
printf("Opção B\n"); break;
}
```
### 🎓Nota:
Nunca tente usar números decimais (float/double) ou frases (strings) dentro de um switch. O compilador vai dar erro na hora. O switch foi feito para valores discretos e exatos.

</details>

</details>

---
<details>
  <summary><b>🔹 Dia 4: Funçoes </b></summary>

---

[Codigos do dia 4 podem ser encontrados aqui](./DIA_004)

---

<details>
<summary><b>🚀 Introdução a Funçoes (Seção 4.1)</b></summary>
<br>

## 🛠️ Dia 4: Funções (Functions)

---

[Codigos da Seção 4.0 podem ser encontrados aqui](./(SEÇÃO 4-0)-INTRODUÇÃO-A-FUNCÕES)

---

As funções são as "receitas" ou subprogramas que compõem uma aplicação em C. Elas permitem que você quebre um problema grande em pedaços menores, organizados e reutilizáveis. No C, tudo gira em torno de funções, inclusive o ponto de entrada do programa: a `main`.

---

### 🏗️ 1. Anatomia de uma Função

Diferente de linguagens dinâmicas, o C exige que você seja explícito sobre o que entra e o que sai da função (tipagem estática).

```c
int somar_1 (int n) {  // "int" é o tipo de retorno; "int n" é o parâmetro
    return n + 1;      // "return" encerra a função e devolve o valor
}
```
- Tipo de Retorno: Define o tipo de dado que a função entrega de volta para quem a chamou. Se a função não devolve nada, usamos o tipo void.
- Parâmetros: São variáveis locais especiais que recebem os dados de entrada. Eles só existem enquanto a função está sendo executada.
- Corpo: O bloco entre chaves { } onde a lógica é processada.

### 🗝️ 2. Conceitos Fundamentais
### A. Passagem por Valor (O Conceito de Cópia) 🛡️

Este é o comportamento vital do C: Os argumentos são copiados para os parâmetros.
Quando você passa uma variável para uma função, o C cria um "dublê" (cópia binária) dela em um novo endereço de memória.
Qualquer alteração feita no parâmetro dentro da função não afeta a variável original que está na main ou em outra função.

### B. O uso do void 🚫

A palavra-chave void significa "vazio" ou "nada".
Retorno void: A função executa uma ação (ex: imprimir um log ou mover um arquivo) mas não gera um resultado numérico ou de dados para ser guardado.
Parâmetro void: Indica explicitamente que a função não aceita nenhuma entrada (ex: int main(void)).

### C. Ordem e Declaração 📋

O compilador do C processa o arquivo de forma linear (de cima para baixo).
Se você chamar uma função na main() que está escrita fisicamente abaixo dela no arquivo, o compilador emitirá um erro de "unknown function".
Regra: Defina suas funções acima da main() ou declare o protótipo da função no topo do arquivo.

### 🎲 3. Exemplo Prático: Função de Execução Direta

```c
#include <stdio.h>

// Definição antes do uso (main)
void say_hello(void) {
printf("Olá, Mundo! Esta é uma função void.\n");
}

int main(void) {
say_hello(); // Chamada da função
return 0;    // Sucesso
}
```

### 🎓 Dicas:
- Modularidade: Uma boa função deve seguir o princípio da responsabilidade única. Se ela faz muitas coisas, divida-a em funções menores.
- A Função main: Ela é a "função mestre". O return 0; ao final dela comunica ao Sistema Operacional que o programa terminou sem erros.
- Contrato de Tipos: Se a função foi declarada como int, o compilador espera um return com um valor inteiro. Ignorar isso pode causar comportamentos indefinidos no hardware.

</details>

---
<details>
<summary><b>🛡️  Passagem por Valor (Seção 4.1)</b></summary>
<br>

---

[Codigos da Seção 4.1 podem ser encontrados aqui](./(SEÇÃO 4-1)-PASSAGEM-DE-VALOR)

---

No C, a regra é absoluta: **Tudo o que você passa para uma função é COPIADO.** Sem exceções.

#### 🧪 O Experimento do Incremento
Observe este código e tente prever o resultado:

```c
void increment(int a) {
    a++; // Incrementa a cópia
}

int main(void) {
    int i = 10;
    increment(i);
    printf("i == %d\n", i); // O que será impresso?
}
```
Resultado: i == 10

### 🧠 O que aconteceu dentro da memoria?

1. Na main: Existe uma gaveta na memória chamada i com o valor 10.

2. A Chamada: Quando você chama increment(i), o C cria uma nova gaveta chamada a (o parâmetro) e copia o valor 10 para dentro dela. É como se ele fizesse a = i.

3. Dentro da Função: A função faz a++, então a vira 11. Mas a gaveta i lá na main não foi tocada!

4. O Fim: Quando a função termina, a gaveta a é destruída (descartada). Voltamos para a main e i continua sendo 10.

### ⚖️ Resumo:
- Independência: O parâmetro é uma variável local independente.

- Isolamento: As funções em C são isoladas. Elas não têm permissão para mexer nas variáveis de outras funções diretamente.

- Como contornar? Para "trazer um valor de volta", você deve usar o return (como fizemos no plus_one) ou usar Ponteiros (que o Beej chama de Passagem por Referência, mas que no fundo ainda é uma cópia do endereço!).

### 🎓 Dica:
Lembre-se da frase do pirata no texto: "Prepare-se para a decepção". Se você espera que uma função mude sua variável original apenas passando ela como argumento, você terá um bug. O C opera em cópias locais, NÃO IMPORTA O QUE ACONTEÇA.

</details>

---

<details>
 <summary><b>📋 Protótipos de Função (Seçaõ 4.2)</b></summary>
<br>

---

[Codigos da Seção 4.2 podem ser encontrados aqui](./(SEÇÃO 4-2)-PROTOTIPOS-DE-FUNÇÃO)

---

O compilador do C lê o código de cima para baixo. Se você tentar chamar uma função antes de definí-la, o compilador não saberá qual o tipo de retorno ou quais parâmetros ela aceita.

#### 🕵️ O que é um Protótipo?
Um protótipo é apenas a "assinatura" da função (a primeira linha dela) seguida de um ponto e vírgula `;`. Ele serve para dizer ao compilador: *"Ei, em algum lugar deste código (ou em outro arquivo), existe uma função com este nome e este formato. Pode confiar!"*.

```c
#include <stdio.h>

int foo(void);  // Protótipo: Aviso prévio ao compilador

int main(void) {
    int i = foo(); // Agora funciona! O compilador já conhece a assinatura.
    printf("%d\n", i);
    return 0;
}

int foo(void) { // Definição real da função
    return 3490;
}
```

### ⚖️ Por que usar Protótipos?
- Organização: Permite que você coloque a main() no topo do arquivo (o que é uma boa prática) e as outras funções abaixo.
- Arquivos Separados: Permite chamar funções que estão em outros arquivos .c.
- Segurança: O compilador verifica se você está passando os argumentos corretos antes mesmo de chegar na definição da função.

### 🚔 Por que o printf funciona sem protótipo?
- Na verdade, ele tem um protótipo! Quando você escreve #include <stdio.h>, você está literalmente colando centenas de protótipos de funções de entrada e saída (como printf e scanf) no topo do seu código.

### 🎓 Nota:
Antigamente (no padrão C89), você podia chamar funções sem avisar, e o C tentava "adivinhar" o que elas faziam (chamado de declaração implícita). Hoje isso é proibido ou gera avisos graves. Sempre use protótipos para manter seu código legítimo e profissional!

### 🎓 Orientação:
Pense nos protótipos como o **Sumário** de um livro. Você lê o sumário para saber quais capítulos existem antes de começar a ler o conteúdo. No C, os protótipos no topo do arquivo dão uma visão geral de tudo o que o programa é capaz de fazer.

**Dica técnica:** No protótipo, você nem precisa colocar o nome da variável, apenas o tipo.
Exemplo: `int soma(int, int);` é um protótipo válido para `int soma(int a, int b)`. Mas colocar o nome ajuda a documentar o que cada número faz!

</details>

---

<details>
<summary><b>🚫 Listas de Parâmetros Vazias: O Perigo do `()` vs `(void)` (Seção 4.3)</b></summary>
<br>

---

[Codigos da Seção 4.3 podem ser encontrados aqui](./(SEÇÃO 4-3)-LISTA-DE-PARAMETROS-VAZIAS)

---

Embora pareça apenas "preguiça" de digitar, existe uma diferença técnica crítica entre deixar os parênteses vazios e usar a palavra-chave `void`.

#### 🧪 A Diferença no Protótipo
Esta é a parte onde o erro acontece. No C, as duas declarações abaixo **NÃO** são iguais:

```c
void foo();       // ⚠️ "Não tenho informações sobre os parâmetros"
void foo(void);   // ✅ "Eu garanto que esta função NÃO aceita parâmetros"
```

- 1 - void foo(); (O Jeito Antigo): Diz ao compilador para "desligar" a verificação de tipos. Ele não sabe se a função recebe 0, 1 ou 10 argumentos. Se você passar algo por erro, o compilador pode ficar quieto e o programa quebrar depois. 

- 2 - void foo(void); (O Jeito Correto): Informa explicitamente que a função é vazia. Se você tentar passar qualquer argumento, o compilador te avisa na hora com um erro.

### 🏗️ Na Definição da Função
Quando você está escrevendo o corpo da função, o comportamento de void foo() é tratado pelo padrão moderno (C11) como se fosse void foo(void).

No entanto, por uma questão de consistência e clareza, você deve sempre usar o void.

### 🎓 Nota:
A regra de ouro é simples: Sempre use void. Não há nenhuma razão legítima em C moderno para deixar os parênteses vazios. Isso ajuda o compilador a ser seu "guarda-costas", impedindo que você passe dados para onde não deveria.

</details>
</details>

---

<details>
  <summary><b>🔹 Dia 5: Ponteiros </b></summary>

---

[Codigos do dia 5 podem ser encontrados aqui](./DIA_005)

---

---
</details>