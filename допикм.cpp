#include <iostream>
#include <string>
#include "заг.h"

using namespace std;

// Функция для нахождения НОД с использованием алгоритма Евклида
long long NOD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для нахождения НОК
string NOK(const string& a, const string& b) {
    long long num1 = stoll(a);
    long long num2 = stoll(b);
    long long gcd_value = NOD(num1, num2);
    long long lcmvalue = (num1 / gcd_value) * num2; // Чтобы избежать переполнения
    return to_string(lcmvalue);
}

// Функция для проверки ввода
bool isvalidinput(const string& input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false; // Если есть нецифровой символ, возвращаем false
        }
    }
    return true; // Ввод корректен
}