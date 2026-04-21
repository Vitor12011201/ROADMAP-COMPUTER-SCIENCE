# 🖥️ C Language Studies - Beej's Guide

Repository dedicated to learning C focused on Computer Science fundamentals.

---

## 🛠️ Development Environment
- **OS:** Ubuntu Linux
- **IDE:** CLion
- **Compiler:** GCC

---

## 🧠 C Philosophy (According to Beej's Guide)
- **Low Level:** C is a language without "seatbelts." It allows you to interface directly with memory and hardware.
- **Connectivity:** Learning C is the foundation for understanding Operating Systems and modern languages (C++, Rust, Go).
- **The Challenge:** The concept of **Pointers** is identified as the main obstacle (memory addresses).

---

### 🗺️ Study Progress:
<br>

<details>
  <summary><b>🔹 Day 1: Chaos and Order in C</b></summary>

---

[Day 1 codes can be found here](./CODE_BY_DAY/DAY_001)

---

<details>
 <summary><b>🏁 Preface (Section 1.0)</b></summary>
<br>

---

[Section 1.0 codes can be found here](./CODE_BY_DAY/DAY_001/(SECTION-1-0)-PREFACE)

---

To begin with, C is a minimalist language. As the creators (Kernighan & Ritchie) say: *"C is not a big language, and it is not well served by a big book"*.

### 😵 Obfuscated Code
Often, those looking at C for the first time feel like they are looking at Greek. There is even a worldwide competition (**IOCCC**) to see who can write the most unreadable code possible.

Look at this "monster" from 2001:
```c
E((ck?main((z?(stat(M,&t)?P+=a+'{'?0:3:execv(M,k),a=G,i=P,y=G&255,sprintf(Q,y/'@'-3?A(*L(V(%d+%d)+%d,0)
```
**The good news:**
- If this looks confusing now, it won't be for long. C has a simple core that we will explore layer by layer.

#### 📜 The Evolution of the Language:
C has changed a lot since 1988 (when the famous 2nd edition of the K&R book was released). Many new features have been added, but the essence remains the same: **total control over the machine.**

#### 🎯 What to expect from this journey:
- **Simplicity:** We will start with the basic core and expand into the libraries.
- **Clarity:** The goal is to move from total confusion to a state where C code becomes "natural reading."
- **Practice:** C is a language learned by "cracking your head" and compiling code.

> **💡 Developer Insight:**
> C is small, but what you can build with it is giant. The secret is not memorizing commands, but understanding how memory and the processor talk to each other.

</details>

</details>

---

<details>
  <summary><b>🔹 Day 2: Hello World</b></summary>

---

[Day 2 codes can be found here](./CODE_BY_DAY/DAY_002)

---

<details>
<summary><b>🚀 What to expect from C? (Section 2.1)</b></summary>
<br>

"Where do these stairs go?"  
"They go up."  
— *Ghostbusters*

C is a **low-level** language. Back in the day, it was seen as the height of freedom compared to Assembly (machine language). Today, next to Python or JavaScript, it seems basic and limited. It allows you to do **anything**, but it will make you work twice as hard for it.

#### 🤔 Why use C nowadays?

There are two main reasons for you to be here:

1. **Root Learning:** C is connected to the **computer's core**. By learning C, you understand how software talks to memory. **There are no seatbelts.** You will write code that crashes the PC, and that is part of the learning process.
2. **Power Tool:** C is still king in **Operating Systems** (like Windows, Linux, and MacOS) and **Embedded Systems**.



#### 🕵️ The "Boogeyman": Pointers
If you already program in another language, almost everything in C will feel familiar. The only thing that truly ties everyone's brain in knots is **Pointers**.

* **The Reality:** You probably already know the concept behind them, but C forces you to be explicit.
* **The "Click":** Before you understand pointers, they feel like slippery eels. The second you get it, they become the easiest and most powerful tool in your arsenal.

> **💡 Developer Insight:**
> Aside from pointers, the rest is just memorizing a new way to do what you already know. Prepare to get as close to the computer's core as you can get without having to write in binary.

</details>

---

<details>
<summary><b>🔬 Hello, World! - The Autopsy (Section 2.2)</b></summary>
<br>

The code below is the canonical starting point. Let's open this beast up and see what makes it pulse:

```c
/* Hello world program */        // 1. Multi-line comment
#include <stdio.h>                // 2. Preprocessor and Header

int main(void)                    // 3. The Entry Point
{
    printf("Hello, World!\n");    // 4. The Function Call
}                                 // 5. The End of the Line
```

#### 🛠️ 1. Comments (`/*` `*/` and `//`)
Everything between `/*` and `*/` or after `//` is **ignored by the compiler**. It serves as a way to leave messages for the "Future self". Believe me: you will forget why you wrote certain lines, so comment!

#### 🏗️ 2. The Preprocessor and the Octothorpe (`#`)
Everything that starts with `#` (the famous "hashtag" or, for those in the know, the **Octothorpe**) is resolved before the compiler even begins.

* **`#include`**: Tells the preprocessor: "Take all the content of this file and paste it here right now."
* **`<stdio.h>`**: This is the "Standard I/O" header. Without it, C wouldn't know what `printf()` is. It is the instruction manual for data input and output.

#### 🏁 3. The `main()` Function
This is the special function. The operating system automatically looks for it as soon as the program starts.

* None of your code runs before `main()`.
* When the code reaches the last brace `}`, the program terminates, and you return to the terminal.

#### 📢 4. `printf()` and the `\n`
This is where the work happens. We are calling a function that already exists in the standard library.

* **Argument**: We pass the string `"Hello, World!\n"`.
* **`\n` (Newline)**: This is the "line break" character. Without it, the next text you print would be stuck on the same line.

#### ⚡ 5. From Code to Executable
Your `.c` file is just text. To become a program, it passes through this funnel:

1.  **Preprocessor**: Resolves the `#includes`.
2.  **Compiler**: Transforms the text into **Machine Code** (the language that the CPU understands fast).
3.  **Executable**: The final file ready to run.

In the terminal (Linux/WSL), the classic command is:

```bash
gcc -o hello hello.c  # Compiles hello.c and generates the 'hello' executable
./hello               # Runs the program in the current directory
```

> **💡 Developer Insight:**
C is fast because, after compilation, there are no intermediaries. The processor reads the machine code directly. That's why if you miss a semicolon `;`, the compiler doesn't even try to run it; it stops everything immediately.

</details>

---

<details>
<summary><b>⚙️ Compilation Details (Section 2.3)</b></summary>
<br>

If you come from Python or JavaScript, you might have never worried about a separate "compilation step." In C, this isn't just a detail; it's the heart of the workflow. Compiling is the process of transforming your text (source code) into a program that the Operating System can execute natively.

#### 🌍 The Language Spectrum
Different languages handle code in distinct ways. See where C fits in:

| Language Type | What happens? | Example |
| :--- | :--- | :--- |
| **Interpreted** | The code is read and executed on the fly by another program (interpreter). | Python, JS |
| **Bytecode** | The code becomes a "middle ground" for a Virtual Machine (JVM/PVM). | Java, C# |
| **Compiled (C)** | The code turns into **actual 0s and 1s** that the CPU understands directly. | C, C++, Rust |

#### ⚡ Why is C so fast?
While Python needs a "virtual machine" running all the time to translate the code as it executes, C generates **Machine Code**.

* **No Intermediaries:** It is the processor's native language.
* **Raw Performance:** Once compiled, the program is a standalone and extremely fast file, as the CPU wastes no time "interpreting" anything.

#### 🛠️ The Compiler
The compiler is the software responsible for this translation. The most famous one in the Unix/Linux world is **GCC** (*GNU Compiler Collection*).

* **In the IDE:** You click "Build," but behind the scenes, the IDE is calling the compiler with a series of complex commands.
* **In the Terminal:** You have total control. This is where tools like **Bash** and **PowerShell** come in to manage projects with hundreds of files.

#### 💻 Build via Command Line
The basic command every C developer needs to master is:

```bash
gcc -o my_program source.c
```
- `gcc`: Calls the compiler.
- `-o my_program`: Defines the output file name. Without this, C generates a default file named `a.out`.
- `source.c`: Your original source code.

> **💡 Developer Insight:**
> C was designed to be compiled. This is why it has no "safety nets" at runtime (like Java's Garbage Collector). The focus is to offer maximum performance with minimum interference between your code and the hardware.

</details>

---

<details>
<summary><b>🛠️ Building with `gcc` (Section 2.4)</b></summary>
<br>

Now that we understand what the compiler does, let's see how to command it in practice. If you have a file named `hello.c` in your current directory, the command to transform it into an executable program is:

```bash
gcc -o hello hello.c
```
#### 🔍 Dissecting the command:

To transform your code into a program, we use `gcc` with the following arguments:

* **`gcc`**: Calls the compiler itself.
* **`-o hello`**: The `-o` flag stands for **output**. It tells GCC: *"Take the result of the compilation and save it with the name `hello`"*.
    * ⚠️ **Note:** If you forget this part, the compiler will generate a default file named `a.out`.
* **`hello.c`**: This is the source code file (the text you wrote) that you want to compile.

#### 🏗️ Handling Multiple Files

In real life, code is not kept in a single file. It is broken down into several parts to maintain organization and make maintenance easier. `gcc` can read all of them at once and "glue" everything into a single final executable:

```bash
gcc -o my_game interface.c characters.c npc.c items.c
```
The compiler will process each of these `.c` files, resolve the connections between them, and generate one large executable called `my_game`.

</details>

---

<details>
 <summary><b>🍏 Building with `Clang` (Section 2.5)</b></summary>
<br>

If you are developing on a **Mac**, the default compiler that comes with the system is not `gcc`, but **Clang**.

#### 🕵️ The GCC "Disguise"
macOS installs a "wrapper" (a shortcut) so that if you type `gcc` in the terminal, the system understands and executes `clang` behind the scenes. This ensures that old build scripts continue to work without issues.

#### 🛠️ Differences and Choices
* **Clang:** Known for providing friendlier error messages and being the foundation for Apple and Google (Android) tools.
* **GCC Proper:** If you truly need the original `gcc` on a Mac, you can install it via **Homebrew**.

> **💡 Developer Insight:**
> For 99% of cases at the beginning of your studies, it doesn't matter which one you use. The commands we learned for `gcc` (like the `-o` flag) work exactly the same way in `clang`. The important thing is to understand that the compiler is the tool, not the language.

</details>

---

<details>
<summary><b>💻 Building via IDEs (Section 2.6)</b></summary>
<br>

If you are using an **Integrated Development Environment (IDE)**, such as VS Code, CLion, or Tizen Studio, you won't need to type commands in the terminal all the time. The IDE works as a powerful interface that manages the compiler behind the scenes for you.

#### ⌨️ Essential Build and Run Shortcuts:

| Tool | Build (Compile) | Run (Execute) |
| :--- | :--- | :--- |
| **CLion** | `CTRL` + `F9` | `SHIFT` + `F10` |
| **Visual Studio** | `CTRL` + `F7` | `CTRL` + `F5` |
| **VS Code** | `F5` (Build + Debug) | `F5` |
| **Xcode (Mac)** | `CMD` + `B` | `CMD` + `R` |

#### 🚀 The CLion Advantage
**CLion** is the IDE I use in my studies. Unlike simple text editors, it is 100% focused on C and C++.
* **Native CMake:** CLion uses CMake as its default build system, which is excellent for large projects.
* **Static Analysis:** It warns you about memory and pointer errors even before you try to compile.
* **Refactoring:** It makes renaming variables and organizing code professionally much easier.

#### 🛠️ VS Code Setup
If you need to use **VS Code**, it is essential to install the official **Microsoft C/C++ extension** to enable *IntelliSense* and the debugger.

#### 🍎 Xcode Command Line Tools
On macOS, even when using CLion or any other IDE, you need the command line tools. Install them by running:
```bash
xcode-select --install
```

> **💡 Developer Insight:**
> As much as an IDE (especially a robust one like CLion) makes life easier with shortcuts and autocomplete, understanding how to build via the terminal (Command Line) is what saves you when the development environment "breaks" or when you need to configure a server where there is no graphical interface.

</details>

---

<details>
<summary><b>📜 C Versions - The Timeline (Section 2.7)</b></summary>
<br>

C has evolved significantly since 1972. Each version (dialect) is generally named after the year its specification was finalized. Understanding this is vital to know if a modern function will run on an older system.

| Version | Common Name | What changed? |
| :--- | :--- | :--- |
| **K&R C** | "Original C" (1978) | Created by Kernighan and Ritchie. Today it feels like "Archaic English" to us. |
| **C89 / C90** | ANSI C | The first official standardization. Defines the core of C to this day. |
| **C99** | C99 | The most popular version. Added line comments `//` and variables in the middle of the code. |
| **C11** | C11 | Added support for Unicode and Multi-threading (simultaneous tasks). |
| **C17 / C18** | C17 | A bug-fix update for C11. It is the current stable standard. |
| **C23** | C23 | The latest version, focused on modernizing the language and removing outdated features. |

#### 🛠️ Enforcing a Version in the Compiler
You can tell `gcc` or `clang` exactly which version you want to use with the `-std=` flag. In **CLion**, this is usually configured in the `CMakeLists.txt` file.

Terminal example:
```bash
gcc -std=c11 -pedantic foo.c
```
- `-std=c11`: Uses the 2011 standard.
- `-pedantic`: Activates "strict mode." The compiler will complain about anything that doesn't strictly follow the chosen standard.

#### 🚩 The Pro Developer's Flag Combo:
Beej (and I as well) recommends compiling your studies with the maximum level of warnings. This helps catch logic errors even before running the program:
```bash
gcc -Wall -Wextra -std=c23 -pedantic program.c
```
- `-Wall`: **W**arnings **all** (Enables all common warnings).
- `-Wextra`: Enables even more detailed additional warnings.


</details>

</details>

---

<details>
  <summary><b>🔹 Day 3: Variables and Declarations</b></summary>

---

[Day 3 codes can be found here](./CODE_BY_DAY/DAY_003)

---

<details>
<summary><b> 📦 Variables (Section 3.1.0 - Section 3.1.3):</b></summary>
<br>

---

[Section 3.1.0 - 3.1.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1)-VARIABLES)

---

<details>
<summary><b>💾 What is a Variable? (Section 3.1.0)</b></summary>
<br>

To the user, it is a name. To C, a variable is an **abstraction of a physical memory address**.

#### 🏗️ The Anatomy of a Variable
Every variable in your code has four fundamental characteristics that the computer needs to manage:

1.  **Name (Identifier):** The nickname we use in the code (e.g., `age`).
2.  **Type:** Defines how many bytes it occupies and how those bits should be interpreted (e.g., `int` vs `float`).
3.  **Address (Pointer):** The exact location of the first byte of the variable in RAM.
4.  **Value:** The current state of the bits stored at that address.

#### 🗺️ Memory as an Array of Bytes
Think of RAM as a **gigantic array of bytes**. Each byte has an index (the address).
- If you declare an `int x`, C reserves a block (usually 4 bytes).
- The name `x` becomes the label for the address of the **first byte** of that block.

#### 🔄 The Leap to Pointers
The reason we study this now is simple: in C, you can manipulate the **address** directly, not just the **value**.
* **Common Variable:** `x = 10;` (Changes what is inside the room).
* **Pointer:** `p = &x;` (Stores the room number where `x` lives).

> **🎓 Note:** In C, you are very close to the hardware. When you declare a variable, you are literally reserving electricity and silicon to store your data. If you don't initialize a variable, it will contain "memory garbage" — the leftover data from some program that used that address before yours!

#### 🏨 The Hotel Analogy (RAM Memory)
Imagine the computer's memory as a large hotel with thousands of rooms:

1.  **The Room (Memory):** Each room holds a piece of data (bytes).
2.  **The Room Number (Address/Pointer):** Every room has a unique number. This index is what we call an **address**, **location**, or **pointer**.
3.  **The Name on the Reservation (Variable):** Since it is hard to memorize "Room 0xFF32", we give it a name, such as `age`.

</details>

---

<details>
<summary><b>📜 Variable Naming Rules (Section 3.1.1)</b></summary>
<br>

---

[Section 3.1.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1)-VARIABLES/(SECTION-3-1-1)-VARIABLE-NAMES)

---

#### Variable Names

#### ✅ What is allowed:
- Letters (A-Z, a-z), Numbers (0-9), and Underscore (`_`).

#### ❌ What is forbidden or restricted:
- **Starting with a number:** E.g., `1vitor` (Error!).
- **System Reserved:** Avoid starting with `__` or `_` followed by an uppercase letter (e.g., `_V`).

#### 💡 Tip:
C is **Case Sensitive**, meaning `vitor`, `Vitor`, and `VITOR` would be three different variables at different memory addresses.

</details>

---

<details>
<summary><b>🧬 Variable Types (Section 3.1.2)</b></summary>
<br>

---

[Section 3.1.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1)-VARIABLES/(SECTION-3-1-2)-VARIABLE-TYPES)

---

#### 📦 Basic Types:
- `int`: Integer numbers (e.g., 2, -10).
- `float`: Real numbers with decimals (e.g., 3.14).
- `char`: A single character (e.g., 'A').
- `char *`: A string/text (e.g., "Hello").

#### ⚠️ The Danger of "Memory Garbage":
- Variables declared but not initialized (e.g., `int i;`) hold **indeterminate** values.
- **Always** initialize your variables to avoid undefined behavior.

##### 🖨️ Formatted Output:
To print variables, we use `printf` with format specifiers:
- `%d` -> integers
- `%f` -> floats
- `%s` -> strings
- `%c` -> char

> **💡 Practical Discovery (Truncation):**
> If you try to store a decimal number (e.g., 3.99) in an `int` variable, C will **truncate** the value, resulting in just `3`. It does not round; it simply discards the fractional part to fit the integer type.

</details>

---

<details>
<summary><b>🔘 Boolean Types (Section 3.1.3)</b></summary>
<br>

---

[Section 3.1.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1)-VARIABLES/(SECTION-3-1-3)-BOOLEAN-TYPES)

---

#### 🧠 The Concept of Truth in C:
- **False:** Represented by the number `0`.
- **True:** Any number other than zero (`1`, `-5`, `100`).

#### 🆕 In C23:
- We now have the `bool` type and the keywords `true` and `false` natively.
- The numerical value of `true` is `1`.

#### ⚠️ Comparison Caution:
Even though `12` is considered "true" in a conditional, the expression `(12 == true)` will return **False (0)**, because C compares the numerical values (`12` vs `1`).

```c
bool rich = true;
if (rich) {
    printf("This will show up!\n");
}
```

</details>

</details>

---

<details>
<summary><b>🧠 Operators and Expressions (Section 3.2.0 - Section 3.2.7)</b></summary>
<br>

---

[Section 3.2.0 - 3.2.7 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS)

---

<details>
<summary><b>🔢 Arithmetic Operators (Section 3.2.1)</b></summary>
<br>

---

[Section 3.2.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-1)-ARITHMETIC-OPERATORS)

---

#### 🔢 Common Operations:
- `+`, `-`, `*`, `/`: Basic operations.
- `%`: Modulo (Remainder of division).

#### ⚡ Shorthands:
- `i += 5` is the same as `i = i + 5`.

#### 🚫 What NOT to do:
- **Power:** Do not use `^`. Use `pow(base, exponent)` from the `<math.h>` library.

> **Pro Tip:** Watch out for integer division! If you do `int x = 5 / 2;`, the result will be `2` (C truncates the .5 because the variable is an int).
</details>

---

<details>
<summary><b>↔️ Ternary Operator (Section 3.2.2)</b></summary>
<br>

---

[Section 3.2.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-2)-TERNARY-OPERATOR)

---

#### 💡 The "one-line if":
- **Syntax:** `condition ? true : false;`
- **Example:** `y += (x > 10) ? 17 : 37;`
    - If `x` is greater than 10, it adds 17. Otherwise, it adds 37.

#### 🚀 Advantage:
- It can be used inside other functions (like `printf`) to decide which value to pass on the fly.

```c
// Example code:
int x = 7;
char *result = (x % 2 == 0) ? "even" : "odd";
printf("The number %d is %s\n", x, result);
```
</details>

---

<details>
<summary><b>🆙 Increment and Decrement (Section 3.2.3)</b></summary>
<br>

---

[Section 3.2.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-3)-INCREMENT-AND-DECREMENT)

---

#### 🆙 Step Operators:
- `i++` (Post): Uses the current value in the expression and **then** increments.
- `++i` (Pre): Increments first and **then** uses the new value in the expression.
- The same applies to decrement (`i--` and `--i`).

#### 🧪 Comparative Example:
```c
int i = 10;
printf("%d", i++); // Will print 10 (and i becomes 11 afterwards)
printf("%d", ++i); // Will print 12 (i was already 11, becomes 12 and prints)
```

### 🛠️ Practical Challenge in CLion:

Try to predict what this code will print before running it:

```c
int a = 5;
int b = 5;
printf("A: %d\n", a++ + a++);
printf("B: %d\n", ++b + ++b);
```

</details>

---

<details>
<summary><b>➡️ Comma Operator (Section 3.2.4)</b></summary>
<br>

---

[Section 3.2.4 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-4)-COMMA-OPERATOR)

---

#### 1. ➡️ Left-to-Right Sequence:
- Allows grouping multiple expressions into a single line.
- The resulting value of the expression is always the value of the **last** one (the rightmost).

```c
int x;
x = (10, 20, 30); 
// C processes 10, then 20, and finally 30.
// The final result assigned to 'x' is 30.
```

#### 2. Practical Use: Loops (for) 🚀
   This operator is frequently used in for loops to initialize or increment multiple variables simultaneously within the same instruction block.

Double Counting Example:

```c
// 'i' goes up from 0 to 10 and 'j' goes down from 10 to 0 at the same time
for (int i = 0, j = 10; i <= 10; i++, j--) {
printf("i: %d | j: %d\n", i, j);
}
```

</details>

---

<details>
<summary><b>⚖️ Conditional Operators (Section 3.2.5)</b></summary>
<br>

---

[Section 3.2.5 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-5)-CONDITIONAL-OPERATORS)

---

These operators compare two values and return a boolean result (true or false).

#### 🔍 List of Operators:
* `a == b`: True if **a** is equal to **b**.
* `a != b`: True if **a** is not equal to **b**.
* `a < b`: True if **a** is less than **b**.
* `a > b`: True if **a** is greater than **b**.
* `a <= b`: True if **a** is less than or equal to **b**.
* `a >= b`: True if **a** is greater than or equal to **b**.

#### ⚠️ The Most Common Error in C:
Never confuse **Assignment** (`=`) with **Comparison** (`==`):
- `x = 10`: You are **storing** the number 10 inside x.
- `x == 10`: You are **asking** if x is equal to 10.

#### 🛠️ Usage Example:
```c
if (a <= 10) {
    printf("Success! The value is within the limit.\n");
}
```

</details>

---

<details>
<summary><b>🧠 Logical Operators (Section 3.2.6)</b></summary>
<br>

---

[Section 3.2.6 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-6)-LOGICAL-OPERATORS)

---

These operators are used to combine or invert conditional expressions.

|  Operator  | Meaning | Description |
|:----------:| :---: | :--- |
|    `&&`    | **AND** | True if **all** conditions are true. |
| `\|    \|` | **OR** | True if **at least one** condition is true. |
|    `!`     | **NOT** | Inverts the value: turns true into false and vice versa. |

#### 🛠️ Usage Examples:

**1. Using "AND" (&&):**

```c
// Only enters the if block if BOTH conditions are true
if (x < 10 && y > 20) {
    printf("Condition accepted!\n");
}
```

**2. Using "OR" (||):**
   Only one of the conditions needs to be true for the code to enter the if.

```c
// Enters the if block if x is less than 10 OR if y is greater than 20
if (x < 10 || y > 20) {
    printf("At least one of the conditions is true!\n");
}
```

**3. Using "NOT" (!): The ! operator has high precedence, which is why we usually use parentheses.**

```c
if (!(x < 12)) {
    // This is the same as saying: "If x is NOT less than 12" (meaning x >= 12)
    printf("x is greater than or equal to 12\n");
}
```

#### 💡 Mental Test:
Given the code: `if (5 > 2 || 2 > 10)`, will the program enter the `if` block?

**Answer:** **Yes!** With the `||` (OR) operator, the result is true if **at least one** part is true (and since 5 is greater than 2, the condition is satisfied).

> **Pro Tip**: In C, the && and || operators are "short-circuit" operators. In an && operation, if the first condition is false, C doesn't even check the second one, because it knows the final result will be false anyway. ⚡

</details>

---

<details>
<summary><b>📏 The `sizeof` Operator: Measuring Memory (Section 3.2.7)</b></summary>
<br>

---

[Section 3.2.7 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2)-OPERATORS-AND-EXPRESSIONS/(SECTION-3-2-7)-SIZEOF-OPERATOR-(Measuring-Memory))

---

`sizeof` is the tool we use so we don't have to guess the size of things. Since C runs on everything (from smartwatches to supercomputers), the size of an `int` can change. `sizeof` ensures your code adapts.

#### 🗝️ What you need to know:
* **Unit of Measurement:** It always returns the value in **Bytes**.
* **The Result's "ID":** The value it returns is not a standard `int`, but a `size_t`.
* **In `printf`:** To display this value, we use the `%zu` specifier.
* **Moment of Discovery:** C resolves `sizeof` during **compilation**. This means the program is "born" already knowing these sizes.

#### 🧪 Practical Examples:

```c
float grade = 9.5;
char letter = 'V';

// 1. Measuring a variable directly
printf("The variable 'grade' occupies %zu bytes\n", sizeof grade);

// 2. Measuring a type (parentheses are mandatory here!)
printf("An 'int' occupies %zu bytes on this machine\n", sizeof(int));

// 3. Measuring expressions
// C checks the result of the calculation (1 + 1.0 = 2.0), which is a 'double'
printf("The calculation result occupies %zu bytes\n", sizeof(1 + 1.0));
```

#### 🎓 Why learn this now?
Imagine you are going to buy a box to store 10 oranges. You need to know the size of an orange so the box isn't too small, right? In C, when we create lists (arrays) or reserve memory manually (dynamic allocation), `sizeof` is what tells us the exact size of the "box" the computer needs to prepare.

</details>

</details>


---

<details>
<summary><b>⚖️ Control Flow (Section 3.3.0 - Section 3.3.5)</b></summary>
<br>

---

[Section 3.2.7 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW)

---

<details>
 <summary><b>🚦 Introduction - Control Flow (Section 3.3.0) </b></summary>
<br>

---

[Section 3.3.0 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-0)-CONTROL-FLOW)

---

Flow control allows the program to decide which parts of the code to execute based on specific conditions.

### 🧱 Blocks vs. Single Statements
In C, after a control command (such as `if`, `while`, or `for`), you can execute **a single line** or an **entire block**.

#### 1. Single Statement
If you don't use braces, only the **first line** after the command will be controlled by it.

```c
if (x == 10) 
    printf("x is 10\n"); // Only this line depends on the if
```

#### 2. Code Blocks (Braces { })
To execute multiple actions based on a single condition, **we use "curly braces"** to create a block.

```c
if (x == 10) {
printf("x is 10\n");
printf("This also only happens if x is 10\n");
}
```

#### ⚠️ The "Visual Trap" Danger
Be careful! Unlike Python, C ignores indentation and whitespace. What defines what belongs to the if are the braces, not the spaces you leave.
Common Error Example:

```c
if (x == 10)
    printf("This depends on x\n");
    printf("This ALWAYS happens!\n"); // Warning: This line is NOT inside the if!
```

#### 💡 Tip:
Follow the "Veteran's Best Practice": Always use braces { }, even for a single line. This prevents silly mistakes in the future and makes your code much easier to read.

</details>

---

<details>
<summary><b> 🔀 The `if-else` Structure (Section 3.3.1)</b></summary>
<br>

---

[Section 3.3.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-1)-STRUCTURE-(if-else))

---

The `if` statement tests a condition. If it's true, the `if` block runs. If it's false, C skips to the next command — unless you provide an `else`.

#### 1. Plan B: `else`
The `else` keyword is used to execute code specifically when the `if` condition **fails**.

```c
int i = 99;

if (i == 10) {
    printf("i is 10!\n");
} else {
    printf("i is not 10. That irritates me a bit...\n");
}
```

#### 2. The if-else (The Fork in the Road)
Here you ensure that one of the two paths will be taken. It is impossible for C to execute both the if and the else at the same time, or to execute neither.

```c
#include <stdio.h>

int main() {
int i = 99;

    if (i == 10) {
        printf("i is 10!\n");
    } else {
        printf("i is decidedly NOT 10.\n");
        printf("That irritates me a bit, frankly.\n");
    }

    return 0;
}
```

#### 3. Cascading: else if
When you have multiple options and want to test them one by one until you find the true one, you "stack" the else if statements.

```c
int i = 99;

if (i == 10) {
    printf("i is 10!\n");
} else if (i == 20) {
    printf("i is 20!\n");
} else if (i == 99) {
    printf("i is 99! My favorite!\n");
} else {
    printf("i is a number I've never heard of.\n");
}
```

</details>

---

<details>
<summary><b>🔄 The `while` Loop: Repetition with Condition (Section 3.3.2)</b></summary>

---

[Section 3.3.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-2)-WHILE-(LOOP))

---

The `while` loop executes a block of code repeatedly **as long as** a specific condition remains true.

#### ⚙️ How the Cycle Works:
1.  **Test:** C checks the condition inside the parentheses.
2.  **Execution:** If the condition is true, it runs the code block `{ }`.
3.  **Repeat:** It goes back to step 1 and checks the condition again.

#### 🛠️ Practical Example (Counter):
```c
int i = 0;

while (i < 10) {
    printf("i is now %d!\n", i);
    i++; // Important: Increment so that the condition eventually becomes false!
}

printf("Loop finished!\n");
```

</details>

---

<details>
<summary><b>🔃 Flow Control: The `do-while` Loop (Section 3.3.3)</b></summary>
<br>

---

[Section 3.3.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-3)-DO-WHILE-(CONTROL-FLOW))

---

The `do-while` is a repetition structure with a **post-test condition**. It is essential when the program logic requires the loop body to be processed at least once before the first validation occurs.

#### 🏗️ Architecture and Execution Flow
Unlike the standard `while` loop, which may execute **zero** times, the `do-while` guarantees **at least one execution** (guaranteed initial pass).

1.  **Entry:** The flow enters the `{ }` block directly without checking conditions.
2.  **Processing:** All instructions inside the curly braces are executed.
3.  **Evaluation:** Only then does the compiler evaluate the boolean expression in `while(condition);`.
4.  **Branching:** If `true`, the flow returns to `do`. If `false`, the loop terminates.

#### 💻 Technical Comparison: `while` vs `do-while`

```c
int i = 10;

// Scenario A: 'while' checks first. Since 10 is not < 10, nothing happens.
while (i < 10) {
    printf("This will never be printed.\n");
    i++;
}

// Scenario B: 'do-while' executes first. It prints "10", increments to 11, and only then stops.
do {
    printf("do-while executed with i = %d\n", i);
    i++;
} while (i < 10); // <--- ATTENTION: The semicolon here is mandatory!
```

#### 🎲 Advanced Application: Pseudo-random Numbers
A classic use case is repeating a task until a specific random value is generated.

```c
#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required to use time as a seed

int main(void) {
    int r;
    do {
        r = rand() % 100; // Generates a number between 0 and 99
        printf("Attempt: %d\n", r);
    } while (r != 37);    // Repeats the draw until the number is exactly 37
    
    return 0;
}
```

#### 🔍 The Determinism Problem (rand vs srand)
rand(): Generates "pseudo-random" numbers. Without a different seed, it will produce the same sequence every time the program starts.

srand(): Used to "seed" the generator. We typically use srand(time(NULL)) so that each execution uses the current time as a base, ensuring different sequences.

#### 🎓 Note:
The do-while loop is ideal for data input validation. For example: "Ask the user for a grade -> Check if it's valid -> If not, ask again." You cannot check if the grade is valid before asking the user to type it!

</details>

---

<details>
<summary><b>⚙️ The `for` Loop: The King of Repetitions (Section 3.3.4)</b></summary>
<br>

---

[Section 3.3.4 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-4)-FOR-(LOOP))

---

The `for` loop is the ideal choice when you know **in advance** how many times you want to repeat a block of code. Although it can be written as a `while` loop, the `for` structure organizes initialization, condition, and update in a single line, improving readability and preventing logic errors.

#### 🧬 Loop Anatomy
The `for` statement is divided into three sections separated by semicolons (`;`):

`for (initialization; condition; update)`

1.  **Initialization:** Executed only **once**, before the loop begins. Usually used to set the starting value of the counter.
2.  **Condition:** Checked **before** each iteration. If it evaluates to false at the start, the loop won't run at all.
3.  **Update:** Executed at the **end** of each block, just before testing the condition again. Typically used to increment (`i++`) or decrement (`i--`) the counter.

#### 🛠️ Technical Comparison: `while` vs `for`
Both code snippets below produce the exact same result (printing from 0 to 9), but the `for` version is much more compact:

```c
// While version
i = 0;
while (i < 10) {
    printf("i is %d\n", i);
    i++;
}

// For version (Much cleaner!)
for (i = 0; i < 10; i++) {
    printf("i is %d\n", i);
}
```

#### 🚀 Advanced Features
The Comma Operator (Multiple Actions):
You can initialize and update multiple variables simultaneously within the same for loop.

```c
for (i = 0, j = 999; i < 10; i++, j--) {
    printf("i: %d, j: %d\n", i, j);
}
```

The "Eternal" Infinite Loop:
Unlike while(1), in a for loop, you can simply omit all three parts. If no condition is provided, C assumes it is always true.

```c
for (;;) {
    printf("Running until the end of time...\n");
}
```

Optional Sections:
Any of the three parts can be left empty, as long as the semicolons are kept.

#### 🎓 Note:
The primary advantage of for over while is scope and safety. In a for loop, the control variable (like i) is bound to the loop logic. If you forget i++ at the end of a while loop, you create an infinite loop bug. In a for loop, since the update is part of the command signature, it is much harder to forget to update the counter.

</details>

---

<details>
<summary><b>🚥 The `switch` Statement: Direct Selection (Section 3.3.5)</b></summary>
<br>

---

[Section 3.3.5 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3)-CONTROL-FLOW/(SECTION-3-3-5)-SWITCH-CASE)

---

The `switch` statement allows you to execute different parts of code based on the value of an **integer expression**. Think of it as a control panel where you jump directly to the button (case) that was pressed.

#### 🏗️ Anatomy of the `switch`
Its functionality is based on three key keywords:
1.  **`case`:** Defines the values you want to test.
2.  **`break`:** The "emergency exit." If you omit it, C will continue executing the cases below (the dangerous *fall-through*).
3.  **`default`:** The catch-all. It executes if none of the previous cases are met.

#### 🛠️ Practical Example (Goat Counter)

```c
int goat_count = 2;

switch (goat_count) {
    case 0:
        printf("You have no goats.\n");
        break;
    case 1:
        printf("You have a single goat.\n");
        break;
    case 2:
        printf("You have a pair of goats.\n");
        break;
    default:
        printf("You have a whole herd of goats!\n");
        break;
}
```

⚠️ The "Fall-through" Phenomenon
If you forget the break, C doesn't stop at the end of the case. It keeps "sliding" into the next block of code, even if the value of the next case doesn't match!

```c
switch (x) {
    case 1:
        printf("1\n"); // If x is 1, it prints "1"...
        // Missing break!
    case 2:
        printf("2\n"); // ...and THEN it prints "2" as well!
        break;
}
```

#### 💡 Pro Tip:
If you intentionally want a case to "fall through" into another, always leave a comment: // Fall through!. This prevents other programmers from thinking it was a mistake.

#### 🔍 The Clever Trick: Using char in switch
Beej mentioned that switch only accepts integers. However, since C stores char types as numbers (ASCII codes), you can use letters in your cases!

```c
char choice = 'b';
switch (choice) {
    case 'a':
        printf("Option A\n"); 
        break;
    case 'b':
        printf("Option B\n"); 
        break;
}
```

#### 🎓 Note:
Never try to use decimal numbers (float/double) or strings inside a switch. The compiler will throw an error immediately. The switch statement was designed for discrete, exact values.

</details>

</details>

</details>

---
<details>
  <summary><b>🔹 Day 4: Functions </b></summary>

---

[Day 4 codes can be found here](./CODE_BY_DAY/DAY_004)

---

<details>
<summary><b>🚀 Introduction to Functions (Section 4.0)</b></summary>
<br>

---

[Section 4.0 codes can be found here](./CODE_BY_DAY/DAY_004/(SECTION-4-0)-INTRODUCTION-TO-FUNCTIONS)

---

Functions are the "recipes" or subprograms that make up a C application. They allow you to break a large problem into smaller, organized, and reusable pieces. In C, everything revolves around functions, including the program's entry point: `main`.

---

### 🏗️ 1. Function Anatomy

Unlike dynamic languages, C requires you to be explicit about what goes in and what comes out of a function (static typing).

```c
int add_one (int n) {  // "int" is the return type; "int n" is the parameter
    return n + 1;      // "return" ends the function and hands back the value
}
```
- Return Type: Defines the type of data the function delivers back to the caller. If the function doesn't return anything, we use the void type.
- Parameters: These are special local variables that receive input data. They only exist while the function is being executed.
- Body: The block within curly braces { } where the logic is processed.

### 2. Fundamental Concepts

#### Pass by Value (The Copy Concept) 🛡️

This is a vital C behavior: Arguments are copied into parameters.
When you pass a variable to a function, C creates a "stunt double" (binary copy) of it at a new memory address. Any changes made to the parameter inside the function will not affect the original variable in main or elsewhere.

#### B. Using void 🚫

The keyword void means "empty" or "nothing."
Void Return: The function performs an action (e.g., printing a log or moving a file) but does not produce a numerical or data result to be stored.
Void Parameter: Explicitly indicates that the function accepts no input (e.g., int main(void)).

#### C. Order and Declaration 📋

The C compiler processes files linearly (from top to bottom).
If you call a function in main() that is physically written below it in the file, the compiler will issue an "unknown function" error.
Rule: Either define your functions above main() or declare a function prototype at the top of the file.

### 🎲 3. Practical Example: Direct Execution Function

```c
#include <stdio.h>

// Defined before use (main)
void say_hello(void) {
    printf("Hello, World! This is a void function.\n");
}

int main(void) {
    say_hello(); // Function call
    return 0;    // Success
}
```

#### 🎓 Tips:

- Modularity: A good function should follow the Single Responsibility Principle. If it does too many things, break it down into smaller functions.
- The main Function: This is the "master function." The return 0; at the end tells the Operating System that the program finished without errors.
- Type Contract: If a function is declared as int, the compiler expects a return with an integer value. Ignoring this can cause undefined behavior at the hardware level.

</details>

---

<details>
<summary><b>🛡️ Pass by Value (Section 4.1)</b></summary>
<br>

---

[Section 4.1 codes can be found here](./CODE_BY_DAY/DAY_004/(SECTION-4-1)-PASS-BY-VALUE)

---

In C, the rule is absolute: **Everything you pass to a function is COPIED.** No exceptions.

#### 🧪 The Increment Experiment
Look at this code and try to predict the result:

```c
void increment(int a) {
    a++; // Increments the copy
}

int main(void) {
    int i = 10;
    increment(i);
    printf("i == %d\n", i); // What will be printed?
}
```
Result: i == 10

#### 🧠 What happened inside the memory?

1. In main: There is a "slot" in memory named i with the value 10.

2. The Call: When you call increment(i), C creates a new slot named a (the parameter) and copies the value 10 into it. It's as if it performs a = i.

3. Inside the Function: The function executes a++, so a becomes 11. But the slot i back in main remains untouched!

4. The End: When the function finishes, the slot a is destroyed (discarded). We return to main, and i is still 10.

#### Summary:
- Independence: The parameter is an independent local variable.

- Isolation: Functions in C are isolated. They do not have permission to modify variables from other functions directly.

- Isolation: Functions in C are isolated. They do not have permission to modify variables from other functions directly.

#### 🎓 Tip:

Remember the pirate's line from the text: "Prepare for disappointment." If you expect a function to change your original variable just by passing it as an argument, you'll encounter a bug. C operates on local copies, NO MATTER WHAT.

</details>

---

<details>
 <summary><b>📋 Function Prototypes (Section 4.2)</b></summary>
<br>

---

[Section 4.2 codes can be found here](./CODE_BY_DAY/DAY_004/(SECTION-4-2)-FUNCTION-PROTOTYPES)

---

The C compiler reads code from top to bottom. If you try to call a function before defining it, the compiler won't know the return type or what parameters it accepts.

#### 🕵️ What is a Prototype?
A prototype is simply the function's "signature" (its first line) followed by a semicolon `;`. It serves to tell the compiler: *"Hey, somewhere in this code (or in another file), there is a function with this name and format. You can trust me!"*.

```c
#include <stdio.h>

int foo(void);  // Prototype: Advance notice to the compiler

int main(void) {
    int i = foo(); // Now it works! The compiler already knows the signature.
    printf("%d\n", i);
    return 0;
}

int foo(void) { // Actual function definition
    return 3490;
}
```

#### ⚖️ Why use Prototypes?
- Organization: Allows you to place main() at the top of the file (which is a best practice) and other functions below it.
- Separate Files: Enables calling functions that are located in other .c files.
- Safety: The compiler verifies if you are passing the correct arguments even before reaching the function's definition.

#### 🚔 Why does printf work without a prototype?
- Actually, it does have a prototype! When you write #include <stdio.h>, you are literally pasting hundreds of function prototypes for input and output (like printf and scanf) at the very top of your code.

#### 🎓 Note:
In the old days (C89 standard), you could call functions without warning, and C would try to "guess" what they did (known as implicit declaration). Today, this is either forbidden or triggers serious warnings. Always use prototypes to keep your code legitimate and professional!

#### 🧭 Guidance:
Think of prototypes as **a book's Table of Contents**. You read the table of contents to know which chapters exist before reading the actual content. In C, prototypes at the top of the file provide an overview of everything the program is capable of doing.

**Technical Tip: In a prototype**, you don't even need to include the variable names, only the types.
Example: `int sum(int, int)`; is a valid prototype for `int sum(int a, int b)`. However, including the names helps document what each number actually represents!

</details>

--- 

<details>
<summary><b>🚫 Empty Parameter Lists: The Danger of `()` vs `(void)` (Section 4.3)</b></summary>
<br>

---

[Section 4.3 codes can be found here](./CODE_BY_DAY/DAY_004/(SECTION-4-3)-EMPTY-PARAMETER-LISTS)

---

While it might look like just a shortcut or "laziness," there is a critical technical difference between leaving parentheses empty and using the `void` keyword.

#### 🧪 The Difference in the Prototype
This is where the confusion happens. In C, the two declarations below are **NOT** the same:

```c
void foo();       // ⚠️ "I have no information about the parameters"
void foo(void);   // ✅ "I guarantee this function accepts NO parameters"
```

- 1 - void foo(); (The Old Way): Tells the compiler to "turn off" type checking for parameters. It doesn't know if the function takes 0, 1, or 10 arguments. If you pass something by mistake, the compiler might remain silent, and the program could crash later.

- 2 - void foo(void); (The Correct Way): Explicitly informs the compiler that the function is empty. If you try to pass any argument, the compiler will alert you immediately with an error.

#### 🏗️ In the Function Definition
When you are writing the function body, the behavior of void foo() is treated by the modern standard (C11 and later) as if it were void foo(void).

However, for the sake of consistency and clarity, you should always use void.

#### 🎓 Note:
The golden rule is simple: Always use void. There is no legitimate reason in modern C to leave parentheses empty in a prototype. Doing this helps the compiler act as your "bodyguard," preventing you from passing data where it doesn't belong.

</details>
</details>

---

<details>
  <summary><b>🔹 Day 5: Pointers </b></summary>

---

[Day 5 codes can be found here](./CODE_BY_DAY/DAY_005)

---

<details>
<summary><b>📍 Pointers in C - Introduction (Section 5.0)</b></summary>
<br>

---

[Section 5.0 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-0)-POINTERS-IN-C-INTRODUCTION)

---

Pointers are possibly the most feared topic in the C language. However, they are simply a more **explicit** way of dealing with what other languages (such as Java, Python, or JavaScript) call **references**.

#### 🧠 The Fundamental Concept
Imagine you have a variable. It lives at a specific address in your computer's memory.
* **The Variable:** It is the "house" and what is inside it.
* **The Pointer:** It is a piece of paper with the "address" written on it. It points to where the house is located.

#### ⚖️ Reference vs. Object
In C, we need to be very clear about what we are manipulating:
1.  **The Reference (Pointer):** The memory address where a piece of data resides.
2.  **The Value:** The actual data stored at that address.

Unlike high-level languages, C does not hide this from you. You have full control (and full responsibility) over these addresses.

> **⚠️ Note:** The fear of pointers comes from the possibility of accessing memory addresses that do not belong to your program. It is like trying to open a stranger's door with your key: the Operating System will intervene and shut down your program (the famous *Segmentation Fault*).

#### 🚀 Why use Pointers?
Since C makes a copy of everything (Pass-by-Value), as we saw in the functions section, pointers are the only way to:
* Modify original variables inside a function.
* Handle large volumes of data without wasting memory on unnecessary copies.
* Create complex data structures (linked lists, trees, etc.).

#### 🎓 Tip:
The golden rule for this chapter is: Visualize the memory. Whenever you get confused, draw a small box (the variable) and an arrow (the pointer) pointing to it.

</details>

---

<details>
<summary><b>🏡 Memory and Variables: Where things live (Section 5.1)</b></summary>
<br>

---

[Section 5.1 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-1)-MEMORY-AND-VARIABLES)

---

Before understanding what a pointer is, you need to understand how the computer stores your data.

#### 📦 Memory as a Giant Array
Imagine your computer's RAM as a gigantic sequence of numbered "small boxes."
* Each box stores **1 Byte** (8 bits).
* The number of each box is its **Address**.
* Addresses are sequential (0, 1, 2, 3...).

#### 📏 Size Matters (`sizeof`)
Not all data fits in a single box (1 byte). An `int` or a `float`, for example, usually occupies **4 bytes** (4 neighboring boxes).
* You can use the `sizeof` operator to find out how many bytes a type occupies in your system:
```c
printf("An int uses %zu bytes\n", sizeof(int)); // Usually prints 4
```

#### 📍 What is a Pointer?
- A Pointer is simply a variable that stores a Memory Address.
- Common Variable: Stores a value (e.g., `int i = 10;`).
Pointer: Stores the "box number" where that value is located (e.g., "the value 10 is in box no. 140,727...").

#### 🏠 The House Analogy
- The House: Is the variable (it has color, size, furniture).
- The House Address: Is the pointer (it's just a piece of paper saying "X Street, no. 100").
The address is not the house, but it tells you exactly where to find it.

#### 🔍 The "Address-of" Operator (&)
How do we find the address of a variable in C? We use the ampersand character: &.
```c
int i = 10;
printf("The value of i is %d\n", i);
printf("The address of i is %p\n", (void *)&i);
```

📝 Technical Details:
- `%p`: This is the format specifier for printing pointers (addresses).
- **Hexadecimal:** The address usually appears as something like `0x7ffddf7072a4`. It is just a base-16 number representing the memory index.
- **Cast (`void *)`:** We use this in `printf` to avoid compiler warnings, ensuring the address is treated generically.

#### 🎓 Note:
Don't be intimidated by the size of the address numbers (e.g., trillions). Your computer uses **"Virtual Memory"**, making the program believe it has an immense memory space all to itself. The exact value of the number doesn't matter to us; what matters is that this number is the "key" to finding the original data.

🔑 Key Point:
The key point here is the following:

1. i is the **content** of the box.

2. &i is the **number** written on the lid of the box.

</details>

---

<details>
<summary><b>🧭 Pointer Types (Section 5.2)</b></summary>
<br>

---

[Section 5.2 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-2)-POINTER-TYPES)

---

So far, we have seen how to "view" a variable's address. Now, we are going to learn how to **store** that address in a special variable: the **Pointer**.

#### ✍️ How to Declare a Pointer
To tell C that a variable is a pointer, we use the asterisk (`*`) between the type and the variable name.

```c
int i;    // A regular variable that stores an integer.
int *p;   // A variable that stores the ADDRESS of an integer.
```
- Reading: We read `int *p` as "p is a pointer to int" or "p is an int-pointer."

#### 🤝 The Compatibility Rule
A pointer is picky: if you declared a pointer to `int`, it **must only store** addresses of `int` type variables. If you try to store a float's address in an `int *`, the compiler will complain (and rightly so!).

#### 🔗 Making the Connection (Pointing)
To make a pointer "point" to a variable, we use the address-of operator (`&`) that we learned earlier:
```c
int i = 10;
int *p;    // Initially, 'p' contains memory junk (points to nowhere).

p = &i;    // Now 'p' receives the address of 'i'. We say that "p points to i."
```

🔄 What is happening in memory?
1. `i` has a **value** (e.g., 10).

2. `i` has an **address** (e.g., `0x7FF...`).

3. `p` has its own address, but its content is the address of `i`.

##### 🎓 Note:
Think of `int *p` as a "remote control." The remote is not the TV, but it knows exactly where the TV is and how to interact with it. In this step, we are just storing the address in the remote. In the next step, we will learn how to press the buttons!

##### 📝 Guidance:
A very common beginner mistake is trying to do this: `p = i;` (without the `&`).

- `p = i;` attempts to say that the memory address is the number 10. The computer will try to access "drawer #10" in memory, which likely belongs to the Operating System, and... **BOOM**! Your program crashes.

**Always use `&` to assign an address to a pointer.**

</details>

---

<details>
<summary><b>🔓 Dereferencing (Section 5.3)</b></summary>
<br>

---

[Section 5.3 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-3)-DEREFERENCING)

---

If a pointer is a piece of paper with an address, **dereferencing** is the act of going to that address and interacting with what is inside.

#### 🪄 The Indirection Operator (`*`)
Yes, C uses the asterisk again. But the meaning changes depending on the context:
1.  **In Declaration (`int *p;`):** It says that `p` is a pointer.
2.  **In Usage (`*p = 20;`):** It says "access the value that `p` is pointing to."

#### 🛠️ Practical Example: The "Alias"
When you dereference a pointer, you create a sort of "alias" for the original variable. Anything you do with `*p` will happen to `i`.

```c
int i = 10;
int *p = &i;  // p points to i

*p = 20;      // "Go to the address in p and change the value to 20"

printf("%d", i);  // It will print 20!
```

#### 🏠 The House Analogy (Revisited)
- `p`: It's the paper with the address "123 Flower St."

- `*p`: It's you entering the house at "123 Flower St." and changing the furniture.

#### ⚖️ Symbol Summary (Don't mix them up!)

| Symbol | Name | What does it do? | Example |
| :---: | :--- | :--- | :--- |
| **`&`** | **Address-of** | Extracts the address where the variable lives. | `p = &i;` |
| **`*`** | **Dereference** | Accesses/Modifies the value inside the address. | `*p = 20;` |

#### 🎓 Note:
Think of dereferencing as "opening the box." If you have `p`, you have the closed box with an address on it. If you use `*p`, you have opened the box and are messing with the contents.

#### 📝 Guidance:
- You might be wondering: "But why would I change the value of `i` using `*p = 20` if I can just do `i = 20`?"

The short answer is: **Scope**. Remember how functions only receive copies of variables and cannot change the original? With pointers, you pass the **address** (`&i`) and the function uses dereferencing (`*p`) to change the original value back in your `main`.

</details>

---

<details>
<summary><b>🚀 Passing Pointers as Arguments (Section 5.4)</b></summary>
<br>

---

[Section 5.4 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-4)-PASSING-POINTERS-AS-ARGUMENTS)

---

Why use pointers if we can use the variable directly? The answer is: **Scope and Modification**.

#### 🔌 The Copy Problem
We saw on Day 4 that functions receive copies and cannot change the original variable from `main`. Pointers solve this!

1. You pass the **address** of the variable to the function.
2. The function receives a **copy of the address** (a pointer).
3. The function **dereferences** that pointer to reach the original variable and modify it.

#### 🛠️ Example: The Real Increment
This time, the `increment` function actually works:

```c
#include <stdio.h>

void increment(int *p) {  // Receives a pointer to int
    *p = *p + 1;         // Adds 1 to what p points to (the original variable!)
}

int main(void) {
    int i = 10;
    increment(&i);       // We pass the ADDRESS of i
    
    printf("i == %d\n", i); // Now prints 11!
    return 0;
}
```

#### 💡 Key Points:
- **Multiple Returns:** Since you can pass several pointers to a function, it can "return" multiple data points by modifying the original variables, overcoming the single-return limitation.

- **Efficiency:** Instead of copying a massive data structure, you copy only its address (a few bytes).

- **Golden Rule:** If you want a function to modify something from the outside so that you see the result later, you must pass a pointer to that something.

#### 🎓 Note:
Notice the call `increment(&i)`. The `&` is what transforms your `int` into an `int*` (pointer) so that the function accepts it. It's like giving the key to your house to the function so it can work on it while you wait.

#### 📝 Guidance:
- This is the foundation of how C "really" works. When you use the function `scanf("%d", &age)`, now you understand why that `&` is there! `scanf` needs the **address** of your `age` variable to be able to write the number you typed directly into it.

</details>

---

<details>
<summary><b>🚫 The `NULL` Pointer (Section 5.5)</b></summary>
<br>

---

[Section 5.5 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-5)-NULL-POINTER)

---

Any pointer variable, regardless of its type, can receive a special value called `NULL`. This explicitly indicates that the pointer **points to nowhere**.

```c
int *p = NULL; // p is now a null pointer
```

#### ⚠️ The Danger of Dereferencing:
Since a `NULL` pointer does not point to a valid address, attempting to access its value (dereferencing) will result in an error.


```c
int *p = NULL;
*p = 12;  // 💥 CRASH! Undefined behavior (Segmentation Fault)
```

#### 🛡️ Why use `NULL`?
Although called "the billion-dollar mistake" by its creator, `NULL` is extremely useful as:

- **Sentinel Value:** To indicate that a search failed or that there is no more data.

- **Initialization Indicator:** To ensure a pointer doesn't point to "memory junk" (dangerous random addresses) before it is used.

#### 🎓 Note:
Whenever you declare a pointer and don't have an address for it right away, assign `NULL`. It is much easier for your program to handle a null pointer error than a pointer that points to a random location and silently corrupts your data!

#### 📝 Guidance:
Imagine NULL as the "Vacant" sign on a taxi. It tells you the taxi is available, but you can't get in if it's not actually there.

**Technical tip:** In C, `NULL` is often defined as the value `0`. Because of this, you will see many programmers testing if a pointer is valid with a simple `if (p)`. If `p` is `NULL` (zero), the `if` fails!

</details>

---

<details>
<summary><b>✍️ Note on Pointer Declaration (Section 5.6)</b></summary>
<br>

---

[Section 5.6 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-6)-POINTER-DECLARATION)

---

Declaration syntax in C can be tricky when trying to place multiple variables on a single line.

#### ⚠️ The Asterisk belongs to the Variable, not the Type
A common mistake is thinking that the `*` is part of the type (like `int*`). In C, the asterisk "sticks" to the variable name that follows.

Observe the examples below:

* **Correct (Mixing types):**
  ```c
  int a, *p; // 'a' is a regular integer; 'p' is a pointer to int.
  ```
  
* **The Single-Line Danger:**
  ```c
  int *p, q; // 'p' is a pointer; 'q' is JUST a regular integer!
  ```  
  - Even if you write `int* p, q;` (with the asterisk next to the type), for the compiler the result is the same: **only p is a pointer.**

#### 🧩 The Big Test
Can you identify which is which in this line?

```c
int *a, b, c, *d, e, *f, g, h, *i;
```

**Answer:**

**Pointers:** `a`, `d`, `f`, `i`.

**Regular Integers:** `b`, `c`, `e`, `g`, `h`.


#### 💡 Golden Tip:
To avoid this "visual bug," many programmers prefer to write the asterisk attached to the variable name (`int *p;`) instead of attached to the type (`int* p;`). This makes it clear that the pointer is the variable, and not the integer type itself on that line.

**Professional Example:**
```c
int *p;  // Pointer to the counter
int *q;  // Pointer to the result
int i;   // Auxiliary integer variable
```
- This pattern prevents you from accidentally forgetting an asterisk and makes your code much easier to review.

</details>

---

<details>
<summary><b>📏 sizeof and Pointers (Section 5.7)</b></summary>
<br>

---

[Section 5.7 codes can be found here](./CODE_BY_DAY/DAY_005/(SECTION-5-7)-SIZEOF-AND-POINTERS)

---

The `sizeof` operator returns the size in bytes based on the **type** of the expression. When dealing with pointers, we must be careful about what we are measuring:

1.  **`sizeof(int *)`**: Returns the size of the pointer (the address). In 64-bit systems, this is usually **8 bytes**.
2.  **`sizeof(*p)`**: Returns the size of the **value the pointer points to**. If it is a pointer to `int`, it will return the size of an `int` (usually **4 bytes**).

#### 🔬 Practical Example:
```c
int *p;

printf("%zu\n", sizeof(int));  // Prints the size of an int (e.g., 4)
printf("%zu\n", sizeof p);     // Prints the size of the POINTER (e.g., 8)
printf("%zu\n", sizeof *p);    // Prints the size of what p POINTS TO (e.g., 4)
```

#### ⚠️ Remember:
`sizeof` is resolved at compile time. It only looks at the type. If `p` is an `int*`, then `*p` is an `int`, and it is the size of the `int` that it will return.

#### 📝 Guidance:
- This distinction is vital for when we start allocating memory dynamically. If you request space for `sizeof p` (8 bytes) thinking you are requesting space for an `int` (4 bytes), you will waste memory. If you do the opposite, your program will crash!

</details>
</details>

---

<details>
  <summary><b>🔹 Day 6: Arrays </b></summary>

---

[Day 6 codes can be found here](./CODE_BY_DAY/DAY_006)

---

<details>
<summary><b>📊 Day 6: Arrays - Data Lists (Section 6.0)</b></summary>
<br>

---

[Section 6.0 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-0)ARRAYS-DATA-LISTS)

---

Arrays in C are collections of elements of the same type stored sequentially in memory. If you have already used `[` and `]` in other languages, the syntax will feel very familiar.

### 🏗️ The Basic Structure
An array allows you to group multiple values (like 10 integers) under a single name, accessing each one through an index.



* **Zero Index:** In C, the first element is always at index `0`.
* **Single Type:** All elements of an array must be of the same type (all `int`, all `float`, etc.).

### 🕵️ The Secret of C
Although they seem like their own structure, Arrays are just **pointers in disguise**.
When you write `my_array[3]`, C is actually performing pointer arithmetic to reach the correct address.

#### 🧠 The Abstraction: What is `array[i]` really?

In C, the bracket syntax `[]` is just **"syntactic sugar"** designed to make our lives easier. Under the hood, the compiler translates it into **Pointer Arithmetic**.

#### 🕵️ The Mathematical Equivalence
When you write `numbers[3]`, C performs the following calculation:

$$*(numbers + 3)$$

> **Technical Note:** The raw code without abstraction is `*(numbers + 3 * sizeof(int))`. However, the C compiler is smart: when you add `3` to an `int` pointer, it **automatically** multiplies it by the `sizeof(int)`.

#### 🛠️ Why does this matter?
This explains why arrays start at **index 0**:
* **`numbers[0]`** is equal to **`*(numbers + 0)`**.
* In other words: "Get the value located exactly at the starting address." There is no displacement (**offset**).

#### 🤯 "Bit-Shifter" Trivia
Since addition is commutative ($a + b = b + a$), in technical C, you could actually write `3[numbers]` and the code would work!
* `3[numbers]` becomes `*(3 + numbers)`, which points to the same address.
* *Warning: Never use this in professional code, but it is a great trick to understand the underlying logic!*

#### 🎓 Note:
An array is just a label for the address of the first element. Everything else is pointer mathematics.

> **💡 Fun Fact:** The debate about starting from 0 or 1 is an old one, but in C, 0 won because it represents the **offset** from the beginning of the array. The first element is 0 positions away from the start.

</details>

---

<details>
<summary><b>📝 Practical Example: Arrays and Loops (Section 6.1)</b></summary>
<br>

---

[Section 6.1 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-1)-PRACTICAL-ARRAY-EXAMPLE)

---

When declaring an array, you need to define a fixed size between the brackets. This size tells C how much memory it should reserve at once.

#### 🛠️ Example Code (Floats and Iteration)

```c
#include <stdio.h>

int main(void) {
    int i;
    float f[4];  // Declares an array of 4 decimal numbers (floats)

    // Assigning values one by one
    f[0] = 3.14159;  // The index starts at 0
    f[1] = 1.41421;
    f[2] = 1.61803;
    f[3] = 2.71828;  // The last index is always (size - 1)

    // Using a loop to print all values
    for (i = 0; i < 4; i++) {
        printf("%f\n", f[i]); // f[i] accesses the element at the current position of i
    }

    return 0;
}
```

#### 🗝️ Key Points:
- **Fixed Size:** Once you have declared `f[4]`, you cannot "expand" it to `f[5]` later. The size is set in stone during compilation.

- **Symmetrical Access:** We use `[]` both to declare the size and to access or modify values later.

- **Standardization:** If you come from languages like Java or JavaScript, this syntax should be almost identical to what you already know.

#### 🎓 Note:
Notice that the loop goes from `0` while `i < 4`. This ensures we visit indices `0, 1, 2, 3`. If we tried to reach index `4`, we would be knocking on the door of memory that doesn't belong to us!

#### 📝 Guidance:
Instead of hardcoding the number `4` directly in the `for` loop, many programmers use a constant or calculate the size to avoid errors if the array size changes in the future.

</details>

---

<details>
<summary><b>📏 6.2 Getting the Array Size (Section 6.2)</b></summary>
<br>

---

[Section 6.2 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-2)-GETTING-ARRAY-SIZE)

---

In C, an array does not store an internal variable with its size. To find out how many elements exist, we use a calculation based on the total space the array occupies in memory.

#### 🧮 The Magic Formula
The idea is to take the total size of the array (in bytes) and divide it by the size of a single element.

```c
int x[12]; 

size_t size = sizeof x / sizeof(int); 
// Example: 48 bytes total / 4 bytes per int = 12 elements!
```

#### ⚠️ The Big Trap: Scope
This trick **ONLY WORKS** in the same place (scope) where the array was declared.

If you pass the array to a function, C transforms it into a simple pointer to the first element.

- The `sizeof` inside the function will return the size of the pointer (usually 8 bytes on 64-bit systems), not the size of the original array!

#### 🚀 Pro Tip: sizeof without declaring
You can find out how much space an array would occupy even before creating it:

```c
sizeof(double [48]); // Returns the bytes needed for 48 doubles
```

#### 🎓 Note:
Since C does not manage the size for you, the common practice is to always pass the array size as a separate argument in your functions. Ex: `my_function(int *array, int size).`

#### 📝 Guidance:
Remember this: **"Arrays decay to pointers in functions"**. This is why `sizeof` fails inside them. If you try to use the formula inside a function, the result will be something crazy (like `2`), and your loop will stop early or cause an error.

</details>

---

<details>
<summary><b>🎨 Array Initializers (Section 6.3)</b></summary>
<br>

---

[Section 6.3 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-3)-ARRAY-INITIALIZERS)

---

In C, you can define array values at the time of declaration using curly braces `{}`.

#### 1. Basic Initialization
If you provide all the values, C places them in order in memory.

```c
int a[5] = {22, 37, 3490, 18, 95}; // Array manually filled
```

#### 2. The Zero Shortcut
If you provide **fewer** items than the array size, C automatically fills the rest with `0`.

- **Zeroing out an entire array:**

```c
int a[100] = {0}; // Sets the first one to 0 and the rest becomes 0 as well
```

#### 3. Designated Initializers
You can choose specific positions using `[index] = value`. C will fill the gaps with zero and continue the sequence from the defined index.

```c
int a[10] = {0, 11, 22, [5]=55, 66, 77};
// Result: 0, 11, 22, 0, 0, 55, 66, 77, 0, 0
```

#### 4. Automatic Sizing
If you omit the number inside the brackets `[]`, the compiler will count the items and set the exact size.

```c
int a[] = {22, 37, 3490}; // The compiler automatically sets the size to 3
```

#### 🧠 The Abstraction: What happens under the hood?

One of the greatest revelations in C is understanding that the bracket syntax `[]` is just a user-friendly way (**syntactic sugar**) to write **Pointer Arithmetic**.

#### 🕵️ The Mathematical Equivalence
When you write `numbers[3]`, the compiler internally translates it to:

$$*(numbers + 3)$$



The compiler is smart: since it knows that `numbers` points to an `int`, it automatically calculates the correct memory offset. It doesn't just add the number 3; it adds `3 * sizeof(int)` bytes from the starting address.

#### ⚠️ Important Warnings
* **Excess elements:** Never put more items in the initializer than the reserved size, or the compiler will throw an *excess elements* error.
* **Memory Junk (Garbage Values):** If you don't initialize a local array (e.g., `int a[5];`), it will contain random values ("garbage") that were in memory beforehand. **Always initialize with `{0}` for safety.**

#### 🎓 Note:
Understanding that `array[i]` is exactly the same as `*(array + i)` is what allows you to master memory manipulation in C. This is why indices start at **0**: the first element is at "zero distance" from the pointer's starting address.

</details>

---

<details>
<summary><b>🚨 Undefined Behavior (Section 6.4)</b></summary>
<br>

---

[Section 6.4 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-4)-UNDEFINED-BEHAVIOR)

---

C **does not stop** you from accessing indices that do not exist in your array. It operates on the principle that you know exactly what you are doing.

#### 💣 The Disaster Example
If you have an array of 5 elements and try to read 10, C will continue reading memory sequentially, treating whatever it finds as if it were part of your array.



```c
#include <stdio.h>

int main(void) {
    int a[5] = {22, 37, 3490, 18, 95};

    for (int i = 0; i < 10; i++) { // ERROR: Reading 5 extra elements!
        printf("%d\n", a[i]);
    }
    return 0;
}
```

#### What actually happens?

- The program might read zeros.
- The program might read garbage numbers (remnants from other programs).
- The program might simply crash (**Segmentation Fault**).



#### 👻 "Undefined Behavior" (UB)
When you go out of bounds of an array, you enter the realm of **Undefined Behavior**. This means the compiler is allowed to do anything. Your code might work today and fail tomorrow, or work on your machine and crash on the server.

#### 🎓 Note:
The golden rule in C is: **Stay within the bounds!** C gives you the power to drive at 200km/h without a seatbelt; the brackets `[]` are not a protective barrier, they are just a map. If you go off-road, it's the driver's fault!

#### 🧑‍💻 Remember:
- In production code, this error can go unnoticed and become a serious **security vulnerability** (this is how many **hackers** exploit systems!).

</details>

---

<details>
<summary><b>🗓️ Multidimensional Arrays (Section 6.5)</b></summary>
<br>

---

[Section 6.5 codes can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-5)-MULTIDIMENSIONAL-ARRAYS)

---

In C, you can add as many dimensions as you want to an array. A 2D array is the most common use case, functioning like a table of rows and columns.

#### 🏗️ Declaration and Memory
Values are stored in memory in **row-major order**. This means the first index indicates the **row** and the second one indicates the **column**.

```c
int a[10];          // 1D: A single row
int b[2][7];       // 2D: 2 rows and 7 columns
int c[4][5][6];    // 3D: Think of it as a block or cube of data
```

#### 🎯 Designated Initializers in 2D:
Just like with simple arrays, you can initialize specific positions. A classic example is the **Identity Matrix**:

```c
// Creates a 3x3 matrix with 1s on the diagonal and 0s elsewhere
int a[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
```

#### 🔄 Iterating Through the Matrix:
To access all elements, we use nested loops (one `for` inside another):

```c
for (int row = 0; row < 2; row++) {
    for (int col = 0; col < 5; col++) {
        printf("(%d,%d) = %d\n", row, col, a[row][col]);
    }
}
```

#### 🎓 Note:
Remember the math we saw before! If `a[5]` is `*(a + 5)`, a 2D array `a[2][5]` involves a slightly more complex calculation for the compiler to find the address: it needs to skip the width of an entire row to reach the next one.

- An important detail: when working with large matrices, the order in which you run the loops (row-first or column-first) can affect your program's speed because of how the processor handles memory (**cache**). In C, **always try to traverse by row first** (the rightmost index changing faster), as this is how the data is laid out side-by-side in physical memory.

</details>

---

<details>
<summary><b>🧩 Arrays and Pointers (Section 6.6 - Section 6.6.4)</b></summary>

---

[Code for Sections 6.6.0 - 6.6.4 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS)

---

<details>
<summary><b>🔗 The Hidden Connection (Section 6.6) </b></summary>
<br>

Up until now, we have treated arrays and pointers as different things, but the truth is: **arrays are pointers in disguise**. Understanding this relationship is the key to manipulating large volumes of data without destroying your program's performance.

#### 🎭 The Great Identity
In C, the name of an array is actually a pointer to its **first element**.
When you use the array name without brackets, you are holding the memory address of where it begins.

#### 📤 Passing Arrays to Functions
When an array is passed to a function, C **does not copy** all the values of the array (this would be slow and consume a lot of memory). Instead, it passes only a pointer.

* **What the function receives:** Only the starting address.
* **What the function doesn't know:** It loses the sense of "size" (`sizeof`). This is why we almost always need to pass the size as a second argument.

> **💡 What's coming up:** We will dive into the actual relationship between them, but the focus now is understanding how functions view this data and why they can modify the original array values.

#### 🎓 Guidance:
This is why if you change a value inside the function, it changes in the original array back in `main`. Since you passed the address (pointer), the function is working with the same memory that the original array occupies. It’s not a copy—it’s the real thing!

</details>

---

<details>
<summary><b>📍 Obtaining a Pointer to an Array (Section 6.6.1) </b></summary>
<br>

---

[Code for Section 6.6.1 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS/(SECTION-6-6-1)-POINTER-TO-AN-ARRAY)

---

In C, there is a fundamental secret: the name of the array is, by itself, a shortcut to the address of its first element.

#### 🕵️ The Shortcut (Shorthand)
Normally, to get the address of the first item, you would write `&a[0]`. But C allows you to use just the name of the array.

```c
int a[5] = {11, 22, 33, 44, 55};
int *p;

p = &a[0];  // Explicit form: p points to the first element
p = a;      // PROFESSIONAL FORM: Exactly the same thing, but cleaner!

printf("%d\n", *p);  // Output: 11
```

#### 🧩 The Direct Connection
Notice that:

- `p` is an `int*`.

- `*p` gives us the value `11`.

- `a[0]` also gives us the value `11`.

This happens because, deep down, the `compiler` treats array access as access via `pointer`.

#### 🎓 Note:
This is the reason why we don't use the `&` operator when reading a string with `scanf("%s", my_string)`. Since the string is an array of chars, its name is already the address that `scanf` needs!

#### 🛠️ Tip:
Memorize this rule: **`a` is equal to `&a[0]`**. You will see this in 99% of professional C code. It is elegant, fast, and avoids the excessive use of symbols.

</details>

---

<details>
<summary><b>📤 Passing One-Dimensional Arrays to Functions (Section 6.6.2)</b></summary>
<br>

---

[Code for Section 6.6.2 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS/(SECTION-6-6-2)-ONE-DIMENSIONAL-ARRAYS-FUNCTIONS)

---

When we pass an array to a function, C offers three ways to write the signature. **Important:** to the compiler, all three are identical and result in a pointer.

#### 🎭 Three Sides of the Same Coin
```c
// 1. As a pointer (The most common and "honest" way)
void times2(int *a, int len);

// 2. Using empty array notation
void times3(int a[], int len);

// 3. Using array notation with size (C ignores the number 5!)
void times4(int a[5], int len);
```

#### 🧐 The Great "Lie" of a[5]:
You might think that `void times4(int a[5], int len)` forces the array to have a size of 5, but it doesn't. The compiler ignores the number inside the brackets in the function signature. It treats it simply as a pointer to the first element.

#### 📏 The Golden Rule: Always pass the `len` (Size)
Since the function receives only a pointer (the starting address), it has no way of knowing where the array ends. Therefore, we almost always pass a separate variable (usually called `len`, `size`, or `qty`) to provide the size information.

#### 🎓 Note:
Preferably use `int *a`. This makes it clear to anyone reading your code that you are dealing with a memory address and that the size needs to be managed manually.

</details>

---

<details>
<summary><b>🔄 Modifying Arrays in Functions (Section 6.6.3)</b></summary>
<br>

---

[Code for Section 6.6.3 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS/(SECTION-6-6-3)-MODIFYING-ARRAYS-IN-FUNCTIONS)

---

Unlike regular variables (such as a simple `int`), when you pass an array to a function, you are passing the "map" to the original data.

#### 🛠️ The Side Effect
If the function modifies the array elements using the received pointer, those changes will be reflected directly in the original array (in `main`, for example). This happens because both the original array name and the function parameter point to the **same place in memory**.



```c
#include <stdio.h>

void double_array(int *a, int len) {
    for (int i = 0; i < len; i++)
        a[i] *= 2; // Modifies the value directly in the original memory!
}

int main(void) {
    int x[5] = {1, 2, 3, 4, 5};
    double_array(x, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", x[i]);  // Output: 2 4 6 8 10!
}
```

#### 🤯 Array Notation on Pointers:
Even if the parameter is a pointer (`int *a`), we use `a[i]` to access the data.

- In C, you can use brackets on pointers and pointer arithmetic on arrays. They are interchangeable in this context!

#### 🎓 Note:
This is excellent for performance, as you don't waste time copying 1 million items into a function. You simply tell the function where the list starts. But be careful: if you don't want the function to modify your array, you should use the `const` keyword (we'll see that later).

#### 🧭 Guidance:
This is the main difference:
1.  Passing an `int x`: C creates a **copy**. The function modifies the copy, and the original remains safe. (**Pass by Value**)
2.  Passing an `int x[]`: C passes the **address**. The function modifies the original. (**Pass by Reference**)
3.  Passing an `int x*`: C also passes the **address**. The function modifies the original. (**Pass by Reference**)

</details>

---

<details>
<summary><b>📐 Passing Matrices to Functions (Section 6.6.4)</b></summary>
<br>

---

[Code for Section 6.6.4 can be found here](./CODE_BY_DAY/DAY_006/(SECTION-6-6)-ARRAYS-AND-POINTERS/(SECTION-6-6-4)-PASSING-MULTIDIMENSIONAL-ARRAYS-TO-FUNCTIONS)

---

When passing multidimensional arrays to functions, the rules change slightly. C requires you to specify **all dimensions except the first one**.

#### 🧩 The Need for Columns
The compiler needs to know the column size to calculate the memory offset. Without knowing where a row ends, it cannot find the beginning of the next one.



```c
#include <stdio.h>

// MANDATORY: Define at least the second dimension [3]
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

#### 🎭 Equivalent Signatures
To the compiler, these two ways of declaring the parameter are identical:

1. `void func(int a[2][3])`

2. `void func(int a[][3])` (The most flexible and common one)

#### 🔍 Why does this happen?
Since computer memory is a straight line, the compiler needs the second dimension to calculate the "jump" required to change rows. Without knowing the number of columns, C doesn't know where one row ends and the other begins.



#### ⚠️ Vital Reminder: No Seatbelts
As always in C, there is no bounds checking at runtime. If you try to access `a[5][10]` in a `3x3` matrix, C will attempt to read that memory, and you will encounter the dreaded Undefined Behavior.

#### 🎓 Note:
Think of the matrix as a building. For C to take you to "apartment 201", it needs to know how many apartments exist per floor. If you don't provide this in the function, it won't know how many "floors" of memory it needs to skip!

</details>

</details>

</details>

---

<details>
  <summary><b>🔹 Day 7: Strings </b></summary>

---

[Day 7 codes can be found here](./CODE_BY_DAY/DAY_007)

---

<details>
<summary><b>🧵 Strings: The Great Lie (Section 7.0)</b></summary>
<br>

---

[Code for Section 7.0 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-0)-STRINGS-THE-GREAT-LIE)

---

If you think Strings in C are a nice, neat data type like in other languages, you're mistaken!
The harsh reality is: **Strings do not exist.** They are just pointers and character arrays pretending to be something more.

#### 🎭 What is happening under the hood?
Remember everything we've seen about arrays and pointers so far?
Well, strings are just a direct application of those concepts.

* **Pointers again:** When you write a text, C hands you the address of the first letter, and that's it.
* **Almost invisible:** In C, strings barely have a "body" of their own; they are just a sequence of `char` in memory.


#### 🎓 Note:
The only thing that separates a jumble of random letters from a "respectable" string that `printf` can read is the **null terminator (`\0`)**. Without this invisible "period," C won't stop reading memory until it hits an error or crashes the program.

</details>

---

<details>
<summary><b>📝 String Literals (Section 7.1)</b></summary>
<br>

---

[Code for Section 7.1 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-1)-STRING-LITERALS)

---

Before you start declaring variables, you need to understand what a **String Literal** is. Basically, it is any sequence of characters enclosed in **double quotes (`"`)**.

> **⚠️ Crucial Difference:**
> * **Single Quotes (`'A'`):** Enclose a single character (they are a completely different beast).
> * **Double Quotes (`"Hello"`):** Enclose a string literal.

#### 🕵️ Literal Examples
| Example | What's going on? |
| :--- | :--- |
| `"Hello, world!\n"` | Has a `\n` at the end for a line break. Very common. |
| `"This is a test"` | A simple string, no frills. |
| `"She said: \"Hi.\""` | Uses the backslash (`\`) to put quotes inside the text. |

#### 🛠️ The Backslash Trick (`\`)
The C compiler needs some help not to get confused. If you want a quote to appear **inside** your text, you need to "escape" it by using a backslash before it.

* **`\"`**: Tells C: "This is just a quote character, not the end of the string!".
* **`\n`**: Tells C: "Break the line and move to the next one here".

Without this escape character (`\`), C would think the string ended at the first quote it encountered, and the rest of your code would throw a massive error.

> **🎓 Memory Insight:**
> Behind each of these literals, C is reserving a contiguous space in memory to store each letter, one next to the other. In the next topics, I will show how we access this using variables.

</details>

---

<details>
<summary><b>📦 String Variables (Section 7.2)</b></summary>
<br>

---

[Code for Section 7.2 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-2)-STRING-VARIABLES)

---

Now that we know how to create the text (the literal), we need a place to store it and use it later. In C, we do this using a **pointer to `char`**.

```c
char *s = "Hello, world!";
```

#### 🕵️ What's happening in memory?
Take a look at the variable type: `char *`. That's right, a pointer.
- The variable `s` does not contain the entire phrase.
- It only stores the `address of the first character`, which in this case is `'H'`.

#### 🖨️ How to print to the screen?
To show the full string in `printf`, we use the format specifier `%s` (s for string).

```c
char *s = "Hello, world!";
printf("%s\n", s);  // Output: Hello, world!
```

The `printf` function is smart: it takes the pointer `s`, goes to the address of 'H', and prints letter by letter until it finds that invisible character (`\0`) that signals the party is over.



> **💡 Developer Insight:**
> Working with `char *` is very efficient because you only move a memory address (usually 8 bytes), regardless of whether your string has 10 or 10,000 letters.

</details>

---

<details>
<summary><b>🔤 String Variables as Arrays (Section 7.3)</b></summary>
<br>

---

[Code for Section 7.3 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-3)-STRING-VARIABLES-AS-ARRAYS)

---

If you don't want to use pointers directly, C gives you another option: declaring the string as a **char array**. In practice, the result looks the same, but the flexibility changes.

```c
char s[14] = "Hello, world!"; 

// Or the "lazy" way (letting the compiler do the counting):
char s[] = "Hello, world!";
```

#### 🔢 Accessing as an Array:
Since the string is now an array, I can use square brackets `[]` to access each individual letter. To print letter by letter, we use the `%c` format specifier (for character).

```c
#include <stdio.h>

int main(void) {
    char s[] = "Hello, world!";
    
    for (int i = 0; i < 13; i++)
        printf("%c", s[i]); // Prints one character at a time
    
    printf("\n");
}
```

#### 🤯 The "Equivalence" Magic:
What’s bizarre (but makes total sense in C) is that if I swap `char s[]` for `char *s`, the code above **still works perfectly**.

```c
char *s = "Hello, world!";
printf("%c", s[i]); // It works! Even though it's a pointer.
```

#### 💡 Developer Insight:
This is further proof that, deep down, **arrays and pointers are the same thing**. The `[]` is just a friendlier way of performing pointer arithmetic.

> **⚠️ Security Spoiler:**
> Although they look the same, there is a huge difference: if you declare it as an array (`char s[]`), you can change the letters. If you declare it as a pointer (`char *s`), C places it in a read-only area of memory. If you try to change a letter via the pointer, the program crashes!

</details>

---

<details>
<summary><b>🏗️ String Initializers (Section 7.4)</b></summary>
<br>

---

[Code for Section 7.4 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-4)-STRING-INITIALIZERS)

---

There are two ways to initialize a string, and they behave completely differently in memory.

#### 1. The Pointer (`char *s`) - "Look, but don't touch"
When you do this, C places the text in a memory area called **Read-Only**.

```c
char *s = "Hello, world!"; 
s[0] = 'z'; // ❌ FATAL ERROR: Tried to change something immutable.
```
- What happens: The compiler manages this memory for you in a "remote location" for safety and performance. If you try to change a letter there, the program will likely crash. This is known as Undefined Behavior.

#### 2. The Array (`char t[]`) - "Your house, your rules"
When you declare it as an array, C doesn't just give you an address in "another city." It creates a writable copy of the bytes right there on your program's stack.

```c
char t[] = "Hello, again!"; 
t[0] = 'z'; // ✅ NO PROBLEM: You own this memory.
printf("%s", t); // "zello, again!"
```

#### 💡 Developer Insight:
The rule is simple:
- Just want to read or pass a fixed text? Use `char *`.
- Need to change letters, reverse the string, or clear data? Use `char []`.

> **⚠️ Mental Note:**
> A string in double quotes used to initialize an array is not treated as an immutable literal; it simply becomes the "mold" for the copy you are going to use.

</details>

---

<details>
<summary><b>📏 Discovering String Length with `strlen` (Section 7.5)</b></summary>
<br>

---

[Code for Section 7.5 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-5)-DISCOVERING-STRING-SIZE)

---

Unlike modern languages, C is "forgetful": it **does not track** the size of your strings. If you want to know the length of one, you have to ask the `strlen()` function to count it for you.

#### 🛠️ How to use `strlen`
To use this function, you need to include the `<string.h>` library.

```c
#include <stdio.h>
#include <string.h> // 👈 Required for handling strings

int main(void) {
    char *s = "Hello, world!";
    
    // %zu is the correct specifier for the size_t type
    printf("The string is %zu bytes long.\n", strlen(s));
}
```

#### 🕵️ The Secret of size_t
The `strlen()` function does not return a regular `int`; it returns a `size_t`.
- **What it is:** A type of unsigned integer used to represent the sizes of objects in memory.
- **How to print it:** Always use the `%zu` specifier.

#### ❓ If C doesn't track it, how does it know the size?
C doesn't have a hidden counter. When you call `strlen(s)`, the function:
1. Takes the address of the first character.
2. Traverses the memory one by one.
3. Counts each letter until it encounters the null character (`\0`).

#### 💡 Developer Insight:
This means that `strlen()` is an "expensive" operation for the processor. If you have a string with 1 million characters, C has to walk through all of them just to tell you the size.

> **🎓 Pro Tip:**
> If you need to use the length multiple times in a loop, store the result in a variable instead of calling the function every time!

</details>

---

<details>
<summary><b>🔚 String Determination (Section 7.6)</b></summary>
<br>

---

[Code for Section 7.6 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-6)-STRING-DETERMINATION)

---

C handles strings in a "low-level" way that almost no modern language uses anymore. To save memory back in the 70s, instead of storing the string size as a number, C decided to use an **end marker**.

#### 🚦 The Two Design Options
Imagine you are creating a language. How would you store the text "Hi"?
1. **Option 1:** Store the number `2` (length) and then `Hi`. (Uses extra bytes for the counter).
2. **Option 2:** Store `Hi` and a "stop" signal at the end. **(C chose this one!)**.



#### 💎 The Anatomy of a String in C
For C, a string is defined by just two things:
1. A **pointer** to the first character.
2. A zero-valued character (called **NUL** or `\0`) that appears somewhere in memory after the pointer.

#### 🕵️ The Automatic "NUL"
You don't need to type `\0` every time. When you use double quotes, C places it there for you behind the scenes:

```c
char *s = "Hello!";  
// Under the hood, C stores: 'H' 'e' 'l' 'l' 'o' '!' '\0'
```

#### 🛠️ Creating my own `strlen()`
Here is how we would manually write the `strlen` function, hunting for the `\0` inside the array:

```c
int my_strlen(char *s) {
    int counter = 0;

    // As long as the current character is NOT the null terminator...
    while (s[counter] != '\0') {
        counter++; // ...keep counting
    }

    return counter;
}
```

#### 💡 Developer Insight:
This is why C is fast but dangerous. If you forget or accidentally erase the `\0`, C functions (like `printf` or `strlen`) will keep reading your memory infinitely until they find a stray zero or the system crashes your program. The `\0` is the seatbelt for strings.

</details>

---

<details>
<summary><b>👯 Copying Strings (Section 7.7)</b></summary>
<br>

---

[Code for Section 7.7 can be found here](./CODE_BY_DAY/DAY_007/(SECTION-7-7)-COPYING-STRINGS)

---

Here is the classic mistake: thinking that the `=` operator copies text. In C, `=` copies the **address** (pointer), not the characters.

#### ❌ The Wrong Way: Copying the Pointer
If you do `t = s`, both variables point to the same place in memory. If you change a letter in `t`, it changes in `s` as well. They become "accomplices."

```c
char s[] = "Hello!";
char *t;

t = s;    // ⚠️ ATTENTION: You didn't copy the text, only the address!
t[0] = 'z'; 
printf("%s", s); // It will print "zello" because 's' and 't' are the same guy.
```

#### ✅ The Right Way: `strcpy()`
To truly duplicate a string, you need a new space in memory and copy it letter by letter. The `strcpy` (string copy) function from `<string.h>` does this dirty work for you.

```c
#include <string.h>

char s[] = "Hello!";
char t[50]; // 🛡️ IMPORTANT: Ensure the destination has enough space!

strcpy(t, s); // Copies the content of 's' into 't'
```

#### 💡 Developer Trick: The Order of Factors:
Many people forget who comes first in `strcpy(destination, source)`. Beej gives a `killer tip`: think of the order of a standard assignment.
- If C allowed it, you would write: `destination = source`;
- In strcpy, the order is the same: `strcpy(destination, source)`;

> **⚠️ Fire Warning:**
Before using strcpy, make sure your destination array is large enough (including space for the \0). If the source is larger than the destination, you will invade neighboring memory and the program will explode.

</details>


</details>

---

<details>
   <summary><b>🔹 Day 8: Structs </b></summary>

---

[Day 8 codes can be found here](./CODE_BY_DAY/DAY_008)

---

<details>
<summary><b>🏗️ Structs - Introduction (Section 8.0)</b></summary>
<br>

---

[Code for Section 8.0 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-0)-STRUCTS-INTRODUCTION)

---

If you've ever felt that passing 10 loose variables to a function is a mess, **Structs** are your salvation. In C, a `struct` is a data type that you define to group several different pieces of information under a single name.

### 📦 What is a Struct?
Imagine you want to represent a "User". Instead of having isolated variables like `char name[]`, `int age`, and `float height`, you create a "box" that keeps all of them together.

* **Where does it come from?** If you are familiar with Classes (from Java or Python), a Struct is like a **Class that only has attributes**.
* **What's missing?** Unlike modern languages, a Struct in C does not have "methods" (internal functions). It is purely a data container.

#### 🚀 Why is this useful?
1. **Organization:** You stop dealing with "loose" variables and start dealing with logical "objects."
2. **Efficiency:** Instead of passing 5 arguments to a function, you pass only **one** Struct (or a pointer to it).
3. **Readability:** The code becomes much cleaner. It is easier to understand `player.health` than a variable `h` lost in the code.

#### 💡 Developer Insight:
In native C, there are no true objects. The Struct is the closest thing we have to organize complex data. It doesn't "do" anything on its own; it just "holds" the pieces so that your functions can work with them in an organized way.

</details>

---

<details>
<summary><b>🛠️ Declaring Your First Struct (Section 8.1)</b></summary>
<br>

---

[Code for Section 8.1 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-1)-DECLARING-YOUR-FIRST-STRUCT)

---

A `struct` is, in practice, a **new data type** that you invent. Unlike an array (where all items must be the same type), in a struct, you can mix "apples and oranges."

#### 📝 How to Declare the "Blueprint"
We usually declare the struct blueprint in the global scope (outside of functions) so that the entire program knows what a `struct car` is.

```c
struct car {
    char *name;       // A pointer to the name (string)
    float price;      // A decimal for the price
    int speed;        // An integer for the speed
};
```

#### 🏗️ Creating a Variable (Instantiating)
- Having the blueprint doesn't create the car. You need to declare a variable of this new type.
**⚠️ Note:** In C, the type name is the full `struct car`, and not just `car`.
```c
struct car mercedes; // Variable "mercedes" of type "struct car"
```

#### 📍 Accessing Fields (The Dot Operator `.`)
To look inside the "box" and manipulate the data, we use the `dot`. It is from here that C "lent" this syntax to almost all modern languages (Java, JS, Python, etc.).
```c
// Assigning values
mercedes.name = "Mercedes-Benz C300";
mercedes.price = 15999.99;
mercedes.speed = 175;

// Reading values
printf("Name: %s | Price: %.2f\n", mercedes.name, mercedes.price);
```

> **💡 Developer Insight (CLion):**
> In CLion, when you type `mercedes.`, it will automatically suggest the fields `name`, `price`, and `speed`. This happens because the compiler has already calculated exactly how many bytes of offset each field is from the start of the struct in memory.

</details>

---

<details>
<summary><b>⚡ Struct Initializers (Section 8.2)</b></summary>
<br>

---

[Code for Section 8.2 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-2)-STRUCT-INITIALIZERS)

---

In the previous chapter, we filled the `mercedes` field by field. It works, but it's tedious. C allows you to initialize a `struct` in a much more elegant way, directly at the declaration.

#### 1. Ordered Initialization (The "Classic" way):
You can pass the values inside curly braces, following the **exact same order** in which the fields were defined in the `struct`.

```c
struct car mercedes = {"Mercedes-Benz C300", 15999.99, 175};
```
#### ⚠️ Danger:
If someone changes the order of the fields at the top of the file (example: placing price before the name), this code will break or attempt to save a price inside a name field. Risky, right?

#### 2. Designated Initializers (The Modern/Safe way):
Since C99, we have **Designated Initializers**. With them, you explicitly state which field you are filling using the dot `.` operator.
```c
struct car mercedes = {.speed=175, .name="Mercedes-Benz C300"};
```
- ✅ **Order Independent:** You can put the speed before the name.
- ✅ **Auto-fill:** Any field you omit (like `.price` above) will be automatically zeroed out by the compiler.
- ✅ **Clarity:** Anyone reading the code knows exactly what each value represents.

> **💡 Developer Insight:**
> Whenever possible, use the `.field = value` style. In large projects, structs can have 50 fields; trying to get the order of 50 values right manually is an invitation for memory bugs.

</details>

---

<details>
<summary><b>🏎️ Passing Structs to Functions (Section 8.3)</b></summary>
<br>

---

[Code for Section 8.3 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-3)-PASSING-STRUCTS-TO-FUNCTIONS)

---

There are two primary ways to send a `struct` to a function. Understanding when to use each one demonstrates your grasp of how computer memory is managed.

#### 📦 1. Pass by Value (Copy)
When passing the `struct` directly, C creates a **full copy** of all its fields for the function to work on.
* **Advantage:** Safety. The original data in the calling function remains unchanged.
* **Disadvantage:** If the `struct` is large (e.g., many fields or strings), copying all that data into the function's memory (*stack*) consumes unnecessary time and resources.

---

#### 🎯 2. Pass by Reference (Pointers)
This is the more professional and performant approach. Instead of sending the entire "object," you send only the **address** of where it resides in memory.

**Why use pointers with Structs?**
1. **Data Modification:** It allows the function to modify the values of the original `struct` (e.g., updating an item's price).
2. **Raw Efficiency:** Copying an address (pointer) is instantaneous, regardless of whether the `struct` has 3 or 300 fields.

#### 💻 Practical Example: Updating Vehicle Data

```c
#include <stdio.h>

struct Vehicle {
    char *model;
    float price;
    int horsepower;
};

// Prototype: receives a POINTER to the struct and the new value
void update_price(struct Vehicle *v, float new_value);

int main(void) {
    // Initializing our struct
    struct Vehicle my_car = {.model = "Comfort Sedan", .horsepower = 150};

    // We pass the address (&) to the function
    update_price(&my_car, 95000.00);

    printf("Model: %s | Updated Price: $ %.2f\n", my_car.model, my_car.price);
    
    return 0;
}
```

#### ⚠️ The Pointer Syntax Challenge:
If we try to access a pointer's field using the dot `.` operator, the compiler will return an error, as the dot only works on direct structs, not addresses.

To access the actual value, we would need to "dereference" the pointer first:

```c
void update_price(struct Vehicle *v, float new_value) {
    (*v).price = new_value;  // ✅ Works, but the syntax is cluttered.
}
```
- While `(*v).price` is technically correct, the excessive use of parentheses and asterisks makes the code difficult to read and maintain in large-scale projects.

> **💡 Developer Insight:**
> In professional development, we rarely use the (*pointer).field syntax. To make the code more elegant and "idiomatic" (standard for the community), C created a shortcut called the **Arrow Operator (`->`)**. It does exactly the same thing: **dereferences the pointer and accesses the field in a single**, visually clean step. Mastering this transition between the dot and the arrow is the first step toward writing high-performance code.

</details>

---

<details>
<summary><b>➡️ The Arrow Operator (Section 8.4)</b></summary>
<br>

---

[Code for Section 8.4 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-4)-ARROW-OPERATOR)

---

The arrow operator is C's "syntactic sugar." It was created to make a developer's life easier when accessing **struct** fields through a **pointer**, replacing the need for asterisks and parentheses.

#### 🛠️ Simplifying the Syntax

Remember the "cluttered" and hard-to-read form from the previous section? The arrow operator does exactly the same thing, but in a much cleaner way:

```c
void adjust_value(struct Product *p, float new_price) {
    // (*p).price = new_price;  // ❌ 100% correct, but nobody uses it this way.
    
    p->price = new_price;       // ✅ 100% elegant and the industry standard!
} 
```
- Visually, the `->` arrow indicates: "Go to the address the pointer points to and access this field inside it."

#### 📏 Golden Rule: Dot vs. Arrow

To never forget which operator to use in your code, follow this simple rule based on the data type you have at hand:

| If you have... | Use the Operator... | Practical Example |
| :--- | :---: | :--- |
| **The Struct directly** | Dot (`.`) | `car.price = 500.00;` |
| **A Pointer to the struct** | Arrow (->) | `ptr_car->price = 500.00;` |

#### 💻 Full Example:
```c
#include <stdio.h>

struct Student {
    char *name;
    int enrollment_id;
    float grade;
};

int main(void) {
    struct Student vitor = {.name = "Vitor", .enrollment_id = 12345};
    struct Student *ptr = &vitor; // Creating a pointer to the struct

    // Using the Dot on the direct struct
    vitor.grade = 9.5;

    // Using the Arrow through the pointer
    ptr->grade = 10.0; 

    printf("Student: %s | Final Grade: %.1f\n", ptr->name, vitor.grade);

    return 0;
}
```

> **💡 Developer Insight:**
> In professional software development, you will spend most of your time using the `Arrow (->)`. This is because passing pointers to functions is much more efficient than copying the entire structure. Mastering the quick reading of this arrow is essential for rapidly understanding the data flow in large codebases, where data "travels" between functions via memory addresses.

</details>

---

<details>
<summary><b>📋 Copying and Returning Structs (Section 8.5)</b></summary>
<br>

---

[Code for Section 8.5 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-5)-COPYING-AND-RETURNING-STRUCTS)

---

One of the conveniences in C is that you can copy all the data from one **struct** to another at once, without needing to copy each field manually.

#### 🔄 1. Direct Assignment Copying

Unlike arrays (which you cannot simply set equal to one another), the assignment operator `=` works perfectly with **structs** to create a copy.

```c
struct Car {
    char *model;
    float price;
};

struct Car a = {.model = "Sedan", .price = 50000.00};
struct Car b;

b = a;  // ✅ All data from 'a' has been copied to 'b'
```

#### ⚠️ The Concept of "Shallow Copy"

This is where many developers get confused. C performs a **Shallow Copy**. This means it copies the raw values stored inside the struct.
- **Simple Values (int, float, char):** These are copied entirely.
- **Pointers:** C copies only the memory address stored in the pointer.

🚨 **Danger:** If the `original struct` has a pointer to a string, the new `struct` will point to the **same string in memory**. If you change the string's content through one struct, the other will also see the change!

#### ↩️ 2. Returning Structs from Functions
You can also have a function return an `entire struct`. When doing this, C performs a copy of the function's result to the variable receiving it.
```c
struct Point {
    int x, y;
};

struct Point create_point(int x, int y) {
    struct Point p = {.x = x, .y = y};
    return p; // A copy of 'p' is sent back to the function caller
}

int main(void) {
    struct Point my_point = create_point(10, 20);
    return 0;
}
```

> 💡 **Developer Insight:**
> While returning an `entire struct` is perfectly valid and easy to read, keep the performance rule in mind: if your structure is very large, the **cost of "copying" this data during the function return can be high**. In high-performance systems, it is more common to pass a pointer for the function to fill in the data, thus avoiding the need to create extra copies in memory.

</details>

---

<details>
<summary><b>⚖️ Comparing Structs (Section 8.6)</b></summary>
<br>

---

[Code for Section 8.6 can be found here](./CODE_BY_DAY/DAY_008/(SECTION-8-6)-COMPARING-STRUCTS)

---

In C, you **cannot** use the `==` operator to compare two structs. The compiler doesn't know if you want to compare values, memory addresses, or just a specific field. To solve this, we must understand how memory is organized "under the hood."

#### 🔍 1. The Padding Problem

Computers prefer to read data in aligned blocks (usually 4 or 8 bytes). To maintain this alignment, the compiler inserts invisible empty bytes between struct fields. This is known as **Padding**.

```c
struct Example {
    char a;    // 1 byte
               // Here the compiler skips 3 bytes (Padding) to align the next int
    int b;     // 4 bytes
};
```
- These padding bytes may contain "garbage" (random memory values), making raw memory comparison unpredictable.

#### 👀 Check this example:
```c
struct Point {
    int x, y;
};

struct Point p1 = {10, 20};
struct Point p2 = {10, 20};

if (p1 == p2) { // ❌ COMPILATION ERROR!
    // C does not allow this direct comparison.
}
```

#### ✅ The Only Safe Way: Member-by-Member
To compare two structures, you must create logic (usually a function) that checks each field individually. This demonstrates to anyone reading your code that you have full control over the data.
```c
#include <stdbool.h>

bool points_are_equal(struct Point a, struct Point b) {
    return (a.x == b.x && a.y == b.y);
}
```

#### 🛠️ 2. Memory Manipulation: `memset()` and `memcmp()`
To handle structs at the byte level, we use the `<string.h>` library.

**`memset()` – Clearing the "Garbage"**
The `memset()` function fills a block of memory with a specific value (usually zero). It is essential to ensure that even the padding bytes are zeroed out.
**Syntax:** `memset(&variable, value, size_in_bytes)`;

**`memcmp()` – Raw Comparison**
The `memcmp()` function compares two memory blocks byte by byte. It returns 0 if the blocks are identical.
**Syntax:** `memcmp(&a, &b, sizeof(struct))`;

#### 🚀 3. Practical Example: The Safe Way vs. The Fast Way
```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct User {
    int id;
    float balance;
};

// METHOD 1: Manual (Safer and clearer)
bool users_are_equal(struct User u1, struct User u2) {
    return (u1.id == u2.id && u1.balance == u2.balance);
}

int main(void) {
    struct User user1, user2;

    // METHOD 2: Raw Memory (Requires prior clearing)
    // 1. Zero out the memory to eliminate padding "garbage"
    memset(&user1, 0, sizeof(user1));
    memset(&user2, 0, sizeof(user2));

    // 2. Assign values
    user1.id = 1; user1.balance = 100.50;
    user2.id = 1; user2.balance = 100.50;

    // 3. Compare bytes
    if (memcmp(&user1, &user2, sizeof(struct User)) == 0) {
        printf("Users are identical in memory!\n");
    }

    return 0;
}
```

> 💡 **Developer Insight:**
> While `memcmp()` might seem like a tempting shortcut, manual member-by-member comparison is the golden rule in professional development. It prevents your code from failing due to `padding bytes` and allows you to ignore irrelevant fields in the comparison, such as a "last login" timestamp. In C, understanding `memset` and `padding` is what distinguishes a programmer who understands the hardware from one who just writes syntax.

</details>

</details>

---

<details>
  <summary><b>🔹 Day 9: File Input/Output (I/O) </b></summary>

---

[Day 9 codes can be found here](./CODE_BY_DAY/DAY_009)

---

<details>
<summary><b>📁 File I/O - Introduction (Section 9.0)</b></summary>
<br>

---

[Code for Section 9.0 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-0)-FILE-IO-INTRODUCTION)

---

So far, we have used `printf()` to display data on the console and `scanf()` to capture user input. However, in real-world applications, data needs to be **persistent**. In this section, we will learn how C communicates with the file system to read and write information permanently to the disk.

#### 📥 The Stream Concept

In C, it doesn't matter if you are writing to the monitor, a `.txt` file, or sending data over a network; everything is treated as a **Stream** (a flow of bytes).

* **stdin:** Standard Input (usually the keyboard).
* **stdout:** Standard Output (usually the console).
* **stderr:** Standard Error (used for logs and failure messages).

#### 📑 The File Pointer (`FILE *`)

To handle a file, C uses a special data type called `FILE`, defined in the `<stdio.h>` library. We never manipulate the file data directly; instead, we use a **File Pointer**.

```c
#include <stdio.h>

int main(void) {
    FILE *fp; // "fp" stands for File Pointer
    
    // File operations follow a mandatory lifecycle:
    // 1. Open the file (fopen)
    // 2. Process (read or write)
    // 3. Close the file (fclose)
    
    return 0;
}
```

> 💡 Developer Insight:
> Working with files requires a **defensive mindset**. Unlike a variable in memory that is "always there," a file might not exist, could be write-protected, or the disk might be full. Checking if your `FILE *` pointer is `NULL` before using it is the hallmark of production-ready code.

</details>

---

<details>
 <summary><b>📄 The `FILE*` Data Type (Section 9.1)</b></summary>
<br>

---

[Code for Section 9.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-1)-FILE-DATA-TYPE)

---

Every Input and Output (I/O) operation in C is performed through a structure called `FILE`. We do not manipulate this structure directly; instead, we use a **pointer** to it (`FILE*`). This pointer holds all the information the system needs: which file is open, which line is being read, and whether any errors have occurred.

#### 🌊 What are Streams?

Although we often talk about "files," the correct technical term in C is **Stream**. Think of a Stream as a pipe through which data flows. A file on a disk is just a special type of Stream.

When starting any C program, the operating system already leaves three "pipes" open and ready for use:

| `FILE*` Pointer | Name | Description |
| :--- | :--- | :--- |
| **stdin** | Standard Input | Standard input (usually the keyboard). |
| **stdout** | Standard Output | Standard output (usually the screen). |
| **stderr** | Standard Error | Error output (usually the screen as well). |

#### ⚠️ The Importance of `stderr`

You might have noticed that both `stdout` and `stderr` display messages on the screen. So, why use two different ones?

The answer is: **Redirection**. Professional operating systems (like Linux or Windows) allow you to separate success messages from errors.

* **Practical Example:** You can run a program and save only the important data to a file, while the errors still appear on your terminal so you know something failed.

In C, the famous `printf()` is actually an alias for `fprintf()` sending data to `stdout`:

```c
printf("Hello, world!\n");             // What we always use
fprintf(stdout, "Hello, world!\n");    // Exactly the same thing, but explicit
```

>💡 **Developer Insight:**
> Always send critical error messages to `stderr` instead of the regular `printf`. This designs software with **maintainability** and automation in mind. If your program encounters an error on a server, whoever is monitoring can filter specifically for `stderr` messages to find what broke without having to read through thousands of lines of regular logs.

</details>

---

<details>
<summary><b>📖 Reading Text Files (Section 9.2)</b></summary>
<br>

---

[Code for Section 9.2 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-2)-READING-TEXT-FILES)

---

In C, files (streams) are divided into two major categories: **Text** and **Binary**.

* **Text Files:** These are sequences of lines that you can read in any common editor (like Notepad or VS Code). C performs small automatic translations on these streams, such as adjusting the "newline" character (`\n`) depending on the operating system.
* **Binary Files:** These are raw data (images, executables, videos). We will cover more about them later.

---

### 🛠️ The File Lifecycle

To read a file, we always follow three mandatory steps: **Open**, **Process**, and **Close**.

```c
#include <stdio.h>

int main(void) {
    FILE *fp; // Pointer to represent the open file

    // 1. OPEN: We use fopen(file_name, mode)
    // "r" stands for "read" (open for text reading only)
    fp = fopen("hello.txt", "r");

    // 2. PROCESS: Reading the first character of the file
    int c = fgetc(fp); 

    // Displaying the character read on the console
    printf("The first character is: %c\n", c);

    // 3. CLOSE: Releasing the file to the operating system
    fclose(fp);

    return 0;
}
```

#### 🔍 Critical Developer Details:
1. **Why `int c` instead of `char c`?**
Did you notice that the `fgetc()` function returns an `int`? This happens because, besides all possible characters, it needs to be able to return a special value called `EOF (End Of File)`, which indicates that the file has ended. A standard char doesn't have room for this extra value, which is why we use `int`.
---
2. **The "`r`" Mode:**
The second argument of `fopen` defines what you intend to do. The "`r`" ensures you won't accidentally erase the file, as it opens the stream for `reading only`.
---
3. **The Reading Cursor:**
The `FILE*` pointer acts like an invisible cursor. Every time you call `fgetc()`, C reads one character and moves the cursor to the next one. If you call the function 10 times, you will read the next 10 characters of the file.
---

> 💡 **Developer Insight:**
> Always close your files with `fclose()`. Although the operating system closes files when your program ends, leaving files open consumes system resources ("file descriptors"). In servers that run for months, forgetting to close files can cause system crashes due to resource exhaustion.

</details>

---

<details>
<summary><b>🔚EOF - The End of File (Section 9.3.0 - Section 9.3.1)</b></summary>
<br>

---

[Code for Section 9.3.0 - 9.3.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-3)-EOF-END-OF-FILE)

---


<details>
<summary><b>🧱 The End of File: EOF (Section 9.3.0)</b></summary>
<br>

---

[Code for Section 9.3.0 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-3)-EOF-END-OF-FILE/(SECTION-9-3-0)-THE-END-OF-FILE)

---

How does the program know when a file has ended? C uses a special macro called `EOF` (short for *End Of File*). It acts as a flag that the system sends when you attempt to read beyond the last character of the file.

#### 🧐 The `int` vs `char` Mystery

You might have wondered: "If I am reading characters, why does the `fgetc()` function return an `int`?".

The answer is both technical and fascinating: `EOF` is not a real character (like 'A' or 'B'). It is a special numerical value (usually `-1`) that falls outside the range of a standard `char` type.

* **The Problem:** If `fgetc()` returned a `char`, it wouldn't have an "extra" value to signal the end of the file without confusing it with a valid character.
* **The Solution:** Using `int` allows the function to return any of the 256 possible characters **PLUS** the special `EOF` value.
---

#### 🔄 Reading an Entire File with Loops

Now that we are familiar with `EOF`, we can create a `while` loop to process a file from beginning to end, regardless of its size.

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    int c; // We use int to capture EOF correctly

    fp = fopen("message.txt", "r");
    
    // Safety check (Best practice!)
    if (fp == NULL) {
        fprintf(stderr, "Error opening the file!\n");
        return 1;
    }

    // The "Idiomatic C Loop":
    // 1. Assigns the character read to 'c'
    // 2. Checks if 'c' is not EOF
    // 3. If it's different, it enters the loop and prints
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
    return 0;
}
```

> 💡 **Developer Insight:**
> The line while `((c = fgetc(fp)) != EOF)` might look strange at first, but it is what we call Idiomatic Code. It is a compact and efficient way to perform two operations (assignment and comparison) in a single line. In professional development, you will encounter this pattern constantly. Mastering this syntax shows that you are comfortable with "hardcore" C syntax and ready to handle continuous data streams.

</details>

---

<details>
<summary><b>📝 Reading One Line at a Time with fgets() (Section 9.3.1)</b></summary>
<br>

---

[Code for Section 9.3.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-3)-EOF-END-OF-FILE/(SECTION-9-3-1)-READING-ONE-LINE-AT-A-TIME)

---

Reading one character at a time works, but it is inefficient for large files. In practice, we usually process text files **line by line**. To do this, C provides the `fgets()` function.

#### 🛠️ How does `fgets()` work?

Unlike `fgetc()`, `fgets()` needs three pieces of information (arguments) to work safely:
1. **The Buffer:** A `char` array where the read line will be stored.
2. **The Maximum Size:** The byte limit it can read (this prevents your program from trying to read more than the array can hold, avoiding memory bugs).
3. **The File Pointer:** The `FILE*` representing the open file.

`fgets()` reads until it encounters a newline (`\n`), reaches the size limit, or hits the end of the file. It also automatically appends the null character (`\0`) to the end of the string.

---

#### 💻 Practical Example: Line Counter

Let's imagine a file named `quote.txt` with a famous phrase. The code below reads the file line by line and prints the line number before the text:

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    char buffer[1024]; // Enough space for a long line
    int counter = 0;

    fp = fopen("quote.txt", "r");

    // Error checking upon opening
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // The loop continues as long as fgets() does not return NULL (end of file)
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%d: %s", ++counter, buffer);
    }

    fclose(fp);
    return 0;
}
```

#### **⚠️ Important Technical Details:**
- **NULL Return:** While `fgetc()` uses `EOF`, `fgets()` returns `NULL` when it reaches the end of the file or encounters an error.

- **The \n Character:** `fgets()` usually keeps the newline character (`\n`) inside the string if there is space. This is why, in the example above, the printf does not need an extra `\n` at the end.

- **Buffer Safety:** Using `sizeof(buffer)` as an argument ensures that the program will never write outside the array boundaries, an essential practice to avoid security vulnerabilities.

> 💡 **Developer Insight:**
> In professional development, the buffer size (like the `1024` we used) is a choice based on the expected data type. If you are reading a giant log file with massive lines, you will need larger buffers. Seeing a developer use `fgets()` instead of unsafe functions like `gets()` is a clear sign that they care about the stability and security of the application.

</details>

</details>

---

<details>
<summary><b>📊 Formatted Input with `fscanf()` (Section 9.4)</b></summary>
<br>

---

[Code for Section 9.4 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-4)-FORMATTED-INPUT-FSCANF)

---

Just as `printf()` is used to display formatted data, `fscanf()` is its equivalent for **reading** formatted data directly from a file. It is ideal when your file follows a strict pattern, such as a table or a list of records.

---

#### 🐋 Practical Example: Processing Whale Data

Imagine a file named `whales.txt` containing the species name, length (meters), and weight (tons):
```text
blue 29.9 173
right 20.7 135
gray 14.9 41
```

#### We can read this data directly into specific variables:

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    char name[100];
    float length;
    int mass;

    fp = fopen("whales.txt", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // fscanf skips whitespace and returns EOF at the end of the file
    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF) {
        printf("Species: %s | Weight: %d t | Length: %.1f m\n", name, mass, length);
    }

    fclose(fp);
    return 0;
}
```

#### **⚠️ Security Alert: The Danger of `fscanf`**
While `fscanf()` is convenient, it can be dangerous if the file data is untrustworthy.

1. **Buffer Overflow:** If you use `%s` without limiting the size, and the file contains a word larger than your `name` array, the program will crash or be compromised.

- **Solution:** Always use a width limit, such as `%99s` (for a 100-position array).

2. Invalid Conversions: If the file expects a number but finds a character, the behavior can be unpredictable.

> 💡 **Developer Insight:**
> In large-scale professional projects, it is very common to read the entire line first with `fgets()` and then process that string in memory using `sscanf()`. This makes the program much more resilient to corrupted or poorly formatted files.

</details>

---

<details>
<summary><b>✍️ Writing to Text Files (Section 9.5)</b></summary>
<br>

---

[Code for Section 9.5 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-5)-WRITING-TO-TEXT-FILES)

---

Just as we have functions for reading (`fgetc`, `fgets`, `fscanf`), C offers symmetrical functions for writing data to files: `fputc()`, `fputs()`, and the powerful `fprintf()`.

---

#### ⚠️ The Write Mode ("w")

To write to a file, we must open it using the `"w"` (*write*) mode.

> **Warning:** When opening an existing file with `"w"`, C will **instantly erase all previous content** (truncate to 0 bytes). If the file does not exist, it will be created.

---

#### 💻 Practical Example: Generating an Output Log

Let's create a program that uses different functions to generate a file named `output.txt`:

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    int value = 42;

    // Opening for writing (CAUTION: this overwrites the file!)
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        perror("Error creating file");
        return 1;
    }

    // 1. fputc: Writes a single character
    fputc('A', fp);
    fputc('\n', fp); 

    // 2. fprintf: Writes formatted data (just like the standard printf)
    fprintf(fp, "The calculation result is: %d\n", value);

    // 3. fputs: Writes a complete string
    fputs("Finalizing data logging.\n", fp);

    fclose(fp); // Always close to ensure data is flushed from the buffer to the disk
    return 0;
}
```

> 💡 **Developer Insight:**
A powerful curiosity in C is that `stdout` (your screen) is technically treated as a file. If you changed the `fopen` line to `fp = stdout;`, all write functions would send the data to the console instead of the disk.
For your portfolio, remember:
> - Use `fprintf()` when you need formatting (numbers, dates).
> - Use `fputs()` for plain text, as it is slightly faster and simpler.
> - Always check if the `fp` pointer is `NULL`. Write errors are common (full disk, lack of folder permissions, etc.).


</details>

---

<details>
<summary><b> 💾 Binary I/O (Section 9.6.0 - Section 9.6.1)</b></summary>
<br>

---

[Code for Section 9.6.0 - Section 9.6.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-6)-I-O-BINARY)

---

<details>
<summary><b>🛠️Binary File I/O(Seção 9.6.0)</b></summary>
<br>

---

[Code for Section 9.6.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-6)-I-O-BINARY/(SECTION-9-6-0)-BINARY-FILE-I-O)

---

So far, we have dealt with text files. However, there is a much more efficient category for storing complex data: **Binary Files**. Unlike text files, they do not undergo automatic translations (such as `\n` adjustments) and store bytes exactly as they are in memory.

---

#### 🛠️ Opening Modes and the "b" Suffix

The first major difference is in `fopen()`. To tell the system we do not want text translations, we add the **"b"** character to the mode:

| Mode | Description |
| :--- | :--- |
| **"rb"** | Opens for binary reading (*read binary*). |
| **"wb"** | Opens for binary writing (*write binary*). Overwrites the file. |
| **"ab"** | Opens for appending binary data (*append binary*). |

---

#### 📦 The `fwrite()` and `fread()` Functions

Since binary files can contain the null character (`\0`) in the middle of the data, functions like `fprintf` or `fputs` do not work well (they would stop at the first null occurrence). We use functions that handle **blocks of bytes**:

#### 1. Writing Raw Data (`fwrite`)
Imagine we want to save a sequence of numerical values that are not readable characters:

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb");

    // fwrite Arguments:
    // 1. Pointer to the data
    // 2. Size of each item (sizeof)
    // 3. Number of items
    // 4. The file pointer (FILE*)
    fwrite(bytes, sizeof(unsigned char), 6, fp);

    fclose(fp);
    return 0;
}
```
When opening this file in a text editor, you will only see "garbage" or strange symbols. This is normal! To see the actual content, we use tools like `hexdump`.

#### 2. Reading Raw Data (`fread`)
The `fread` function returns the number of items successfully read. If it returns `0`, we have reached the End of File (EOF).

```c
#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char c;

    fp = fopen("output.bin", "rb");

    // We read 1 item at a time until fread returns 0
    while (fread(&c, sizeof(unsigned char), 1, fp) > 0) {
        printf("%d\n", c);
    }

    fclose(fp);
    return 0;
}
```

#### 📏 Why are the middle arguments unusual?
The `fread` and `fwrite` functions ask for the **item size** and the **quantity**. This is extremely useful for saving entire structs or arrays at once:

```c
// Example: Saving 10 structs at once
fwrite(my_users, sizeof(struct User), 10, fp);
```

>💡 **Developer Insight:**
> Binary files are the foundation for almost everything that is not plain text: images (PNG, JPG), databases (SQLite), and game save files. Demonstrating that you know how to use `fread` and `fwrite` with `sizeof` shows that you understand how memory is structured and know how to create custom, efficient file formats.


</details>

---

<details>
<summary><b>⚠️ 9.6.1 Portability Issues: Structs and Numbers</b></summary>
<br>

---

[Code for Section 9.6.1 can be found here](./CODE_BY_DAY/DAY_009/(SECTION-9-6)-I-O-BINARY/(SECTION-9-6-1)-PORTABILITY-ISSUES)

---

Saving a `struct` or a multi-byte number (like an `int` or `double`) directly to disk with `fwrite()` seems easy, but it hides traps that can break your program when switching computers. For professional software, we must ensure **Portability**.

---

#### 📏 1. The Alignment Problem (Padding)
As we have seen before, the compiler inserts filling bytes (*padding*) to align data in memory.
* The issue is that **different processors and compilers** use different padding rules.
* If you save a struct on a PC and try to read it on a Raspberry Pi (or a Mac server), the bytes might be in different positions, corrupting your data.



---

#### 🔄 2. The "Endianness" Problem (Byte Order)
Not all computers read numbers the same way. Imagine the hexadecimal number `0x1234`:

* **Big-Endian:** Saves bytes in the "natural" order: `12 34`.
* **Little-Endian:** (Common in Intel/AMD processors): Saves bytes reversed: `34 12`.

If your program writes one way and reads another, a "Price" or "User ID" value will become a completely random and incorrect number.



---

#### 🛠️ The Solution: Serialization

For your binary data to be portable, you should never save "raw" memory. Instead, you must **Serialize** the data.

**Serialization** means converting your data into a standard, controlled, and platform-independent format.

#### How to do it professionally:
1. **Manual:** Write a function that saves field by field, ensuring each `int` is converted to a fixed byte order (usually *Network Byte Order*).
2. **Libraries (Recommended):** Use industry-established tools that solve this for you and allow your C code to communicate with other languages (Java, Python, etc.).
* **Protocol Buffers (Google)**
* **JSON/XML** (For text)
* **MessagePack** (For compact binary)

>💡 **Developer Insight:**
> In the real world, binary files that travel across the internet or between different systems (like a cloud game save) **must** be serialized. Demonstrating knowledge of *Endianness* and *Padding* shows a recruiter that you don't just "make the code work on your machine," but understand the architectural challenges of distributed and multi-platform systems.

</details>

</details>

</details>

---

<details>
  <summary><b>🔹Day 10: `typedef`: Creating New Names for Types </b></summary>

---

[Day 10 code can be found here](./CODE_BY_DAY/DAY_010)

---

<details>
<summary><b>🏷️ `typedef`: - Introduction (Section 10.0)</b></summary>
<br>

---

[Section 10.0 code can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-0)-TYPEDEF-INTRODUCTION)

---

At first glance, `typedef` might seem like just an unnecessary "nickname," but it is fundamental for making C code more readable, organized, and easier to maintain. Instead of dealing only with generic types like `int` or `struct`, you can create names that describe exactly what that data represents in your program.

---

#### 🔍 What does `typedef` do?

It allows you to define a new name (an *alias*) for an existing type. The basic syntax follows this pattern:
`typedef [existing_type] [new_name];`

#### Simple Example:
```c
typedef int Distance; // Now 'Distance' is an alias for 'int'

Distance km_traveled = 500;
int x = 10; // Both are treated the same way by the compiler
```

---

#### 🏗️ Most Common Use: Simplifying Structs

Without `typedef`, every time you declare a structure variable, you must repeat the `struct` keyword. With `typedef`, you eliminate this repetition, making the code much cleaner.

| Without `typedef` | With `typedef` |
| :--- | :--- |
| `struct Point p1;` | `Point p1;` |

#### **Professional Implementation:**

```c
typedef struct {
    float x;
    float y;
} Point; // Now 'Point' is a complete, independent type

int main(void) {
    Point p = {10.5, 20.0}; // Much cleaner and more readable!
    return 0;
}
```

#### ⚖️ Why use typedef?

* **Abstraction:** If you decide that `Distance` should no longer be an `int`, but rather a `double`, you only need to change it in the `typedef`, and your entire codebase will be updated automatically.
* **Self-documentation:** Declaring `Age user1` is much more explanatory and semantic than just using a generic `int`.
* **Portability:** It allows you to create names that ensure the correct data size across different architectures (such as the well-known `size_t` or `int32_t`).

---

> 💡 **Developer Insight:**
> In operating systems and embedded systems development, `typedef` is widely used to "hide" hardware complexity. When you encounter a type like `uint8_t`, know that under the hood, there is a `typedef unsigned char`. Using this technique demonstrates that your code is designed to be portable and easy to maintain.

</details>

---

<details>
 <summary><b>📖 typedef in Theory (Section 10.1)</b></summary>
<br>

---

[Section 10.1 code can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-1)-TYPEDEF-IN-THEORY)

---

The essence of `typedef` is simple: you take an existing type and create an **alias** for it. From that point on, the compiler treats this new name exactly like the original type.

#### 🛠️ Basic Syntax

You can transform any type into a new name. Here is how the structure works:

```c
typedef int antelope;  // Makes "antelope" an alias for "int"

antelope x = 10;       // The "antelope" type is identical to the "int" type
```

---
C also allows you to create multiple aliases at once using a comma-separated list, in the same way you declare variables:

```c
typedef int antelope, bagel, mushroom;  // All are now aliases for "int"
```

#### 🧐 Why does this matter?
While replacing `int` with `mushroom` might seem useless, the theory behind it is what enables the creation of powerful **abstractions**. In day-to-day development, we don't use random names; instead, we use names that explain the data's role in the system:
- Instead of `unsigned long`, we use `FileSize`.
- Instead of `unsigned char`, we use `Byte`.

---

> 💡 **Developer Insight:**
> The theoretical use of `typedef` serves to introduce the concept of **Semantic Typing**. When you read `antelope x`, you don't know what `x` does. But when you read `Coordinate x`, the code explains itself. The functionality is simple, but its intelligent use is what differentiates amateur code from professional, readable code.

</details>

---

<details>
<summary><b>🛠️ typedef in Practice (Section 10.2.0 - Section 10.2.4)</b></summary>
<br>

---

[Codes for Sections 10.2.0 - 10.2.4 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE)

---

<details>
<summary><b>📦 typedef Creating Abstractions (Section 10.2.0)</b></summary>
<br>

---

[Codes for Section 10.2.0 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE/(SECTION-10-2-0)-TYPEDEF-CREATING-ABSTRACTIONS)

---

Renaming an `int` to a random name isn't very useful. Where `typedef` truly shines is in simplifying complex types, making the code cleaner and more professional.

---

#### 📦 1. Simplifying Structs

This is the number one use case for `typedef`. Without it, you are forced to write the word `struct` every time you declare a variable. With `typedef`, you create a "short" and direct type name.

| Approach | Code |
| :--- | :--- |
| **Traditional** | `struct Point p1;` |
| **With typedef** | `Point p1;` |

**Common Implementation:**
```c
typedef struct {
    int x, y;
} Point; // 'Point' is now the official type name
```

#### 🧬 2. Facilitating Pointer Usage
Pointers can quickly make C syntax confusing. `typedef` helps hide this complexity by creating types that already imply a pointer.
```c
typedef struct Node *List; // 'List' now represents a pointer to a 'struct Node'

// Instead of: struct Node *my_list;
List my_list; // Much more semantic!
```

#### 🏗️ 3. Creating Abstract Data Types (ADTs)
Often we want to hide how data is stored so the rest of the program doesn't have to worry about it.
- Example: Imagine you are creating an ID system. Today they are `int`, but tomorrow they might be `long long`.
```c
typedef int UserID;

// In the rest of the code you use:
UserID id1 = 1005;
```

If the ID type needs to change, you only update one line in your header file, rather than hundreds of `.c files`.

> 💡 **Developer Insight:**
> In professional practice, `typedef` is used to create an **abstraction layer**. When using libraries like `SDL2` for games or `OpenSSL` for security, you rarely see C's primitive types. Instead, you interact with types like `SDL_Window` or `EVP_PKEY`.
> This demonstrates that the library author focused on creating a domain-specific language for their problem.

</details>

---

---

<details>
<summary><b> 🏗️ Definition Practices: typedef and structs (Section 10.2.1)</b></summary>
<br>

---

[Codes for Section 10.2.1 can be found here](./CODE_BY_DAY/DAY_010/(SECTION-10-2)-TYPEDEF-IN-PRACTICE/(SECTION-10-2-1)-DEFINITION-PRACTICES)

---

Using `typedef` with structures is one of the most effective techniques to reduce visual "noise" in C. By creating an alias for a `struct`, the code becomes cleaner as it eliminates the need to repeat the `struct` keyword in every variable declaration.

There are three main patterns I have used in my studies:

---

#### 1. Alias After Definition
In this approach, the structure is defined first, and the alias is created immediately after. This maintains a clear separation between the data structure and its type name.

```c
struct animal {
    char *name;
    int legs;
};

typedef struct animal animal; // Creating the alias 'animal'

struct animal x; // Classic declaration (works)
animal y;        // Simplified declaration (works)
```

---

#### 2. Combined Definition (Optimized)
This is the pattern I use most frequently because it is concise. The `struct` and the `typedef` are declared within the same code block.

```c
typedef struct animal {
    char *name;
    int legs;
} animal;

struct animal x; // Accessible via 'struct animal' tag
animal y;        // Accessible via 'animal' alias
```

---

#### 3. Anonymous Structures
When there is no need to reference the struct internally, we can omit the tag name, creating an anonymous structure directly bound to the alias.

```c
typedef struct {
    int x, y;
} Point;

// struct Point p1; // ERROR: The struct has no internal name (tag)
Point p1 = {.x=20, .y=40}; // WORKS: Clean and direct interface
```

#### ⚖️ Technical Analysis: When to use each?
While all three forms achieve similar results, the choice depends on the project context:
- **Readability:** Using `typedef` makes the code feel **closer to modern languages**, treating the `struct` as an "object" or user-defined "type."
- **Self-reference:** For data structures like `Linked Lists` or `Trees`, the "Anonymous Structure" does not work, because the pointer to the next node requires a tag name to be declared before the `typedef` is finalized.

```c
// Example of mandatory Tag for lists:
typedef struct Node {
int data;
struct Node *next; // Requires the 'struct Node' tag here
} Node;
```

> 💡 **Developer Insight:**
Opt for using `typedef` for most `structs` to ensure a cleaner API. However, remain aware that keeping the `struct` keyword in certain contexts can help other developers immediately identify that the `type` is a `memory-allocated structure` rather than a simple primitive type. The choice of `typedef` is, above all, an interface design decision.

</details>

---



---

</details>

</details>