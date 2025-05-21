
---

# Function-Based Menu Programs - C++

This project contains a combination of two C++ menu-driven applications. Each provides a set of functionalities accessed through user interaction via a terminal menu. The programs demonstrate use of **functions**, **mathematical computations**, and **character evaluations**.

## Tasks Overview

### 🔹 Common Structure
Each program includes:

- A **`printMenu`** function that displays a specific menu.
- A **`main`** function that runs an infinite loop until the user chooses to exit.
- Dedicated functions to handle the individual tasks selected from the menu.

---

## 🔸 Menu Set 1: Character & Function Evaluation

### Menu:
```
Main Menu ----------------
1- is Small
2- Calculate Function
3- Exit.
```

### Functions:

- **`isSmall(char ch)`**  
  Takes a character input and returns `true` if it's a lowercase letter, otherwise returns `false`.

- **`calculateFunction(double x)`**  
  Returns the value of the function **F(x) = x * sin(x)**.

### Behavior:

- **Choice 1**: Prompts the user to enter a character, then determines if it's a small letter using `isSmall`.
- **Choice 2**: Prompts the user to enter three values: `start`, `end`, and `step`, and prints the value of `F(x)` for each x in the range using `calculateFunction`.
- **Choice 3**: Terminates the program.

---

## 🔸 Menu Set 2: Number Comparison & Summation

### Menu:
```
Main Menu ----------------
1- Minimum number
2- Calculate equation
3- Exit.
```

### Functions:

- **`minNumber(int a, int b, int c)`**  
  Returns the **minimum number** among three user-provided integers.

- **`calcEquation(int T)`**  
  Calculates and returns the value of:  
  **F = 2.5 × (1² + 2² + 3² + ... + T²)**

### Behavior:

- **Choice 1**: Prompts the user to enter three numbers, and uses `minNumber` to determine and print the smallest.
- **Choice 2**: Prompts the user to enter a number `T` and calculates the value of the equation using `calcEquation`.
- **Choice 3**: Terminates the program.
