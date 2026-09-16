#include <iostream>
using namespace std;

int main()
{// Завдання Begin29
    // Розв'язання рівняння Ax + B = 0

    // декларація змінних
    double A, B, x;

    // комунікація з користувачем
    cout << "Begin29" << endl;

    // Введення значень для змінних
    cout << "Enter A (A != 0): ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    // Виведення записаних значень на дисплей
    cout << "Entered value A: " << A << endl;
    cout << "Entered value B: " << B << endl;

    // Обчислення кореня рівняння
    x = -B / A;

    // Виведення результату
    cout << "x = " << x << endl;

    cout << endl;

    // Завдання Begin32
    // Знаходження діаметра і площі сектора

    // коментар має бути
    double R, D, S;
    const double PI = 3.14;                        // коментар має бути

    // комунікація з користувачем
    cout << "Begin32" << endl;
    
    // Введення значень для змінних
    cout << "Enter R: ";
    cin >> R;
    
    // Виведення записаних значень на дисплей
    cout << "Entered value R: " << R << endl;
    
    // Обчислення діаметра
    D = 2 * R;

    // Обчислення площі сектора 90 градусів
    S = (PI * (R * R)) / 4;

    // Виведення результатів
    cout << "D = " << D << endl;
    cout << "S = " << S << endl;

    return 0;
}
