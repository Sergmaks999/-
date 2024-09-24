#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numbers[7];
    int maxNumber;

    // Ввод чисел
    cout << "Введите 7 целых чисел:" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }

    // Нахождение максимального числа
    maxNumber = numbers[0]; // Инициализация maxNumber первым числом
    for (int i = 1; i < 7; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // Вывод максимального числа
    cout << "Максимальное число: " << maxNumber << endl;

    return 0;
}