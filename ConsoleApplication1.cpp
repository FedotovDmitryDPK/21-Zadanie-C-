#include <iostream>
#include <cmath>
#include "zadachi.h"
#include "Drob.h"
#include "Bank.h"
#include "Time.h"
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

void stroka()
{
    cout <<endl << "----------------------------------------------------------"<< endl<< endl;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    zadachi x;

    cout << "Задачи : " << endl;
    stroka();

    cout << "Задание 1 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task1() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 2:" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task1_() << endl;
    SetConsoleTextAttribute(console, 15 );
    stroka();

    cout << "Задание 3 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task2() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 4 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task3() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 5 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task4() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 6 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task5() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 7 :" << endl;
    SetConsoleTextAttribute(console, 6);    
    if (x.task6() == 1)
    cout << "Число принадлежит диапозону" << endl;
    else cout << "Число не принадлежит диапозону" << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 8 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : ";
    if(x.task6_()==1)
    cout<< "Число принадлежит диапозону" << endl;
    else cout << "Число не принадлежит диапозону" << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 9 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task7() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 10 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task8() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 11 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task9() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 12:" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task10() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 13 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task11() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 14 :" << endl;
    SetConsoleTextAttribute(console, 6);
    x.task12();
    if (x.task13() == 1)
    {
        cout << "Курсор на экране" << endl;
    }
    else
    {
        cout << "Курсор вне экране" << endl;
    }
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 15 :" << endl;
    SetConsoleTextAttribute(console, 6);
    cout << "Ответ : " << x.task14() << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 17 :" << endl;
    SetConsoleTextAttribute(console, 6);
    Time vrem1(0, 0), vrem2(0, 0);
    int hour, minute, second;
    char str[3] = "";
    cout << "Введите первое время: ";
    cin >> hour >> minute >> second;
    cout << endl;
    vrem1.setHour(hour), vrem1.setMinute(minute), vrem1.setSecond(second);
    cout << "Введите второе время: ";
    cin >> hour >> minute >> second;
    cout << endl;
    cout << "Первое время: " << vrem1.getHour() << ":" << vrem1.getMinute() << ":" << vrem1.getSecond() << endl;
    vrem2.setHour(hour), vrem2.setMinute(minute), vrem2.setSecond(second);
    cout << endl;
    cout << "Второе время: " << vrem2.getHour() << ":" << vrem2.getMinute() << ":" << vrem2.getSecond() << endl;
    cout << endl;
    cout << "Разница времени в секундах: " << vrem1.Raznetsa(vrem2) << endl;
    cout << "Сравнение времени: ";
    if (vrem1.Sravnenie(vrem2) == 1)
    {
        cout << "Первое время меньше второго";
    }
    else if (vrem1.Sravnenie(vrem2) == 2)
    {
        cout << "Первое время больше второго";
    }
    else
    {
        cout << "Первое время равно второму";
    }
    cout << endl;
    cout << "Первое время в секундах: " << vrem1.InSec() << endl;
    cout << "Первое время в минутах: " << vrem1.InMin() << endl;
    cout << "Введите число секунд которое вы хотите прибавить к 1 времени: ";
    int sec;
    cin >> sec;
    vrem1 = vrem1.Plus(sec);
    cout << "После добавления секунд" << endl << vrem1.getHour() << " : " << vrem1.getMinute() << " : " << vrem1.getSecond() << endl;
    cout << "Введите число секунд которое вы хотите вычесть из 1 времени: ";
    cin >> sec;
    vrem1 = vrem1.Minus(sec);
    cout << "После вычитания секунд" << endl << vrem1.getHour() << " : " << vrem1.getMinute() << " : " << vrem1.getSecond() << endl;
    cout << endl;

    cout << "Второе время в секундах: " << vrem2.InSec() << endl;
    cout << "Второе время в минутах: " << vrem2.InMin() << endl;
    cout << "Введите число секунд которое вы хотите прибавить к 2 времени: ";
    cin >> sec;
    vrem2 = vrem2.Plus(sec);
    cout << "После добавления секунд" << endl << vrem2.getHour() << " : " << vrem2.getMinute() << " : " << vrem2.getSecond() << endl;
    cout << "Введите число секунд которое вы хотите вычесть из 2 времени: ";
    cin >> sec;
    vrem2 = vrem2.Minus(sec);
    cout << "После вычитания секунд" << endl << vrem2.getHour() << " : " << vrem2.getMinute() << " : " << vrem2.getSecond() << endl;
    cout << endl;
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 18 :" << endl;
    SetConsoleTextAttribute(console, 6);
    Bank y; double sum; bool status = true; string znachVihoda;
    while (status)
    {
        y.read();
        cout << "Введите сумму которую хотите положить на счет: ";
        cin >> sum;
        cout << "Баланс: " << y.changeBalance(sum) << endl;
        cout << "Введите сумму которую хотите снять со счета: ";
        cin >> sum;
        cout << "Баланс: " << y.changeBalance(-sum) << endl;
        cout << "Баланс после зачисления процентов: " << y.procent() << endl;
        cout << "Баланс в Долларах: " << y.balanceInDollars() << endl;
        cout << "Баланс в Евро: " << y.balanceInEuro() << endl;
        cout << "_____________________________________________" << endl;
        cout << "Хотите сменить пользователя (Y/N):" << endl;
        while (true)
        {
            cin >> znachVihoda;
            if (znachVihoda == "y" || znachVihoda == "Y")
            {
                break;
            }
            else if (znachVihoda == "n" || znachVihoda == "N")
            {
                status = false;
                break;
            }
            else
            {
                cout << "Введенное некоректное значение!!!" << endl;
            }
        }
    }
    SetConsoleTextAttribute(console, 15);
    stroka();

    cout << "Задание 20 :" << endl;
    SetConsoleTextAttribute(console, 6);
    Drob a, b;
    cout << "Введите числа для 1 числа: " << endl;
    a.vvod();
    cout << "1 Число: ";
    a.vivod();
    cout << "Введите числа для 2 числа: " << endl;
    b.vvod();
    cout << "2 Число: ";
    b.vivod();
    a.plus(b);
    a.minus(b);
    a.delen(b);
    a.ymnoj(b);
    a.sravnenie(b);
    cout << endl;
    cout << "Другая версия" << endl;
    cout << "Число 1 " << endl;
    a.setNumber();
    cout << "Число 2 " << endl;
    b.setNumber();
    a.plus_(b);
    a.minus_(b);
    a.delen_(b);
    a.ymnoj_(b);
    a.sravnenie_(b);
    SetConsoleTextAttribute(console, 15);
    stroka();
   
}