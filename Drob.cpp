#include "Drob.h"
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////////////
long proverka(long a); // �������� ��������� �� �������� ������ 
short proverka(short a); // �������� ��������� �� �������� ������ 
short poloj(short a);// �������� ��������� �� ����� ������������� 
///1 ������ 
void vvod(); // ���� ����������
void vivod();// ����� ���������
void plus(Drob b);// �������� ���������
void delen(Drob b);// ������� ���������
void minus(Drob b);// �������� ���������
void ymnoj(Drob b);// ��������� ���������
void sravnenie(Drob b);// �������� ���������
///2 ������
void setNumber();// ���������� ����� ����� � �������
void plus_(Drob b);// �������� ���������
void delen_(Drob b);// ������� ���������
void minus_(Drob b);// �������� ���������
void ymnoj_(Drob b);// ��������� ���������
void sravnenie_(Drob b);// �������� ���������
/////////////////////////////////////////////////////////////////////////////
short poloj(short a)
{
    a = proverka(a);
    while (a < 0)
    {
        cout << "������ ����� ������ ���� �������������" << endl;
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
            cout << "�������� ������������ ��������!!!" << endl;
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
            cout << "�������� ������������ ��������!!!" << endl;
            cin >> a;
        }
        continue;
    }
    return a;
}

void Drob::vvod() {
    cout << "����� �����: ";
    cin >> first;
    first = proverka(first);
    cout << "������� �����: ";
    cin >> second;
    second = poloj(second);
}
void Drob::vivod()
{
    cout << first << "." << second << endl;
}
void Drob::plus(Drob b)
{
    cout << "��������: " << first + b.first << "." << second + b.second << endl;
}
void Drob::delen(Drob b)
{
    cout << "�������: " << first / b.first << "." << second / b.second << endl;
}
void Drob::minus(Drob b)
{
    cout << "���������: " << first - b.first << "." << second - b.second << endl;
}
void Drob::ymnoj(Drob b)
{
    cout << "���������: " << first * b.first << "." << second * b.second << endl;
}
void Drob::sravnenie(Drob b)
{
    if (first > b.first)
    {
        cout << "������ ����� ������ ������� " << endl;
    }
    else if (first < b.first)
    {
        cout << "������ ����� ������ ������� " << endl;
    }
    else if (first == b.first)
    {
        if (second > b.second)
        {
            cout << "������ ����� ������ ������� " << endl;
        }
        else if (second < b.second)
        {
            cout << "������ ����� ������ ������� " << endl;
        }
        else
        {
            cout << "����� �����" << endl;
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
    cout << "��������: " << number + b.number << endl;
}
void Drob::delen_(Drob b)
{
    cout << "�������: " << number / b.number << endl;
}
void Drob::minus_(Drob b)
{
    cout << "���������: " << number - b.number << endl;
}
void Drob::ymnoj_(Drob b)
{
    cout << "���������: " << number * b.number << endl;
}
void Drob::sravnenie_(Drob b)
{
    if (number > b.number)
    {
        cout << "������ ����� ������ ������� " << endl;
    }
    else if (number < b.number)
    {
        cout << "������ ����� ������ ������� " << endl;
    }
    else if (number == b.number)
    {

        cout << "����� �����" << endl;


    }

}