#pragma once
#include <iostream>
#include <conio.h>

using namespace std;

class Time {
private:
    int hour, minute, second;
public:
    Time(int clock = 0, int min = 0, int sec = 0);
    int getHour();// Получить значение часов
    int getMinute();// Получить значение минут
    int getSecond();// Получить значение секунд
    void setSecond(int sc);// Присвоить значение секунд
    void setHour(int cl);// Присвоить значение часов
    void setMinute(int mn);// Присвоить значение минут
    Time Plus(int);// Прибавить секунды ко времени
    Time Minus(int);// Вычесть секунды из времени
    int Raznetsa(Time const& p);// Найти разнецу между временами в секундах
    int Sravnenie(Time const& p);// Сравнение времени
    int InSec();// Перевести время в секунды
    int InMin();// Перевести время в минуты 
};