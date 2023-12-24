#include <iostream>
using namespace std;


int menu1()
{
    setlocale(0, "");

    int ff = 1;
    int menu, a;
    int order = sizeof(int) * 8;
    unsigned int mask = 1 << order - 1;
    union {
        int integerA;
        float floatB = 3.14;
    };
    union {
        int integerD[2];
        double doubleB = 3.14;
    };
    //while (ff == 1) {


        cout << "Какой пункт вы хотите запустить?\n"
            << "1 - Вывести размера типов данных\n"
            << "2 - Вывести представление int в памяти\n"
            << "3 - Вывести представление float в памяти\n"
            << "4 - Вывести представление double в памяти\n"
            << "5 - Выход\n\n";

        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "int: " << sizeof(int) << endl <<
                "short int: " << sizeof(short int) << endl <<
                "long int: " << sizeof(long int) << endl <<
                "float: " << sizeof(float) << endl <<
                "double: " << sizeof(double) << endl <<
                "long double: " << sizeof(long double) << endl <<
                "char: " << sizeof(char) << endl <<
                "bool: " << sizeof(bool) << endl << endl;
            menu1();
            break;
        case 2:
            cout << "Введите число типа int:\n";
            cin >> a;
            for (int i = 0; i < order; i++) {
                cout << ((a & mask) ? 1 : 0);
                mask = mask >> 1;
                if (i == 0 or i == 7 or i == 15 or i == 23) {
                    cout << ' ';
                }
            }
            cout << "\n\n";
            menu1();
            break;
        case 3:
            cout << "Введите число типа float:\n";
            cin >> floatB;
            mask = 1 << order - 1;
            for (int i = 0; i < order; i++) {
                cout << ((integerA & mask) ? 1 : 0);
                mask = mask >> 1;
                if (i == 0 or i == 1 or i == 8) {
                    cout << ' ';
                }
            }
            cout << "\n\n";
            menu1();
            break;
        case 4:
            cout << "Введите число типа double:\n";
            cin >> doubleB;
            mask = 1 << order - 1;
            for (int i = 1; i >= 0; i--) {
                for (int j = 0; j < 32; j++) {
                    cout << ((integerD[i] & mask) ? 1 : 0);
                    mask = mask >> 1;
                    if (i == 1 && (j == 0 or j == 1 or j == 11)) {
                        cout << ' ';
                    }
                }
                mask = 1 << order - 1;
            }
            cout << "\n\n";
            menu1();
            break;
        case 5:
            break;
        default:
            cout << "Ошибка! Попробуйте еще раз.";
            cout << "\n\n";
            menu1();
            break;
        }
    //}
    return 0;
}