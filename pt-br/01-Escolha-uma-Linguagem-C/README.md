# Estudos de Linguagem C - Guia do Beej

Repositório destinado ao aprendizado de C focado em fundamentos de Ciência da Computação.

---

## 🛠️ Ambiente de Desenvolvimento
- **SO:** Ubuntu Linux
- **IDE:** CLion
- **Compilador:** GCC

---

## 🧠 Filosofia do C (Segundo o Guia do Beej)
- **Baixo Nível:** C é uma linguagem sem "cinto de segurança". Ela permite interfacear diretamente com a memória e o hardware.
- **Conectividade:** Aprender C é a base para entender Sistemas Operacionais e linguagens modernas (C++, Rust, Go).
- **O Desafio:** O conceito de **Ponteiros** é identificado como o principal obstáculo (endereços de memória).

---

### 🗺️ Progresso de Estudos:
<br>

<details>
  <summary><b>🔹 Dia 1: Como compilar com o GCC</b></summary>

---

[Codigos do dia 1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_001)

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

[Codigos do dia 2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_002)

---

### 📖 O Hello World

#### 🧠 O que aprendi:
- **Pré-processador (#):** Age antes do compilador. O `#include` copia bibliotecas para o código. (Tudo que começa com # roda antes do compilador.)
- **Header Files (.h):** Arquivos como `stdio.h` fornecem ferramentas básicas (como o `printf`).
- **Comentários:** Essenciais para documentar a lógica (`//` ou `/* */`).
- **Fluxo de Execução:** O programa sempre começa na função `main()` e termina na sua última chave `}`.
- **\n:** Comando para pular linha (newline).

#### 🛠️ Comando de Compilação Revisado:
- `gcc -o hello hello.c` (Cria o executável 'hello').
- `./hello` (Executa o arquivo no diretório atual).

#### 🧠 O que aprendi:
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

[Codigos do dia 3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003)

---

#### 🧠 O que esperar:
- Aprender a classificar os elementos de um programa.
- Entender como o C lida com diferentes tipos de dados e instruções.
---

<details>
<summary><b> 📦 Variaveis (Seção 3.1.0):</b></summary>
<br>

### 💾O que é uma Variável? (Visão de Baixo Nível)

Para o usuário, é um nome. Para o C, uma variável é uma **abstração de um endereço de memória física**.

#### 🏗️ A Anatomia de uma Variável
Toda variável no seu código possui quatro características fundamentais que o computador precisa gerenciar:

1.  **Nome (Identificador):** O apelido que nós usamos no código (ex: `idade`).
2.  **Tipo:** Define quantos bytes ela ocupa e como esses bits devem ser interpretados (ex: `int` vs `float`).
3.  **Endereço (Pointer):** A localização exata do primeiro byte da variável na memória RAM.
4.  **Valor:** O estado atual dos bits armazenados naquele endereço.

#### 🗺️ Memória como um Array de Bytes
Pense na memória RAM como um **array gigantesco de bytes**. Cada byte tem um índice (o endereço).
- Se você declara um `int x`, o C reserva um bloco (geralmente 4 bytes).
- O nome `x` passa a ser o rótulo para o endereço do **primeiro byte** desse bloco.

[Image showing a sequence of memory cells with addresses like 0x100, 0x101, etc., highlighting a block of 4 cells labeled as 'Variable X']

#### 🔄 O Salto para Ponteiros
A razão pela qual estudamos isso agora é simples: em C, você pode manipular o **endereço** diretamente, não apenas o **valor**.
* **Variável Comum:** `x = 10;` (Muda o que está dentro do quarto).
* **Ponteiro:** `p = &x;` (Guarda o número do quarto onde `x` mora).

> **🎓 Nota:** No C, você está muito perto do hardware. Quando você declara uma variável, você está literalmente reservando eletricidade e silício para guardar seus dados. Se você não inicializa uma variável, ela terá "lixo de memória" — os restos de dados de algum programa que usou aquele endereço antes do seu!

#### 🏨 A Analogia do Hotel (Memória RAM)
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

[Codigos da Seção 3.1.1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-1-1)-NOMES-DE-VARIAVEIS)

---

#### Nomes de Variáveis

#### ✅ O que é permitido:
- Letras (A-Z, a-z), Números (0-9) e Underscore (`_`).

#### ❌ O que é proibido ou restrito:
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

[Codigos da Seção 3.1.2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-1-2)-TIPOS-DE-VARIAVEIS)

---

#### 📦 Tipos Básicos:
- `int`: Números inteiros (ex: 2, -10).
- `float`: Números reais com vírgula (ex: 3.14).
- `char`: Uma única letra (ex: 'A').
- `char *`: Uma string/texto (ex: "Olá").

#### ⚠️ O Perigo do "Lixo de Memória":
- Variáveis declaradas e não inicializadas (ex: `int i;`) possuem valores **indeterminados**.
- **Sempre** inicialize suas variáveis para evitar comportamentos estranhos.

#### 🖨️ Saída Formatada:
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

[Codigos da Seção 3.1.3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-1-3)-TIPOS-BOOLEANOS)

---

#### 🧠 O conceito de Verdade no C:
- **Falso (False):** Representado pelo número `0`.
- **Verdadeiro (True):** Qualquer número diferente de zero (`1`, `-5`, `100`).

#### 🆕 No C23:
- Agora temos o tipo `bool` e as palavras-chave `true` e `false` nativamente.
- O valor numérico de `true` é `1`.

#### ⚠️ Cuidado na Comparação:
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

[Codigos da Seção 3.2.1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-2-1)-OPERADORES-ARITMETICOS)

---

#### 🔢 Operações Comuns:
- `+`, `-`, `*`, `/`: Operações básicas.
- `%`: Módulo (Resto da divisão).

#### ⚡ Atalhos (Shorthands):
- `i += 5` é o mesmo que `i = i + 5`.

#### 🚫 O que NÃO fazer:
- **Potência:** Não use `^`. Use `pow(base, expoente)` da biblioteca `<math.h>`.

> **Pulo do Gato:** Cuidado com a divisão de inteiros! Se você fizer `int x = 5 / 2;`, o resultado será `2` (o C trunca o .5 porque a variável é int).
</details>

---

<details>
<summary><b>↔️ Operador Ternário (Seção 3.2.2)</b></summary>
<br>

---

[Codigos da Seção 3.2.2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-2-2)-OPERADOR-TERNARIO)

---

#### 💡 O "if" de uma linha:
- **Sintaxe:** `condição ? verdadeiro : falso;`
- **Exemplo:** `y += (x > 10) ? 17 : 37;`
    - Se `x` for maior que 10, soma 17. Senão, soma 37.

#### 🚀 Vantagem:
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

[Codigos da Seção 3.2.3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-2-3)-INCREMENTO-E-DECREMENTO)

---

#### 🆙 Operadores de Passo:
- `i++` (Pós): Usa o valor atual na expressão e **depois** incrementa.
- `++i` (Pré): Incrementa primeiro e **depois** usa o novo valor na expressão.
- O mesmo vale para o decremento (`i--` e `--i`).

#### 🧪 Exemplo Comparativo:
```c
int i = 10;
printf("%d", i++); // Vai imprimir 10 (e i vira 11 depois)
printf("%d", ++i); // Vai imprimir 12 (i já era 11, vira 12 e imprime)
```

-----

#### 🛠️ Desafio Prático no CLion:

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

[Codigos da Seção 3.2.4 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-2-4)-OPERADOR-VIRGULA)

---

#### ➡️ Sequência da Esquerda para a Direita:
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

[Codigos da Seção 3.2.5 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-2-5)-OPERADORES-CONDICIONAIS)

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

[Codigos da Seção 3.2.6 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-2-6)-OPERADORES-LOGICOS)

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

[Codigos da Seção 3.2.7 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-2-7)-OPERADOR-SIZEOF-(Medindo-a-Memoria))

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
#### 🎓 Por que aprender isso agora?
Imagine que você vai comprar uma caixa para guardar 10 laranjas. Você precisa saber o tamanho da laranja para a caixa não ficar pequena demais, certo? No C, quando formos criar listas (arrays) ou reservar memória manualmente (alocação dinâmica), o `sizeof` é quem vai dizer o tamanho exato da "caixa" que o computador precisa preparar.

</details>

---
<details>
 <summary><b>🚦 Controle de Fluxo (Seção 3.3.0) </b></summary>
<br>

---

[Codigos da Seção 3.3.0 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-3-0)-CONTROLE-DE-FLUXO)

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
#### ⚠️ O Perigo do "Falso Visual"
Cuidado! Diferente do Python, o C ignora espaços e identação. O que define o que pertence ao if são as chaves, não o espaço que você deixa.

Exemplo de Erro Comum:
```c
if (x == 10)
    printf("Isso depende do x\n");
    printf("Isso SEMPRE acontece!\n"); // Cuidado: Esta linha NÃO está no if!
```
#### 💡Dica: 
Siga a "Boa Prática dos Veteranos": Sempre use chaves { }, mesmo que seja para uma única linha. Isso evita erros bobos no futuro e deixa seu código muito mais fácil de ler.

</details>

---

<details>
<summary><b> 🔀 A Estrutura `if-else` (Seção 3.3.1)</b></summary>
<br>

---

[Codigos da Seção 3.3.1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-3-1)-ESTRUTURA-(if-else))

---

O `if` testa uma condição. Se ela for verdadeira, o bloco do `if` roda. Se for falsa, o C pula para o próximo comando — a menos que você forneça um `else`.

### 1. O Plano B: `else`
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

[Codigos da Seção 3.3.2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-3-2)-WHILE-(LACO-DE-REPETICAO))

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

[Codigos da Seção 3.3.3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-3-3)-DO-WHILE-(CONTROLE-DE-FLUXO))

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

#### 🎲 Aplicação Avançada: Números Pseudoaleatórios:
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


#### 🔍 O Problema do Determinismo (rand vs srand)
rand(): Gera números "pseudoaleatórios". Sem uma semente diferente, ele produzirá a mesma sequência toda vez que o programa iniciar.

srand(): É usado para "semear" o gerador. Geralmente usamos srand(time(NULL)) para que cada execução use o horário atual como base, garantindo sequências diferentes.

#### 🎓 Nota:
O do-while é ideal para validação de entrada de dados. Por exemplo: "Peça uma nota ao usuário -> Verifique se é válida -> Se não for, peça de novo". Você não pode verificar se a nota é válida antes de pedir que o usuário a digite!

</details>

---

<details>
<summary><b>⚙️O Laço `for`: O Rei das Repetições (Seção 3.3.4)</b></summary>
<br>

---

[Codigos da Seção 3.3.4 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-3-4)FOR-(LACO-DE-REPETICAO))

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
#### 🚀 Recursos Avançados
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

#### 🎓 Nota:
A grande vantagem do for sobre o while é o escopo. No for, a variável de controle (como o i) fica vinculada à lógica do loop. Se você esquecer o i++ no final de um while, você cria um bug infinito. No for, como a atualização está na assinatura do comando, é muito mais difícil esquecer de atualizar o contador.

</details>

---

<details>
<summary><b>🚥 O Comando `switch`: Seleção Direta (Seção 3.3.5)</b></summary>
<br>

---

[Codigos da Seção 3.3.5 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_003/(SECAO-3-3-5)-SWITCH-CASE)

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
#### Dica Profissinal:
Se você realmente quiser que um caso "caia" no outro de propósito, sempre deixe um comentário avisando: // Fall through!(Cair-Atravessar) . Isso evita que outros programadores achem que foi um erro.


#### 🔍 O "Pulo do Gato": Usando char no switch
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
#### 🎓Nota:
Nunca tente usar números decimais (float/double) ou frases (strings) dentro de um switch. O compilador vai dar erro na hora. O switch foi feito para valores discretos e exatos.

</details>

</details>

---
<details>
  <summary><b>🔹 Dia 4: Funçoes </b></summary>

---

[Codigos do dia 4 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_004)

---

<details>
<summary><b>🚀 Introdução a Funçoes (Seção 4.0)</b></summary>
<br>

---

[Codigos da Seção 4.0 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_004/(SECAO-4-0)-INTRODUCAO-A-FUNCOES)

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
#### A. Passagem por Valor (O Conceito de Cópia) 🛡️

Este é o comportamento vital do C: Os argumentos são copiados para os parâmetros.
Quando você passa uma variável para uma função, o C cria um "dublê" (cópia binária) dela em um novo endereço de memória.
Qualquer alteração feita no parâmetro dentro da função não afeta a variável original que está na main ou em outra função.

#### B. O uso do void 🚫

A palavra-chave void significa "vazio" ou "nada".
Retorno void: A função executa uma ação (ex: imprimir um log ou mover um arquivo) mas não gera um resultado numérico ou de dados para ser guardado.
Parâmetro void: Indica explicitamente que a função não aceita nenhuma entrada (ex: int main(void)).

#### C. Ordem e Declaração 📋

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

#### 🎓 Dicas:
- Modularidade: Uma boa função deve seguir o princípio da responsabilidade única. Se ela faz muitas coisas, divida-a em funções menores.
- A Função main: Ela é a "função mestre". O return 0; ao final dela comunica ao Sistema Operacional que o programa terminou sem erros.
- Contrato de Tipos: Se a função foi declarada como int, o compilador espera um return com um valor inteiro. Ignorar isso pode causar comportamentos indefinidos no hardware.

</details>

---

<details>
<summary><b>🛡️  Passagem por Valor (Seção 4.1)</b></summary>
<br>

---

[Codigos da Seção 4.1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_004/(SECAO-4-1)-PASSAGEM-DE-VALOR)

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

#### 🧠 O que aconteceu dentro da memoria?

1. Na main: Existe uma gaveta na memória chamada i com o valor 10.

2. A Chamada: Quando você chama increment(i), o C cria uma nova gaveta chamada a (o parâmetro) e copia o valor 10 para dentro dela. É como se ele fizesse a = i.

3. Dentro da Função: A função faz a++, então a vira 11. Mas a gaveta i lá na main não foi tocada!

4. O Fim: Quando a função termina, a gaveta a é destruída (descartada). Voltamos para a main e i continua sendo 10.

#### ⚖️ Resumo:
- Independência: O parâmetro é uma variável local independente.

- Isolamento: As funções em C são isoladas. Elas não têm permissão para mexer nas variáveis de outras funções diretamente.

- Como contornar? Para "trazer um valor de volta", você deve usar o return (como fizemos no plus_one) ou usar Ponteiros (que o Beej chama de Passagem por Referência, mas que no fundo ainda é uma cópia do endereço!).

#### 🎓 Dica:
Lembre-se da frase do pirata no texto: "Prepare-se para a decepção". Se você espera que uma função mude sua variável original apenas passando ela como argumento, você terá um bug. O C opera em cópias locais, NÃO IMPORTA O QUE ACONTEÇA.

</details>

---

<details>
 <summary><b>📋 Protótipos de Função (Seção 4.2)</b></summary>
<br>

---

[Codigos da Seção 4.2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_004/(SECAO-4-2)-PROTOTIPOS-DE-FUNCAO)

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

#### ⚖️ Por que usar Protótipos?
- Organização: Permite que você coloque a main() no topo do arquivo (o que é uma boa prática) e as outras funções abaixo.
- Arquivos Separados: Permite chamar funções que estão em outros arquivos .c.
- Segurança: O compilador verifica se você está passando os argumentos corretos antes mesmo de chegar na definição da função.

#### 🚔 Por que o printf funciona sem protótipo?
- Na verdade, ele tem um protótipo! Quando você escreve #include <stdio.h>, você está literalmente colando centenas de protótipos de funções de entrada e saída (como printf e scanf) no topo do seu código.

#### 🎓 Nota:
Antigamente (no padrão C89), você podia chamar funções sem avisar, e o C tentava "adivinhar" o que elas faziam (chamado de declaração implícita). Hoje isso é proibido ou gera avisos graves. Sempre use protótipos para manter seu código legítimo e profissional!

#### 🧭 Orientação:
Pense nos protótipos como o **Sumário** de um livro. Você lê o sumário para saber quais capítulos existem antes de começar a ler o conteúdo. No C, os protótipos no topo do arquivo dão uma visão geral de tudo o que o programa é capaz de fazer.

**Dica técnica:** No protótipo, você nem precisa colocar o nome da variável, apenas o tipo.
Exemplo: `int soma(int, int);` é um protótipo válido para `int soma(int a, int b)`. Mas colocar o nome ajuda a documentar o que cada número faz!

</details>

---

<details>
<summary><b>🚫 Listas de Parâmetros Vazias: O Perigo do `()` vs `(void)` (Seção 4.3)</b></summary>
<br>

---

[Codigos da Seção 4.3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_004/(SECAO-4-3)-LISTA-DE-PARAMETROS-VAZIAS)

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

#### 🏗️ Na Definição da Função
Quando você está escrevendo o corpo da função, o comportamento de void foo() é tratado pelo padrão moderno (C11) como se fosse void foo(void).

No entanto, por uma questão de consistência e clareza, você deve sempre usar o void.

#### 🎓 Nota:
A regra de ouro é simples: Sempre use void. Não há nenhuma razão legítima em C moderno para deixar os parênteses vazios. Isso ajuda o compilador a ser seu "guarda-costas", impedindo que você passe dados para onde não deveria.

</details>
</details>

---

<details>
  <summary><b>🔹 Dia 5: Ponteiros </b></summary>

---

[Codigos do dia 5 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005)

---

<details>
<summary><b>📍Ponteiros em C - Introdução (Seção 5.0)</b></summary>
<br>

---

[Codigos da Seção 5.0 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005/(SECAO-5-0)-PONTEIROS-EM-C-INTRODUCAO)

---

Os ponteiros são, possivelmente, o tópico mais temido da linguagem C. No entanto, eles são apenas uma forma mais **explícita** de lidar com algo que outras linguagens (como Java, Python ou JavaScript) chamam de **referências**.

#### 🧠 O Conceito Fundamental
Imagine que você tem uma variável. Ela mora em um endereço específico na memória do seu computador.
* **A Variável:** É a "casa" e o que tem dentro dela.
* **O Ponteiro:** É um papel com o "endereço" escrito. Ele aponta para onde a casa está.



#### ⚖️ Referência vs. Objeto
No C, precisamos ser muito claros sobre o que estamos manipulando:
1.  **A Referência (Ponteiro):** O endereço de memória onde um dado reside.
2.  **O Valor:** O dado real que está guardado naquele endereço.

Diferente de linguagens de alto nível, o C não esconde isso de você. Você tem controle total (e responsabilidade total) sobre esses endereços.

> **⚠️ Nota :** O medo dos ponteiros vem da possibilidade de acessar endereços de memória que não pertencem ao seu programa. É como tentar abrir a porta da casa de um estranho com a sua chave: o Sistema Operacional vai intervir e fechar o seu programa (o famoso *Segmentation Fault*).


#### 🚀 Por que usar Ponteiros?
Se o C faz uma cópia de tudo (Passagem por Valor), como vimos nas funções, os ponteiros são a única forma de:
* Alterar variáveis originais dentro de uma função.
* Lidar com grandes volumes de dados sem gastar memória com cópias desnecessárias.
* Criar estruturas de dados complexas (listas, árvores, etc.).

#### 🎓 Dica:
A dica de ouro para este capítulo é: Visualize a memória. Sempre que estiver confuso, desenhe um quadradinho (a variável) e uma seta (o ponteiro) apontando para ele.

</details>

---

<details>
<summary><b>🏡 Memória e Variáveis: Onde as coisas moram (Seção 5.1)</b></summary>
<br>

---

[Codigos da Seção 5.1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005/(SECAO-5-1)-MEMORIA-E-VARIAVEIS)

---

Antes de entender o que é um ponteiro, você precisa entender como o computador guarda seus dados.

#### 📦 A Memória como um Grande Array
Imagine a memória RAM do seu computador como uma sequência gigantesca de "caixinhas" numeradas.
* Cada caixinha guarda **1 Byte** (8 bits).
* O número de cada caixinha é o seu **Endereço** (Address).
* Os endereços são sequenciais (0, 1, 2, 3...).

#### 📏 O Tamanho Importa (`sizeof`)
Nem todo dado cabe em uma caixinha (1 byte). Um `int` ou um `float`, por exemplo, geralmente ocupam **4 bytes** (4 caixinhas vizinhas).
* Você pode usar o operador `sizeof` para saber quantos bytes um tipo ocupa no seu sistema:
```c
printf("Um int usa %zu bytes\n", sizeof(int)); // Geralmente imprime 4
```

#### 📍 O que é um Ponteiro?
Um Ponteiro é simplesmente uma variável que guarda um Endereço de Memória.
Variável Comum: Guarda um valor (ex: int i = 10;).
Ponteiro: Guarda o número da "caixinha" onde esse valor está (ex: "o valor 10 está na caixinha nº 140.727...").

#### 🏠 A Analogia da Casa
A Casa: É a variável (tem cor, tamanho, móveis).
O Endereço da Casa: É o ponteiro (é apenas um pedaço de papel escrito "Rua X, nº 100").
O endereço não é a casa, mas ele te diz exatamente onde encontrá-la.

#### 🔍 O Operador "Endereço de" (&)
Como descobrimos o endereço de uma variável no C? Usamos o caractere E comercial: &.
```c
int i = 10;
printf("O valor de i é %d\n", i);
printf("O endereço de i é %p\n", (void *)&i);
```

#### 📝 Detalhes Técnicos:
- **`%p`**: É o especificador de formato para imprimir ponteiros (endereços).
- **Hexadecimal**: O endereço geralmente aparece como algo tipo `0x7ffddf7072a4`. É apenas um número em base 16 representando o índice da memória.
- **Cast `(void *)`**: Usamos isso no `printf` para evitar avisos do compilador, garantindo que o endereço seja tratado de forma genérica.

#### 🎓 Nota:
Não se assuste com o tamanho dos números dos endereços (ex: trilhões). O seu computador usa `"Memória Virtual"`, fazendo o programa acreditar que tem um espaço imenso de memória só para ele. O valor exato do número não importa para nós; o que importa é que esse número é a "chave" para encontrar o dado original.

#### 🔑 Ponto Chave:
Ponto chave aqui é o seguinte:
1. `i` é o **conteúdo** da caixa.
2. `&i` é o **número** escrito na tampa da caixa.

</details>

--- 

<details>
<summary><b>🧭 Tipos de Ponteiros (Seção 5.2)</b></summary>
<br>

---

[Codigos da Seção 5.2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005/(SECAO-5-2)-TIPOS-DE-PONTEIROS)

---

Até agora, vimos como "ver" o endereço de uma variável. Agora, vamos aprender a **armazenar** esse endereço em uma variável especial: o **Ponteiro**.

#### ✍️ Como Declarar um Ponteiro
Para dizer ao C que uma variável é um ponteiro, usamos o asterisco (`*`) entre o tipo e o nome da variável.

```c
int i;    // Uma variável comum que guarda um inteiro.
int *p;   // Uma variável que guarda o ENDEREÇO de um inteiro.
```

- Leitura: Lemos int *p como "p é um ponteiro para int" ou "p é um int-pointer".

#### 🤝 A Regra da Compatibilidade
Um ponteiro é exigente: se você declarou um ponteiro para `int`, ele só **deve guardar** endereços de variáveis do `tipo int`. Se você tentar guardar o endereço de um float em um int *, o compilador vai reclamar (e com razão!).

#### 🔗 Fazendo a Conexão (Apontando)
Para fazer o ponteiro "apontar" para uma variável, usamos o operador de endereço (`&`) que aprendemos antes:

```c
int i = 10;
int *p;    // No início, 'p' tem lixo de memória (aponta para lugar nenhum).

p = &i;    // Agora 'p' recebe o endereço de 'i'. Dizemos que "p aponta para i".
```
🔄 O que está acontecendo na memória?
1. `i` possui um valor (ex: 10).

2. `i` possui um endereço (ex: `0x7FF...`).

3. `p` possui seu próprio endereço, mas o seu conteúdo é o endereço de `i`.

#### 🎓 Nota:
Pense no `int` *p como um "controle remoto". O controle não é a TV, mas ele sabe exatamente onde a TV está e como interagir com ela. Nesta etapa, apenas guardamos o endereço no controle. No próximo passo, aprenderemos a apertar os botões!

#### 📝 Orientação:
É um erro muito comum de iniciante é tentar fazer isso: `p = i;` (sem o `&`).
* `p = i;` tenta dizer que o endereço da memória é o número 10. O computador vai tentar ir até a "gaveta nº 10" da memória, que provavelmente pertence ao Sistema Operacional, e... **BUM!** Seu programa trava.

**Sempre use o `&` para dar o endereço ao ponteiro.**

</details>

---

<details>
<summary><b>🔓 Desreferenciação (Seção 5.3)</b></summary>
<br>

---

[Codigos da Seção 5.3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005/(SECAO-5-3)-DESREFERENCIACAO)

---

Se um ponteiro é um papel com um endereço, a **desreferenciação** é o ato de ir até esse endereço e interagir com o que está lá dentro.

#### 🪄 O Operador de Indireção (`*`)
Sim, o C usa o asterisco novamente. Mas o significado muda dependendo do contexto:
1.  **Na Declaração (`int *p;`):** Diz que `p` é um ponteiro.
2.  **No Uso (`*p = 20;`):** Diz "acesse o valor para onde `p` está apontando".

#### 🛠️ Exemplo Prático: O "Alias"
Quando você desreferencia um ponteiro, você cria uma espécie de "apelido" para a variável original. Tudo o que você fizer com `*p` acontecerá com `i`.

```c
int i = 10;
int *p = &i;  // p aponta para i

*p = 20;      // "Vá até o endereço em p e mude o valor para 20"

printf("%d", i);  // Vai imprimir 20!
```

#### 🏠 Analogia da Casa (Revisitada)
- `p`: É o papel com o endereço "Rua das Flores, 123".

- `*p`: É você entrando na casa da "Rua das Flores, 123" e trocando os móveis.

### ⚖️ Resumo dos Símbolos (Não confunda!)

| Símbolo | Nome | O que faz? | Exemplo |
| :--- | :--- | :--- | :--- |
| **`&`** | **Endereço de** (*Address-of*) | Extrai o endereço de onde a variável mora. | `p = &i;` |
| **`*`** | **Indireção** (*Dereference*) | Acessa/Modifica o valor dentro do endereço. | `*p = 20;` |


#### 🎓 Nota:
Pense na desreferenciação como "abrir a caixa". Se você tem `p`, você tem a caixa fechada com um endereço nela. Se você usa `*p`, você abriu a caixa e está mexendo no conteúdo.


#### 📝 Orientação:
* Você deve estar se perguntando: *"Mas por que eu mudaria o valor de `i` usando `*p = 20` se eu posso simplesmente fazer `i = 20`?"*.

A resposta curta é: **Escopo**. Lembra que as funções só recebem cópias das variáveis e não conseguem mudar o original? Com ponteiros, você passa o **endereço** (`&i`) e a função usa a **desreferenciação** (`*p`) para mudar o valor original lá na sua `main`.

</details>

---

<details>
<summary><b>🚀 Passando Ponteiros como Argumentos (Seção 5.4)</b></summary>
<br>

---

[Codigos da Seção 5.4 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005/(SECAO-5-4)-PASSANDO-PONTEIRO-COMO-ARGUMENTO)

---

Por que usar ponteiros se podemos usar a variável diretamente? A resposta é: **Escopo e Modificação**.

#### 🔌 O Problema da Cópia
Vimos no Dia 4 que funções recebem cópias e não conseguem alterar a variável original da `main`. Os ponteiros resolvem isso!

1. Você passa o **endereço** da variável para a função.
2. A função recebe uma **cópia do endereço** (um ponteiro).
3. A função **desreferencia** esse ponteiro para chegar na variável original e alterá-la.

#### 🛠️ Exemplo: O Incremento Real
Desta vez, a função `increment` realmente funciona:

```c
#include <stdio.h>

void increment(int *p) {  // Recebe um ponteiro para int
    *p = *p + 1;         // Soma 1 ao que p aponta (a variável original!)
}

int main(void) {
    int i = 10;
    increment(&i);       // Passamos o ENDEREÇO de i
    
    printf("i == %d\n", i); // Agora imprime 11!
    return 0;
}
```

#### 💡 Pontos Chave:
- **Múltiplos Retornos:** Como você pode passar vários ponteiros para uma função, ela pode "devolver" vários dados alterando as variáveis originais, superando a limitação do return único.

- **Eficiência:** Em vez de copiar uma estrutura de dados gigante, você copia apenas o endereço dela (alguns bytes).

- **Regra de Ouro:** Se você quer que uma função modifique algo de fora para que você veja o resultado depois, você deve passar um ponteiro para esse algo.


#### 🎓 Nota:
Observe a chamada increment(&i). O & é o que transforma o seu int em um int* (ponteiro) para que a função o aceite. É como se você estivesse dando a chave da sua casa para a função trabalhar nela enquanto você espera.

#### 📝 Orientação:
- essa é a base de como o C funciona "de verdade". Quando você usa a função `scanf("%d", &idade)`, agora você entende por que aquele `&` está lá! O `scanf` precisa do **endereço** da sua variável `idade` para conseguir escrever o número que você digitou diretamente nela.

</details>

---

<details>
<summary><b>🚫 O Ponteiro `NULL` (Seção 5.5)</b></summary>
<br>

---

[Codigos da Seção 5.5 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005/(SECAO-5-5)-PONTEIRO-NULL)

---

Qualquer variável de ponteiro, independentemente do tipo, pode receber um valor especial chamado `NULL`. Isso indica explicitamente que o ponteiro **não aponta para lugar nenhum**.

```c
int *p = NULL; // p agora é um ponteiro nulo
```

#### ⚠️ O Perigo da Desreferenciação:
Como um ponteiro `NULL` não aponta para um endereço válido, tentar acessar o valor dele (desreferenciar) resultará em erro.

```c
int *p = NULL;
*p = 12;  // 💥 CRASH! Comportamento indefinido (Segmentation Fault)
```

#### 🛡️ Por que usar o `NULL`?
Embora tenha sido chamado de "o erro de um bilhão de dólares" por seu criador, o `NULL` é extremamente útil como:

- **Valor Sentinela:** Para indicar que uma busca falhou ou que não há mais dados.

- **Indicador de Inicialização:** Para garantir que um ponteiro não aponte para "lixo de memória" (endereços aleatórios perigosos) antes de ser usado.

#### 🎓 Nota :
Sempre que você declarar um ponteiro e não tiver um endereço para ele na hora, atribua `NULL`. É muito mais fácil para o seu programa lidar com um erro de ponteiro nulo do que com um ponteiro que aponta para um lugar aleatório e silenciosamente corrompe seus dados!

#### 📝 Orientação:
Imagine o `NULL` como o sinal de "Vago" em um táxi. Ele te diz que o táxi está disponível, mas você não pode entrar se ele não estiver lá.

**Dica técnica:** No C, o `NULL` é frequentemente definido como o valor `0`. Por isso, você verá muitos programadores testando se um ponteiro é válido com um simples `if (p)`. Se `p` for `NULL` (zero), o `if` falha!

</details>

---

<details>
<summary><b>✍️ Nota sobre a Declaração de Ponteiros(Seção 5.6)</b></summary>
<br>

---

[Codigos da Seção 5.6 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005/(SECAO-5-6)-DECLARACAO-DE-PONTEIROS)

---

A sintaxe de declaração no C pode ser traiçoeira quando tentamos colocar várias variáveis em uma única linha.

#### ⚠️ O Asterisco pertence à Variável, não ao Tipo
Um erro comum é pensar que o `*` faz parte do tipo (como `int*`). No C, o asterisco "gruda" no nome da variável que segue.

Observe os exemplos abaixo:

* **Correto (Misturando tipos):**
  ```c
  int a, *p; // 'a' é um inteiro comum; 'p' é um ponteiro para int.
  ```
  
* **O Perigo da Linha Única:**
  ```c
  int *p, q; // 'p' é um ponteiro; 'q' é APENAS um inteiro comum!
  ```
  - Mesmo que você escreva `int* p, q;` (com o asterisco junto ao tipo), para o compilador o resultado é o mesmo: **apenas p é ponteiro.**

#### 🧩 O Grande Teste
Consegue identificar quem é o quê nesta linha?

```c
int *a, b, c, *d, e, *f, g, h, *i;
```

**Resposta:**

**Ponteiros:** `a`, `d`, `f`, `i`.

**Inteiros comuns:** `b`, `c`, `e`, `g`, `h`.


#### 💡 Dica de Ouro:
Para evitar esse "bug visual", muitos programadores preferem escrever o asterisco colado no nome da variável (`int *p;`) em vez de colado no tipo (`int* p;`). Isso deixa claro que o ponteiro é a variável, e não o tipo inteiro em si naquela linha.

**Exemplo Profissional:**
```c
int *p;  // Ponteiro para o contador
int *q;  // Ponteiro para o resultado
int i;   // Variável inteira auxiliar
```
- Este padrão evita que você esqueça um asterisco acidentalmente e torna o seu código muito mais fácil de revisar.

</details>

---

<details>
<summary><b>📏 sizeof e Ponteiros (Seção 5.7)</b></summary>
<br>

---

[Codigos da Seção 5.7 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_005/(SECAO-5-7)-SIZEOF-E-PONTEIROS)

---

O operador `sizeof` retorna o tamanho em bytes baseado no **tipo** da expressão. Quando lidamos com ponteiros, precisamos ter cuidado com o que estamos medindo:

1.  **`sizeof(int *)`**: Retorna o tamanho do ponteiro (o endereço). Em sistemas 64-bit, isso geralmente é **8 bytes**.
2.  **`sizeof(*p)`**: Retorna o tamanho do **valor para onde o ponteiro aponta**. Se for um ponteiro para `int`, retornará o tamanho de um `int` (geralmente **4 bytes**).

#### 🔬 Exemplo Prático:
```c
int *p;

printf("%zu\n", sizeof(int));  // Imprime o tamanho de um int (ex: 4)
printf("%zu\n", sizeof p);     // Imprime o tamanho do PONTEIRO (ex: 8)
printf("%zu\n", sizeof *p);    // Imprime o tamanho do que p APONTA (ex: 4)
```

#### ⚠️ Lembre-se:
O `sizeof` é resolvido em tempo de compilação. Ele apenas olha para o tipo. Se `p` é um `int*`, então `*p` é um `int`, e é o tamanho do `int` que ele vai retornar.


#### 📝 Orientação:
- Essa distinção é vital para quando começarmos a alocar **memória dinamicamente**. Se você pedir espaço para `sizeof p` (8 bytes) achando que está pedindo espaço para um `int` (4 bytes), você vai desperdiçar memória. Se fizer o contrário, seu programa vai travar!

</details>
</details>

---

<details>
  <summary><b>🔹 Dia 6: Arrays </b></summary>

---

[Codigos do dia 6 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006)

---

<details>
<summary><b>📊 Arrays - Listas de Dados (Seção 6.0)</b></summary>
<br>

---

[Codigos da Seção 6.0 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-0)ARRAYS-LISTA-DE-DADOS)

---

Arrays no C são coleções de elementos do mesmo tipo guardados de forma sequencial na memória. Se você já usou `[` e `]` em outras linguagens, a sintaxe vai te parecer muito familiar.

#### 🏗️ A Estrutura Básica
Um array permite que você agrupe vários valores (como 10 inteiros) sob um único nome, acessando cada um através de um índice.

* **Índice Zero:** No C, o primeiro elemento está sempre no índice `0`.
* **Tipo Único:** Todos os elementos de um array devem ser do mesmo tipo (todos `int`, todos `float`, etc).



#### 🕵️ O Segredo do C
Embora pareçam uma estrutura própria, Arrays são apenas **ponteiros disfarçados**.
Quando você escreve `meu_array[3]`, o C está, na verdade, fazendo aritmética de ponteiros para chegar no endereço certo.

#### 🧠 A Abstração: O que é `array[i]` de verdade?

No C, a sintaxe de colchetes `[]` é apenas um "açúcar sintático" (*syntactic sugar*) para facilitar a nossa vida. Por baixo dos panos, o compilador traduz isso para **Aritmética de Ponteiros**.

#### 🕵️ A Equivalência Matemática
Quando você escreve `numero[3]`, o C faz o seguinte cálculo:

$$*(numero + 3)$$

> **Nota técnica:** O codigo sem abstração é `*(numero + 3 * sizeof(int))`. Porem, o compilador de C é esperto: quando você soma `3` a um ponteiro de `int`, ele **automaticamente** multiplica pelo `sizeof(int)`.

#### 🛠️ Por que isso importa?
Isso explica por que os arrays começam no **índice 0**:
* **`numero[0]`** é igual a **`*(numero + 0)`**.
* Ou seja: "Pegue o valor que está exatamente no endereço inicial". Não há deslocamento (*offset*).



#### 🤯 Curiosidade de "Escovador de Bits"
Como a soma é comutativa ($a + b = b + a$), no C técnico você poderia escrever `3[numero]` e o código funcionaria!
* `3[numero]` vira `*(3 + numero)`, que é o mesmo endereço.
* *Aviso: Nunca use isso em código profissional, mas é um ótimo truque para entender a lógica!*

#### 🎓 Nota:
O array é apenas um rótulo para o endereço do primeiro elemento. Todo o resto é matemática de ponteiros.

> **💡 Curiosidade:** A discussão sobre começar do 0 ou do 1 é antiga, mas no C, o 0 venceu porque ele representa o "deslocamento" (offset) a partir do início do array. O primeiro elemento está a 0 posições de distância do começo.


</details>

---

<details>
<summary><b>📝 Exemplo Prático: Arrays e Loops (Seção 6.1)</b></summary>
<br>

---

[Codigos da Seção 6.1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-1)-EXEMPLO-PRATICO-ARRAYS)

---

Ao declarar um array, você precisa definir um tamanho fixo entre os colchetes. Esse tamanho diz ao C quanta memória ele deve reservar de uma vez só.

#### 🛠️ Código de Exemplo (Floats e Iteração)

```c
#include <stdio.h>

int main(void) {
    int i;
    float f[4];  // Declara um array de 4 números decimais (floats)

    // Atribuindo valores um por um
    f[0] = 3.14159;  // O índice começa em 0
    f[1] = 1.41421;
    f[2] = 1.61803;
    f[3] = 2.71828;  // O último índice é sempre (tamanho - 1)

    // Usando um loop para imprimir todos os valores
    for (i = 0; i < 4; i++) {
        printf("%f\n", f[i]); // f[i] acessa o elemento na posição atual de i
    }

    return 0;
}
```

#### 🗝️ Pontos Importantes:
- **Tamanho Fixo:** Uma vez que você declarou `f[4]`, você não pode "aumentar" para `f[5]` depois. O tamanho é gravado na pedra durante a compilação.

- **Acesso Simétrico:** Usamos `[]` tanto para declarar o tamanho quanto para acessar ou modificar os valores mais tarde.

- **Padronização:** Se você vem de linguagens como Java ou JavaScript, essa sintaxe deve ser quase idêntica ao que você já conhece.

#### 🎓 Nota:
Observe que o loop vai de `0` enquanto `i < 4`. Isso garante que visitaremos os índices `0, 1, 2, 3`. Se tentássemos chegar ao `4`, estaríamos batendo na porta de uma memória que não nos pertence!

#### 📝 Orientação:
Em vez de escrever o número `4` direto no `for`, muitos programadores usam uma constante ou calculam o tamanho para evitar erros se o array mudar de tamanho no futuro

</details>

---

<details>
<summary><b>📏 6.2 Obtendo o Tamanho de um Array (Seção 6.2)</b></summary>
<br>

---

[Codigos da Seção 6.2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-2)-OBTENDO-TAMANHO-ARRAY)

---

No C, o array não guarda uma variável interna com seu tamanho. Para descobrir quantos elementos existem, usamos um cálculo baseado no espaço total que o array ocupa na memória.

#### 🧮 A Fórmula Mágica
A ideia é pegar o tamanho total do array (em bytes) e dividir pelo tamanho de um único elemento.

```c
int x[12]; 

size_t tamanho = sizeof x / sizeof(int); 
// Exemplo: 48 bytes total / 4 bytes por int = 12 elementos!
```

#### **⚠️ A Grande Armadilha: Escopo**
Este truque **SÓ FUNCIONA** no mesmo lugar (escopo) onde o array foi declarado.

Se você passar o array para uma função, o C o transforma em um simples ponteiro para o primeiro elemento.

- O `sizeof` dentro da função retornará o tamanho do ponteiro (geralmente 8 bytes em sistemas 64-bit), não o do array original!

#### 🚀 Dica Profissional: sizeof sem declarar
Você pode descobrir quanto espaço um array ocuparia mesmo antes de criá-lo:
```c
sizeof(double [48]); // Retorna os bytes necessários para 48 doubles
```

#### 🎓 Nota:
Como o C não gerencia o tamanho para você, a prática comum é sempre passar o tamanho do array como um argumento separado nas suas funções. Ex: `minha_funcao(int *array, int tamanho)`.

#### 📝 Orientação:
Grave isso: **"Arrays decaem para ponteiros em funções"**. É por isso que o `sizeof` falha lá dentro. Se você tentar usar a fórmula dentro de uma função, o resultado será algo maluco (como `2`), e seu loop vai parar antes da hora ou dar erro

</details>

---

<details>
<summary><b>🎨 Inicializadores de Arrays (Seção 6.3)</b></summary>
<br>

---

[Codigos da Seção 6.3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-3)-INICIADORES-ARRAYS)

---

No C, você pode definir os valores de um array no momento da declaração usando chaves `{}`.

#### 1. Inicialização Básica
Se você fornecer todos os valores, o C os coloca em ordem na memória.

```c
int a[5] = {22, 37, 3490, 18, 95}; // Array preenchido manualmente
```

#### 2. O Atalho do Zero
Se você fornecer **menos** itens do que o tamanho do array, o C preenche o restante automaticamente com `0`.

- **Zerar um array inteiro:**

```c
int a[100] = {0}; // Define o primeiro como 0 e o resto também vira 0
```

#### 3. Índices Designados
Você pode escolher posições específicas usando `[índice] = valor`. O C preencherá as lacunas com zero e continuará a sequência a partir do índice definido.

```c
int a[10] = {0, 11, 22, [5]=55, 66, 77};
// Resultado: 0, 11, 22, 0, 0, 55, 66, 77, 0, 0
```

#### 4. Tamanho Automático
Se você omitir o número dentro dos colchetes `[]`, o compilador contará os itens e definirá o tamanho exato.

```c
int a[] = {22, 37, 3490}; // O compilador define automaticamente o tamanho como 3
```

---

#### 🧠 A Abstração: O que acontece por baixo dos panos?

Uma das maiores revelações do C é entender que a sintaxe de colchetes `[]` é apenas uma forma amigável (açúcar sintático) de escrever **Aritmética de Ponteiros**.

#### 🕵️ A Equivalência Matemática
Quando você escreve `numero[3]`, o compilador traduz isso internamente para:

$$*(numero + 3)$$

O compilador é inteligente: como ele sabe que `numero` aponta para um `int`, ele automaticamente calcula o deslocamento correto na memória. Ele não soma apenas o número 3, mas sim `3 * sizeof(int)` bytes a partir do endereço inicial.



#### ⚠️ Avisos Importantes
* **Excesso de elementos:** Nunca coloque mais itens no inicializador do que o tamanho reservado, ou o compilador emitirá um erro de *excess elements*.
* **Lixo de Memória:** Se não inicializar um array local (ex: `int a[5];`), ele conterá valores aleatórios ("lixo") que estavam na memória antes. **Sempre inicialize com `{0}` por segurança.**

#### 🎓 Nota:
Entender que `array[i]` é exatamente igual a `*(array + i)` é o que permite você dominar a manipulação de memória no C. É por isso que os índices começam em **0**: o primeiro elemento está a "zero de distância" do endereço inicial do ponteiro.


</details>

---

<details>
<summary><b>🚨 Comportamento Indefinido (Seção 6.4)</b></summary>
<br>

---

[Codigos da Seção 6.4 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-4)-COMPORTAMENTO-INDEFINIDO)

---

O C **não impede** você de acessar índices que não existem no seu array. Ele parte do princípio que você sabe exatamente o que está fazendo.

#### 💣 O Exemplo do Desastre
Se você tem um array de 5 elementos e tenta ler 10, o C continuará lendo a memória sequencialmente, tratando o que encontrar pela frente como se fosse parte do seu array.

```c
#include <stdio.h>

int main(void) {
    int a[5] = {22, 37, 3490, 18, 95};

    for (i = 0; i < 10; i++) { // ERRO: Lendo 5 elementos a mais!
        printf("%d\n", a[i]);
    }
    return 0;
}
```

#### O que acontece na prática?

- O programa pode ler zeros.

- O programa pode ler números lixo (restos de outros programas).

- O programa pode simplesmente travar (Crash/Segmentation Fault).

#### 👻 O "Comportamento Indefinido" (Undefined Behavior)
Quando sai dos limites de um array, entra-se no reino do Comportamento Indefinido. Isso significa que o compilador tem permissão para fazer qualquer coisa. Seu código pode funcionar hoje e falhar amanhã, ou funcionar na sua máquina e travar no servidor.

#### 🎓 Nota:
A regra de ouro no C é: **Mantenha-se dentro dos limites!** O C te dá o poder de dirigir a 200km/h sem cinto de segurança; os colchetes `[]` não são uma barreira de proteção, são apenas um mapa. Se você sair da estrada, a culpa é do motorista!

#### Lembre-se:
- No código final (produção), esse erro pode passar despercebido e se tornar uma **vulnerabilidade** de segurança grave (é assim que muitos **hackers** invadem sistemas!).

</details>

---

<details>
<summary><b>🗓️ Matrizes Multidimensionais (Seção 6.5)</b></summary>
<br>

---

[Codigos da Seção 6.5 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-5)-MATRIZES-MULTIDIMENSIONAIS)

---

No C, você pode adicionar quantas dimensões desejar a um array. Uma matriz 2D é o uso mais comum, funcionando como uma tabela de linhas e colunas.

#### 🏗️ Declaração e Memória
Os valores são armazenados na memória em **ordem de linha** (*row-major order*). Isso significa que o primeiro índice indica a **linha** e o segundo a **coluna**.

```c
int a[10];          // 1D: Uma linha
int b[2][7];       // 2D: 2 linhas e 7 colunas
int c[4][5][6];    // 3D: Pense em um bloco ou cubo de dados
```

#### 🎯 Índices Designados em 2D:
Assim como nos arrays simples, você pode inicializar posições específicas. Um exemplo clássico é a **Matriz Identidade**:

```c
// Cria uma matriz 3x3 com 1s na diagonal e 0s no resto
int a[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
```

#### 🔄 Percorrendo a Matriz:
Para acessar todos os elementos, usamos loops aninhados (um `for` dentro de outro):

```c
for (row = 0; linha < 2; linha++) {
    for (coluna = 0; coluna < 5; coluna++) {
        printf("(%d,%d) = %d\n", linha, coluna, a[linha][coluna]);
    }
}
```

#### 🎓 Nota:
Lembre-se da matemática que vimos antes! Se `a[5]` é `*(a + 5)`, uma matriz `a[2][5]` envolve uma conta um pouco mais complexa para o compilador achar o endereço: ele precisa pular a largura de uma linha inteira para chegar na próxima.

- Um detalhe importante: quando trabalha com matrizes grandes, a ordem com que faz os loops (linha primeiro ou coluna primeiro) pode afetar a velocidade do seu programa por causa de como o processador lida com a memória (*cache*). No C, **sempre tente percorrer a linha primeiro** (o índice da direita mudando mais rápido), pois é assim que os dados estão encostados um no outro na memória física.

</details>

---

<details>
<summary><b>🧩 Arrays e Ponteiros (Seção 6.6 - Seção 6.6.4)</b></summary>

---

[Codigos das Seções 6.6.0 - Seçoes 6.6.4 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-6)-ARRAYS-E-PONTEIROS)

---

<details>
<summary><b>🔗 A Conexão Oculta (Seção 6.6) </b></summary>
<br>

Até agora, tratamos arrays e ponteiros como coisas diferentes, mas a verdade é que: **arrays são ponteiros disfarçados**. Entender essa relação é a chave para manipular grandes volumes de dados sem destruir o desempenho do seu programa.

#### 🎭 A Grande Identidade
No C, o nome de um array é, na verdade, um ponteiro para o seu **primeiro elemento**.
Quando você usa o nome do array sem colchetes, você está segurando o endereço de memória de onde ele começa.


#### 📤 Passando Arrays para Funções
Quando é passado um array para uma função, o C **não copia** todos os valores do array (isso seria lento e gastaria muita memória). Em vez disso, ele passa apenas um ponteiro.

* **O que a função recebe:** Apenas o endereço inicial.
* **O que a função não sabe:** Ela perde a noção de "tamanho" (`sizeof`). É por isso que quase sempre precisamos passar o tamanho como um segundo argumento.

> **💡 O que vem por aí:** Vamos mergulhar na relação real entre eles, mas o foco agora é entender como as funções enxergam esses dados e por que elas podem alterar os valores originais do array.

#### 🎓 Orientação:
Essa é a razão pela qual, se você mudar um valor dentro da função, ele muda no array original lá na main. Como você passou o endereço (ponteiro), a função está mexendo na mesma memória que o array original ocupa. Não é uma cópia, é o próprio!

</details>

---

<details>
<summary><b>📍 Obtendo um Ponteiro para um Array (Seção 6.6.1) </b></summary>
<br>

---

[Codigos da Seção 6.6.1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-6)-ARRAYS-E-PONTEIROS/(SECAO-6-6-1)-PONTEIRO-PARA-UM-ARRAY)

---

No C, existe um segredo fundamental: o nome do array é, por si só, um atalho para o endereço do seu primeiro elemento.

#### 🕵️ O Atalho (Shorthand)
Normalmente, para pegar o endereço do primeiro item, você escreveria `&a[0]`. Mas o C permite que você use apenas o nome do array.

```c
int a[5] = {11, 22, 33, 44, 55};
int *p;

p = &a[0];  // Forma explícita: p aponta para o primeiro elemento
p = a;      // FORMA PROFISSIONAL: Exatamente a mesma coisa, mas mais limpo!

printf("%d\n", *p);  // Saída: 11
```

#### 🧩 A Conexão Direta
Perceba que:

- `p` é um `int*`.

- `*p` nos dá o valor `11`.

- `a[0]` também nos dá o valor `11`.

Isso acontece porque, no fundo, o `compilador` trata o acesso ao array como um acesso via `ponteiro`.

#### 🎓 Nota:
Essa é a razão pela qual não usamos `&` quando vamos ler uma string com `scanf("%s", minha_string)`. Como a string é um array de chars, o nome dela já é o endereço que o `scanf` precisa!

#### 🛠️ Dica:
Grave bem essa regra: **`a` é igual a `&a[0]`**. Você verá isso em 99% dos códigos profissionais em C. É elegante, rápido e evita o uso excessivo de símbolos.

</details>

---

<details>
<summary><b>📤 Passando Arrays Unidimensionais para Funções(Seção 6.6.2)</b></summary>
<br>

---

[Codigos da Seção 6.6.2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-6)-ARRAYS-E-PONTEIROS/(SECAO-6-6-2)-ARRAYS-UNIDIMENCIONAIS-FUNCOES)

---

Quando passamos um array para uma função, o C oferece três formas de escrever a assinatura. **Importante:** para o compilador, todas as três são idênticas e resultam em um ponteiro.

#### 🎭 As Três Faces da Mesma Moeda
```c
// 1. Como um ponteiro (A mais comum e "honesta")
void times2(int *a, int len);

// 2. Usando notação de array vazia
void times3(int a[], int len);

// 3. Usando notação de array com tamanho (O C ignora o número 5!)
void times4(int a[5], int len);
```

#### 🧐 A Grande "Mentira" do a[5]:
Você pode achar que `void times4(int a[5], int len)` obriga o array a ter tamanho 5, mas não. O compilador ignora o número dentro dos colchetes na assinatura da função. Ele trata apenas como um ponteiro para o primeiro elemento.

#### 📏 A Regra de Ouro: Sempre passe o `len/Tamanho`
Como a função recebe apenas um ponteiro (o endereço inicial), ela não tem como saber onde o array termina. Por isso, quase sempre passamos uma variável separada (geralmente chamada de `len` , `size`  ou `tamanho`) para informar o tamanho.

#### 🎓 Nota:
Use preferencialmente `int *a`. Isso deixa claro para quem lê seu código que você está lidando com um endereço de memória e que o tamanho precisa ser gerenciado manualmente.

</details>

---

<details>
<summary><b>🔄 Alterando Arrays em Funções (Seção 6.6.3)</b></summary>
<br>

---

[Codigos da Seção 6.6.3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-6)-ARRAYS-E-PONTEIROS/(SECAO-6-6-3)-ALTERANDO-ARRAYS-EM-FUNCOES)

---

Diferente de variáveis comuns (como um `int` simples), quando você passa um array para uma função, você está passando o "mapa" para os dados originais.

#### 🛠️ O Efeito Colateral
Se a função alterar os elementos do array usando o ponteiro recebido, essas mudanças serão refletidas diretamente no array original (na `main`, por exemplo). Isso acontece porque tanto o nome do array original quanto o parâmetro da função apontam para o **mesmo lugar na memória**.

```c
#include <stdio.h>

void dobrar_array(int *a, int len) {
    for (int i = 0; i < len; i++)
        a[i] *= 2; // Altera o valor diretamente na memória original!
}

int main(void) {
    int x[5] = {1, 2, 3, 4, 5};
    dobrar_array(x, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", x[i]);  // Saída: 2, 4, 6, 8, 10!
}
```

#### 🤯 Notação de Array em Ponteiros:
Mesmo que o parâmetro seja um ponteiro (`int *a`), nós usamos `a[i]` para acessar os dados.

- No C, você pode usar colchetes em ponteiros e aritmética de ponteiros em arrays. Eles são intercambiáveis nesse contexto!

#### 🎓 Nota:
Isso é excelente para performance, pois você não perde tempo copiando 1 milhão de itens para dentro de uma função. Você apenas diz à função onde a lista começa. Mas cuidado: se você não quiser que a função altere seu array, você deve usar a palavra-chave `const` (veremos isso mais adiante).

#### 🎓 Orientação:
Essa é a grande diferença:
1.  Passar um `int x`: O C cria uma **cópia**. A função mexe na cópia e o original fica seguro. (**Passagem por Valor**)
2.  Passar um `int x[]`: O C passa o **endereço**. A função mexe no original. (**Passagem por Referencia**)
3.  Passar um `int x*`: O C tambem passa o **endereço**. A função mexe no original. (**Passagem por Referencia**)

</details>

---

<details>
<summary><b>📐 Passando Matrizes para Funções(Seção 6.6.4)</b></summary>
<br>

---

[Codigos da Seção 6.6.4 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_006/(SECAO-6-6)-ARRAYS-E-PONTEIROS/(SECAO-6-6-4)-PASSANDO-MATRIZES-PARA-FUNCOES)

---

Ao passar arrays multidimensionais para funções, as regras mudam um pouco. O C exige que você informe **todas as dimensões, exceto a primeira**.

#### 🧩 A Necessidade das Colunas
O compilador precisa saber o tamanho das colunas para calcular o deslocamento na memória. Sem saber onde termina uma linha, ele não consegue encontrar o início da próxima.

```c
#include <stdio.h>

// OBRIGATÓRIO: Definir pelo menos a segunda dimensão [3]
void print_2D_array(int a[][3]) { 
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++)
            printf("%d ", a[row][col]);
        printf("\n");
    }
}

int main(void) {
    int x[2][3] = { {1, 2, 3}, {4, 5, 6} };
    print_2D_array(x);
}
```

#### 🎭 Assinaturas Equivalentes
Para o compilador, estas duas formas de declarar o parâmetro são idênticas:

1. `void func(int a[2][3])`

2. `void func(int a[][3])` (A mais flexível e comum)

#### 🔍 Por que isso acontece?
Como a memória do computador é uma linha reta, o compilador precisa da segunda dimensão para calcular o "pulo" necessário para mudar de linha. Sem saber o número de colunas, o C não sabe onde uma linha termina e a outra começa.

#### ⚠️ Lembrete Vital: Sem Cinto de Segurança
Como sempre em C, não há checagem de limites em tempo de execução. Se você tentar acessar `a[5][10]` em uma matriz `3x3`, o C vai tentar ler essa memória e você terá o temido Comportamento Indefinido.

#### 🎓 Nota:
Pense na matriz como um prédio. Para o C te levar ao "apartamento 201", ele precisa saber quantos apartamentos existem por andar. Se você não disser isso na função, ele não sabe quantos "andares" de memória precisa pular!

</details>

</details>

</details>

---

<details>
  <summary><b>🔹 Dia 7: Strings </b></summary>

---

[Codigos do dia 7 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_007)

---

<details>
<summary><b>🧵 Strings: A Grande Mentira (Seção 7.0)</b></summary>
<br>

---

[Codigos da Seção 7.0 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_007/(SECAO-7-0)-STRINGS-GRANDE-MENTIRA)

---

Se você acha que String no C é um tipo de dado bonitinho como em outras linguagens, se preparou errado!
Aqui a real é curta e grossa: **Strings não existem.** Elas são apenas ponteiros e arrays de caracteres fingindo ser algo mais.

#### 🎭 O que está acontecendo por baixo do capô?
Sabe tudo o que a gente viu sobre arrays e ponteiros até agora?
Pois é, as strings são só uma aplicação direta disso.

* **Ponteiros de novo:** Quando você escreve um texto, o C te entrega o endereço da primeira letra e pronto.
* **Quase invisíveis:** No C, as strings mal têm "corpo" próprio; elas são apenas uma sequência de `char` na memória.



#### 🎓 Nota:
A única coisa que separa um amontoado de letras aleatórias de uma string "respeitável" que o `printf` consegue ler é o **terminador nulo (`\0`)**. Sem esse "ponto final" invisível, o C não para de ler a memória até encontrar um erro ou explodir o programa.

</details>

---

<details>
<summary><b>📝 Literais de String (Seção 7.1)</b></summary>
<br>

---

[Codigos da Seção 7.1 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_007/(SECAO-7-1)-LITERAIS-DE-STRING)

---

Antes de sair declarando variáveis, você tem que entender o que é um **Literal de String**. Basicamente, é qualquer sequência de caracteres entre **aspas duplas (`"`)**.

> **⚠️ Diferença Crucial:** > * **Aspas Simples (`'A'`):** Enclausuram um único caractere (são um bicho totalmente diferente).
> * **Aspas Duplas (`"Olá"`):** Enclausuram uma String literal.

#### 🕵️ Exemplos de Literais
| Exemplo | O que está rolando? |
| :--- | :--- |
| `"Hello, world!\n"` | Tem um `\n` no final para pular linha. Muito comum. |
| `"Isso é um teste"` | Uma string simples, sem firulas. |
| `"Ela disse: \"Oi.\""` | Usa a barra invertida (`\`) para colocar aspas dentro do texto. |



#### 🛠️ O Truque da Barra Invertida (`\`)
O compilador do C precisa de uma ajuda para não se confundir. Se você quer que uma aspa apareça **dentro** do seu texto, você precisa "escapar" ela usando uma barra invertida antes.

* **`\"`**: Diz ao C: "Isso é apenas um caractere de aspa, não é o fim da string!".
* **`\n`**: Diz ao C: "Pule para a próxima linha aqui".

Sem esse caractere de escape (`\`), o C acharia que a string terminou na primeira aspa que encontrasse, e o resto do seu código daria um erro gigante.


> **🎓 Insight de Memória:**
> Por trás de cada literal desses, o C está reservando um espaço contínuo na memória para guardar cada letra, uma do lado da outra. Nos próximos tópicos, vou mostrar como a gente acessa isso usando variáveis.

</details>

---

<details>
<summary><b>📦 Variáveis de String (Seção 7.2)</b></summary>
<br>

---

[Codigos da Seção 7.2 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_007/(SECAO-7-2)-VARIAVEIS-DE-STRING)

---

Agora que já sabemos criar o texto (o literal), precisamos de um lugar para guardar ele e usar depois. No C, a gente faz isso usando um **ponteiro para `char`**.

```c
char *s = "Hello, world!";
```

#### 🕵️ O que está rolando na memória?
Olha só o tipo da variável: `char *`. Isso mesmo, um ponteiro.
- A variável `s` não contém a frase inteira.
- Ela guarda apenas o `endereço do primeiro caractere`, que nesse caso é o `'H'`.

#### 🖨️ Como imprimir na tela?
Para mostrar a string completa no `printf`, usamos o especificador de formato `%s` (s de string).

```c
char *s = "Hello, world!";
printf("%s\n", s);  // Saída: Hello, world!
```
O `printf` é inteligente: ele pega o ponteiro `s`, vai até o endereço do 'H' e sai imprimindo letra por letra até encontrar o tal do caractere invisível (`\0`) que avisa que a festa acabou.


> **💡 Insight do Desenvolvedor:** 
> Trabalhar com `char` * é muito eficiente porque você só movimenta um endereço de memória (geralmente 8 bytes), não importa se a sua string tem 10 ou 10.000 letras.

</details>

---

<details>
<summary><b>🔤 Variáveis de String como Arrays (Seção 7.3)</b></summary>
<br>

---

[Codigos da Seção 7.3 podem ser encontrados aqui](./CODIGO_POR_DIA/DIA_007/(SECAO-7-3)-VARIAVEIS-STRING-COMO-ARRAYS)

---

Se você não quiser usar ponteiros diretamente, o C te dá outra opção: declarar a string como um **array de chars**. Na prática, o resultado parece o mesmo, mas a flexibilidade muda.

```c
char s[14] = "Hello, world!"; 

// Ou do jeito "preguiçoso" (deixando o compilador contar):
char s[] = "Hello, world!";
```

#### 🔢 Acessando como Array:
Como agora a string é um array, eu posso usar os colchetes `[]` para pegar cada letra individualmente. Para imprimir letra por letra, usamos o especificador `%c` (de character).

```c
#include <stdio.h>

int main(void) {
    char s[] = "Hello, world!";
    
    for (int i = 0; i < 13; i++)
        printf("%c", s[i]); // Imprime um caractere por vez
    
    printf("\n");
}
```

#### 🤯 A "Mágica" da Equivalência:
O que é bizarro (mas faz todo sentido em C) é que se eu trocar `char s[]` por `char *s`, o código acima **continua funcionando perfeitamente**.

```c
char *s = "Hello, world!";
printf("%c", s[i]); // Funciona! Mesmo sendo um ponteiro.
```

#### 💡 Insight do Desenvolvedor:
Isso é mais uma prova de que, no fundo, **arrays e ponteiros são a mesma coisa**. O `[]` é só um jeito mais amigável de fazer aritmética de ponteiros.

> **⚠️ Spoiler de Segurança:**
> Embora pareçam iguais, tem uma diferença enorme: se você declara como array (`char s[]`), você pode mudar as letras. Se declara como ponteiro (`char *s`), o C coloca isso numa área da memória que você não pode mexer. Se tentar mudar uma letra no ponteiro, o programa explode!

</details>

---



---

</details>