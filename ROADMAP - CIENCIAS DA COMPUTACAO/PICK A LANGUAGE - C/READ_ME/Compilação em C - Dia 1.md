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


</details>
