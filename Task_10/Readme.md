# 🧠 C++ Functions Practice Project

This project demonstrates the usage of header files, function implementations, and a menu-driven main program in C++. It is divided into three files:

* `header.h` – contains function prototypes
* `implementation.cpp` – contains function definitions
* `main.cpp` – contains the user interface and function calls

---

## 📁 File Structure

* `header.h`: Contains prototypes for the following functions:

  ```cpp
  int countWords(const char[]);
  void CapitalizeStatement(char[]);
  void print2DArray(const int a[][cols], const int r, const int c);
  void SumRows(const int a[][cols], const int r, const int c);
  ```

* `implementation.cpp`: Implements all functions declared in `header.h`.

* `main.cpp`:

  * Declares and initializes a string using a character array.
  * Declares and initializes a 2D integer array `A[3][2]` using an initializer list.
  * Implements a menu-driven program to test all functions.

---

## 🧩 Function Descriptions

### 1. `int countWords(const char[])`

Returns the number of words in the given string.

---

### 2. `void CapitalizeStatement(char[])`

Capitalizes the **first character of each word** in the string.

**Example:**

```cpp
char c[50] = "hello c++ lab";
CapitalizeStatement(c);
// Output: "Hello C++ Lab"
```

💡 *Hint:* Use functions from the `<cctype>` library:

* `toupper(char c)`: Converts `c` to uppercase if it's a lowercase letter.
* `tolower(char c)`: Converts `c` to lowercase if it's an uppercase letter.

---

### 3. `void print2DArray(const int a[][cols], const int r, const int c)`

Prints the elements of a 2D integer array.

---

### 4. `void SumRows(const int a[][cols], const int r, const int c)`

Calculates and prints the **sum of each row** in the 2D array.

---

## 🖥️ Program Menu

When running the program, a menu like the following appears:

```
1. Count Words  
2. Capitalize Statement  
3. Print 2D Array  
4. Sum of Each Row  
5. Exit  
```

Each option allows you to test and explore a specific function from the project.

---

## 📌 Notes

* Make sure to define `cols` as a constant or macro to be used in 2D array functions.
* Use proper includes: `#include <iostream>`, `#include <cstring>`, `#include <cctype>` as needed.
