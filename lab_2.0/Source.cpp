// Lab_02.cpp
// ������ ������ ��������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 10
#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    const double PI = 3.141592653589793238;
    double a;// ������� ��������
    cout << "x = ";
    cin >> a;
     double z1 = sin(PI / 2 + 3 * a) / (1 - sin(3 * a - PI));  // ��������� ���������� 1-�� ������
    // double z2 = 1 / tan(5 * PI / 4 + 3 * a / 2); // ��������� ���������� 2-�� ������
    cout << "z1 = " << z1 << endl;
    // cout << "z2 = " << z2 << endl;


    return 0;
}