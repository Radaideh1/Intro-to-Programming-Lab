# Task 7 - C++ Console Application

## 💡 Overview
This project is a comprehensive C++ console application that consolidates multiple assignments into a single unified workspace. It demonstrates key concepts in C++ such as:
- Function overloading
- Default arguments
- Call by reference
- Recursive functions
- Menu-driven programming

The project is divided into three main components: a header file (`header.h`), an implementation file (`implementation.cpp`), and the main driver file (`main.cpp`).

---

## 📁 Project Structure

```

Task7/
│
├── header.h              // Function prototypes
├── implementation.cpp    // Function definitions
└── main.cpp              // Main program with user interface

```

---

## 🧠 Functional Overview

### 🧮 Math Utilities

- **`calculateMath(int)`** → Factorial using iteration  
- **`calculateMath(double base, double exp)`** → Power (base^exp)

- **`swapCharacters(char &a, char &b)`** → Swap two characters (by reference)

- **`calculateSalary(int dailyFee, int days = 30)`** → Calculate salary with optional days (default = 30)

- **`RecursiveSum(int N)`** → Recursively calculate sum from 1 to N

---

### 📐 Geometry Calculations

- **`area(double base, double height)`** → Area of triangle  
- **`area(double radius)`** → Area of circle

- **`cylinder(double radius = 1, double height = 2)`** → Volume of cylinder using default arguments

- **`calcSeriesRecursively(int N)`** → Recursive sum (1 + 2 + ... + N)

- **`printMenu()`** → Displays main menu and returns how many times it has been called

- **`add(int a, int b)`** and **`add(double a, double b)`** → Function overloading for sum of ints and doubles

---

### 📦 3D Calculations

- **`ThreeDVolume(int length)`** → Volume of cube (length³)

- **`ThreeDVolume(double radius, double height)`** → Volume of pyramid (π * r² * h / 3)

- **`Calculator(double a, double b, double &sum, double &diff, double &prod, double &quot)`** → Calculates all four operations using references

---

## 🖥️ Menu System

The program contains multiple menu-driven interfaces merged into one master interface. User can navigate through:

### Main Menu

```

---

1. Compute Factorial
2. Compute Power
3. Swap Characters
4. Calculate Salary
5. Area of Triangle
6. Area of Circle
7. Volume of Cylinder
8. Series Sum (1+2+...+N)
9. 3D Volume <Cube>
10. 3D Volume <Pyramid>
11. Calculator (4 operations)
12. Recursive Sum to N
13. Exit

---

````

Each menu choice corresponds to testing one or more functions described above.

---

## 🧪 How to Compile

Use any C++ compiler (e.g. g++):

```bash
g++ main.cpp implementation.cpp -o Task7App
````

---

## ▶️ How to Run

```bash
./Task7App
```

---

## 🛠️ Notes

* The code is modular and uses function overloading where applicable.
* Recursive and iterative approaches are both demonstrated.
* Default parameters and references are used to show advanced function features in C++.
* Suitable for labs and assignments for programming fundamentals (CPE 150 or similar).

---

## ✍️ Author

Prepared as part of **CPE 150: Introduction to Programming** at **Yarmouk University**, Hijjawi Faculty of Engineering Technology.

---

## 📚 Extras

* Function Overloading
* Recursive Series
* Default Function Parameters
* Menu Count Tracker using `static` variable

---

**Good Luck and Happy Coding!**
