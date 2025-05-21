#include <iostream>
using namespace std;
const double π = 3.14159;
// ==============================
// ## main things ##

// for print 
void WelAndPro(int &q);

// ==============================
// ## switch ## 

void Switch_qC1(int qC1);
void Switch_qC2(int qC2);
void Switch_qC3(int qC3);

// ==============================
// ## Math Utilities ##

// (1 in Math Utilities) Factorial Using iteration
int CalculateMateh(int num);
// (2 in Math Utilities) Power (Base^exp)
double CalculateMeth(double base, double exp);
// (3 in Math Utilities) Swap two characters (by reference)
void SwapCharacters(char& a, char& b);
// (4 in Math Utilities) Calculate salary with optional days(default = 30)
int CalculateSalary(int dailyfee, int days = 30);
// (5 in Math Utilities) Recursively calculate sum from 1 to N . 
int RecursiveSum(int N);

// ==============================
// ## Geometry Calculations ##

// (1 in Geometru Calculations) Area of Triangle 
double area(double base, double height);
// (2 in Geometru Calculations) Area of Circle
double area(double radius);
// (3 in Geometru Calculations) The Volume of a cylinder 
double Volume(double radius = 1,double height = 2);

// ==============================
// ## 3D Calculations ## 

// Volume of cube (length^3)
int ThreeDVolum(int lenght);
// Volume of pyramid (π* r^2 * h/3)
double ThreeDVolume(double radius, double height);
// Calculates all four operations using references
void Calculator(double a, double b, double& sum, double& diff, double& prod, double& quot);



