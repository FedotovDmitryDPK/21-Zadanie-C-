#include "Drob.h"
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////////////
long proverka(long a); // Проверка являеться ли значение числом 
short proverka(short a); // Проверка являеться ли значение числом 
short poloj(short a);// Проверка являеться ли число положительным 
///1 версия 
void vvod(); // Ввод переменных
void vivod();// Вывод переменых
void plus(Drob b);// Сложение переменых
void delen(Drob b);// Деление переменых
void minus(Drob b);// Вычитане переменых
void ymnoj(Drob b);// Умножение переменых
void sravnenie(Drob b);// Сложение переменых
///2 версия
void setNumber();// Присвоение целой части и дробной
void plus_(Drob b);// Сложение переменых
void delen_(Drob b);// Деление переменых
void minus_(Drob b);// Вычитане переменых
void ymnoj_(Drob b);// Умножение переменых
void sravnenie_(Drob b);// Сложение переменых
/////////////////////////////////////////////////////////////////////////////
short poloj(short a)
{
    a = proverka(a);
    while (a < 0)
    {
        cout << "Ошибка число должно быть положительным" << endl;
        cin >> a;
        a = proverka(a);
    }
    return a;
}
long proverka(long a)
{
    while (!(a) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        {
            cout << "Введенно некоректоное значение!!!" << endl;
            cin >> a;
        }
        continue;
    }
    return a;
}
short proverka(short a)
{
    while (!(a) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        {
            cout << "Введенно некоректоное значение!!!" << endl;
            cin >> a;
        }
        continue;
    }
    return a;
}

void Drob::vvod() {
    cout << "Целая часть: ";
    cin >> first;
    first = proverka(first);
    cout << "Дробная часть: ";
    cin >> second;
    second = poloj(second);
}
void Drob::vivod()
{
    cout << first << "." << second << endl;
}
void Drob::plus(Drob b)
{
    cout << "Сложение: " << first + b.first << "." << second + b.second << endl;
}
void Drob::delen(Drob b)
{
    cout << "Деление: " << first / b.first << "." << second / b.second << endl;
}
void Drob::minus(Drob b)
{
    cout << "Вычитание: " << first - b.first << "." << second - b.second << endl;
}
void Drob::ymnoj(Drob b)
{
    cout << "Умножение: " << first * b.first << "." << second * b.second << endl;
}
void Drob::sravnenie(Drob b)
{
    if (first > b.first)
    {
        cout << "Первое число больше второго " << endl;
    }
    else if (first < b.first)
    {
        cout << "Первое число меньще второго " << endl;
    }
    else if (first == b.first)
    {
        if (second > b.second)
        {
            cout << "Первое число больше второго " << endl;
        }
        else if (second < b.second)
        {
            cout << "Первое число меньще второго " << endl;
        }
        else
        {
            cout << "Числа равны" << endl;
        }

    }

}

void Drob::setNumber()
{
    int drob = log10(second) + 1;
    number = (first + second * pow(0.1, drob));
    cout << number << endl;
}
void Drob::plus_(Drob b)
{
    cout << "Сложение: " << number + b.number << endl;
}
void Drob::delen_(Drob b)
{
    cout << "Деление: " << number / b.number << endl;
}
void Drob::minus_(Drob b)
{
    cout << "Вычитание: " << number - b.number << endl;
}
void Drob::ymnoj_(Drob b)
{
    cout << "Умножение: " << number * b.number << endl;
}
void Drob::sravnenie_(Drob b)
{
    if (number > b.number)
    {
        cout << "Первое число больше второго " << endl;
    }
    else if (number < b.number)
    {
        cout << "Первое число меньще второго " << endl;
    }
    else if (number == b.number)
    {

        cout << "Числа равны" << endl;


    }

}