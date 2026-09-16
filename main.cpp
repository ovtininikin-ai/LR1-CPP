#include <iostream>
using namespace std;

int main()
{// Завдання Begin29
    // Розв'язання рівняння Ax + B = 0

    double A, B, x;

    cout << "Begin29" << endl;
    cout << "Enter A (A != 0): ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    // Обчислення кореня рівняння
    x = -B / A;

    // Виведення результату
    cout << "x = " << x << endl;

    cout << endl;

    // Завдання Begin32
    // Знаходження діаметра і площі сектора
 
    // Оголошення змінних
    double R, D, S;
    const double PI = 3.14;      // Значення числа PI

    cout << "Begin32" << endl;
    cout << "Enter R: ";
    cin >> R;

    // Обчислення діаметра
    D = 2 * R;

    // Обчислення площі сектора 90 градусів
    S = PI * R * R / 4;

    // Виведення результатів
    cout << "D = " << D << endl;
    cout << "S = " << S << endl;

    return 0;
}
