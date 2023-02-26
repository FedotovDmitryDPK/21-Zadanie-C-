#include <iostream>
#include <cmath>
#include "Time.h"
//////////////////////////////////////////////////////////////////////
int getHour();// �������� �������� �����
int getMinute();// �������� �������� �����
int getSecond();// �������� �������� ������
void setSecond(int sc);// ��������� �������� ������
void setHour(int cl);// ��������� �������� �����
void setMinute(int mn);// ��������� �������� �����
Time Plus(int);// ��������� ������� �� �������
Time Minus(int);// ������� ������� �� �������
int Raznetsa(Time const& p);// ����� ������� ����� ��������� � ��������
int Sravnenie(Time const& p);// ��������� �������
int InSec();// ��������� ����� � �������
int InMin();// ��������� ����� � ������ 
//////////////////////////////////////////////////////////////////////

void Time::setHour(int x)
{
    hour = x;
}
void Time::setMinute(int x)
{
    minute = x;
}
void Time::setSecond(int x)
{
    second = x;
}

Time Time::Plus(int seconds) {
    int h, m;
    h = int(seconds / 3600);
    hour += h;
    m = int((seconds - h * 3600) / 60);
    minute += m;
    second += seconds - (h * 3600) - (m * 60);
    if (second >= 60)
    {
        second = second - 60;
        minute++;
    }
    if (minute >= 60)
    {
        minute = minute - 60;
        hour++;
    }

    return Time(hour, minute, second);
}
Time Time::Minus(int seconds) {
    int h, m;
    h = int(seconds / 3600);
    hour -= h;
    m = int((seconds - h * 3600) / 60);
    minute -= m;
    second -= seconds - (h * 3600) - (m * 60);

    return Time(hour, minute, second);
}

int Time::Raznetsa(Time const& x) {
    if (x.hour >= hour && x.minute >= minute) {
        return (((x.hour - hour) * 60) + (x.minute - minute)) * 60;
    }
    else if (x.hour > hour && x.minute < minute) {
        return (((x.hour - hour - 1) * 60) + (x.minute - minute + 60)) * 60;
    }
    else if (x.hour <= hour && x.minute <= minute) {
        return (((hour - x.hour) * 60) + (minute - x.minute)) * 60;
    }
    else if (x.hour<hour && x.minute>minute) {
        return (((x.hour - x.hour - 1) * 60) + (minute - x.minute + 60)) * 60;
    }
}
int Time::Sravnenie(Time const& x) {
    if (x.hour > hour && (x.minute > minute || x.minute >= minute)) {
        return 1;
    }
    else if (x.hour < hour && x.minute > minute) {
        return 1;
    }
    else if (x.hour < hour && (minute > x.minute || minute >= x.minute)) {
        return 2;
    }
    else return 3;
}
int Time::InSec() {
    return (hour * 3600) + (minute * 60) + second;
}
int Time::InMin() {

    return (hour * 60) + minute + (second / 60);
}

int Time::getHour()
{
    return hour;
}
int Time::getSecond()
{
    return second;
}
int Time::getMinute()
{
    return minute;
}

Time::Time(int hour_, int minute_, int second_) : hour(hour_), minute(minute_), second(second_)
{ }