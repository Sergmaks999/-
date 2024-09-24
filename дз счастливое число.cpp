#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int number, firstSum = 0, secondSum = 0;

    cout << "Введите шестизначное число: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "Ошибка: Введено не шестизначное число!" << endl;
        return 1;
    }

    firstSum = (number / 100000) + ((number / 10000) % 10) + ((number / 1000) % 10);
    secondSum = (number / 100) % 10 + (number / 10) % 10 + number % 10;

    if (firstSum == secondSum) {
        cout << "Число счастливое!" << endl;
    }
    else {
        cout << "Число не счастливое!" << endl;
    }

    return 0;
}