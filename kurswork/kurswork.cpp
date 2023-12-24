#include <iostream>
#include "lab№1.cpp"
#include "lab№2.cpp"
#include "laba№3.cpp"
#include "laba4.cpp"

using namespace std;

int main()
{
    setlocale(0, "");
    system("cls");
    int lab;
    cout << "Выберите номер лабораторной работы 1-4. Введите 0, чтобы выйти.\n";
    cin >> lab;
    system("cls");
    switch (lab)
    {
    case 1:
        menu1();
        main();
        break;
    case 2:
        menu2();
        main();
        break;
    case 3:
        menu3();
        main();
        break;
    case 4:
        menu4();
        main();
        break;
    case 0:
        exit(1);
    default:
        main();
        break;
    }
    return 0;
}