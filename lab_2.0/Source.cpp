// Lab_02.cpp
// Павлюк Максим Леонідович >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 10
#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    const double PI = 3.141592653589793238;
    double a;// вхідний параметр
    cout << "x = ";
    cin >> a;
     double z1 = sin(PI / 2 + 3 * a) / (1 - sin(3 * a - PI));  // результат обчислення 1-го виразу
    // double z2 = 1 / tan(5 * PI / 4 + 3 * a / 2); // результат обчислення 2-го виразу
    cout << "z1 = " << z1 << endl;
    // cout << "z2 = " << z2 << endl;


    return 0;
}