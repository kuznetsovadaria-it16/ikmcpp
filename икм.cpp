#include <iostream>
#include <string>
#include <Windows.h>
#include "заг.h"

using namespace std;



int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    string m, n;

    cout << "Добро пожаловать в программу для нахождения наименьшего общего кратного!" << endl;

    // Ввод первого числа с проверкой
    while (true) {
        cout << "Введите первое число (m >= 10^11): ";
        cin >> m;
        if (digit(m) && stoll(m) >= 100000000000) {
            break;
        }
        else {
            cout << "Ошибка: введите целое число, большее или равное 10^11." << endl;
        }
    }

    // Ввод второго числа с проверкой
    while (true) {
        cout << "Введите второе число (n >= 10^11): ";
        cin >> n;
        if (digit(n) && stoll(n) >= 100000000000) {
            break;
        }
        else {
            cout << "Ошибка: введите целое число, большее или равное 10^11." << endl;
        }
    }

    // Находим НОК
    string result = NOK(m, n);
    cout << "Наименьшее общее кратное чисел " << m << " и " << n << " равно: " << result << endl;

    return 0;
}
