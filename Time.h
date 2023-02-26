#pragma once
#include <iostream>
#include <conio.h>

using namespace std;

class Time {
private:
    int hour, minute, second;
public:
    Time(int clock = 0, int min = 0, int sec = 0);
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
};