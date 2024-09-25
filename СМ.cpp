#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number, sum = 0;

    cout << "Введите числа (введите 0 для завершения):" << endl;

    while (true) {
        cin >> number;

        if (number == 0) {
            break;
        }

        sum += number;
    }

    cout << "Сумма всех чисел: " << sum << endl;

    return 0;
}