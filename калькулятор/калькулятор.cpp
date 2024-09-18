#include <iostream>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    double one, two, result;
    char n;
    std::cout << "Введите a:" << std::endl;
    std::cin >> one;
    std::cout << "Введите b:" << std::endl;
    std::cin >> two;
    std::cout << "Выберите одну из операций:" << std::endl;
    std::cout << " +" << std::endl;
    std::cout << " -" << std::endl;
    std::cout << " *" << std::endl;
    std::cout << " /" << std::endl;
    std::cin >> n;
    if (!strcmp(&n, "+"))
    {
        result = one + two;
        std::cout << "Сумма a+b:" << result << std::endl;
    }

    if (!strcmp(&n, "-"))
    {
        result = one - two;
        std::cout << "Разность a-b:" << result << std::endl;
    }
    if (!strcmp(&n, "*"))
    {
        result = one * two;
        std::cout << "Произведение a*b:" << result << std::endl;
    }
    if (!strcmp(&n, "/"))
    {
        result = one / two;
        std::cout << "Частное a/b:" << result << std::endl;
    }


    _getch();
    return 0;
}
