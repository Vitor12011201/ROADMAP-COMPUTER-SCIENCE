# 🖥️ C Language Studies - Beej's Guide

Repository dedicated to learning C focused on Computer Science fundamentals.

## 🛠️ Development Environment
- **OS:** Ubuntu Linux
- **IDE:** CLion
- **Compiler:** GCC

## 🧠 C Philosophy (According to Beej's Guide)
- **Low Level:** C is a language without "seatbelts." It allows you to interface directly with memory and hardware.
- **Connectivity:** Learning C is the foundation for understanding Operating Systems and modern languages (C++, Rust, Go).
- **The Challenge:** The concept of **Pointers** is identified as the main obstacle (memory addresses).

<details>
  <summary><b>🔹 Day 1: How to compile with GCC</b></summary>

---

[Day 1 codes can be found here](./CODE_BY_DAY/DAY_001)

---

- **Step 1** - Navigate to the file's Folder (Directory) using the `cd` command.
- **Step 2** - Compile the file with the command `gcc (file_name.c) -o (executable_name)`.
- **Step 3** - Run the program with the command `./(executable_name)`.

> **Note:** If you don't use `-o`, GCC will create the default `a.out`, which will be overwritten in the next compilation.
</details>

---

<details>
  <summary><b>🔹 Day 2: Hello World</b></summary>

---

[Day 2 codes can be found here](./CODE_BY_DAY/DAY_002)

---

### 📖 The Hello World

#### 🧠 What I learned:
- **Preprocessor (#):** Acts before the compiler. `#include` copies libraries into the code. (Everything starting with # runs before the compiler.)
- **Header Files (.h):** Files like `stdio.h` provide basic tools (such as `printf`).
- **Comments:** Essential for documenting logic (`//` or `/* */`).
- **Execution Flow:** The program always starts at the `main()` function and ends at its last closing brace `}`.
- **\n:** Command to skip to a new line (newline).

#### 🛠️ Revised Compilation Command:
- `gcc -o hello hello.c` (Creates the executable 'hello').
- `./hello` (Executes the file in the current directory).

#### 🧠 Core Concepts:
- **Compilation:** The process of translating source code into an executable.
- **Machine Code:** C produces binaries (1s and 0s) that the CPU executes directly, without intermediaries.
- **C vs Other Languages:** While Python/Java use *bytecode*, C goes straight to the "bare metal" (hardware).
- **GCC:** The program that performs this translation in the Unix/Linux environment.
- **RAM Memory:** Functions like a giant array of bytes. Each byte has an "index" called an **Address**.
- **Variable:** Just a human-readable name that points to a specific address in memory.
- **Why use names?:** Because it's much easier to remember `price` than the hexadecimal address `0xAF23`.
- **Connection to Pointers:** Understanding that variables occupy addresses is the foundation for understanding pointers (which store these addresses).

> **Note:** C can be interpreted, but it is almost always compiled to ensure the maximum speed the language offers.
</details>

---

<details>
  <summary><b>🔹 Day 3: Variables and Declarations</b></summary>

---

[Day 3 codes can be found here](./CODE_BY_DAY/DAY_003)

---

#### 🧠 What to expect:
- Learn how to classify program elements.
- Understand how C handles different data types and instructions.

---

<details>
<summary><b> 📦 Variables (Section 3.1.0):</b></summary>
<br>

### 💾 What is a Variable? (Low-Level View)

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

[Image showing a sequence of memory cells with addresses like 0x100, 0x101, etc., highlighting a block of 4 cells labeled as 'Variable X']

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

[Section 3.1.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1-1)-VARIABLE-NAMES)

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

[Section 3.1.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1-2)-VARIABLE-TYPES)

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

[Section 3.1.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-1-3)-BOOLEAN-TYPES)

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

---

<details>
<summary><b>🔢 Arithmetic Operators (Section 3.2.1)</b></summary>
<br>

---

[Section 3.2.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2-1)-ARITHMETIC-OPERATORS)

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

[Section 3.2.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2-2)-TERNARY-OPERATOR)

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

[Section 3.2.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2-3)-INCREMENT-AND-DECREMENT)

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

[Section 3.2.4 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2-4)-COMMA-OPERATOR)

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

[Section 3.2.5 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2-5)-CONDITIONAL-OPERATORS)

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

[Section 3.2.6 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2-6)-LOGICAL-OPERATORS)

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

[Section 3.2.7 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-2-7)-SIZEOF-OPERATOR-(Measuring-Memory))

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

---

<details>
 <summary><b>🚦 Flow Control (Section 3.3.0) </b></summary>
<br>

---

[Section 3.3.0 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3-0)-CONTROL-FLOW)

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

[Section 3.3.1 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3-1)-STRUCTURE-(if-else))

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

[Section 3.3.2 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3-2)-WHILE-(LOOP))

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

[Section 3.3.3 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3-3)-DO-WHILE-(CONTROL-FLOW))

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

[Section 3.3.4 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3-4)-FOR-(LOOP))

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

[Section 3.3.5 codes can be found here](./CODE_BY_DAY/DAY_003/(SECTION-3-3-5)-SWITCH-CASE)

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

#### 🎓 Guidance:
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



---

</details>