#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number, digit1, digit2, digit3, digit4;

    cout << "Введите четырехзначное число: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Ошибка: Введено не четырехзначное число!" << endl;
        return 1;
    }

    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;

    number = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;

    cout << "Число с переставленными цифрами: " << number << endl;

    return 0;
}