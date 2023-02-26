#include <iostream>
#include "zadachi.h"
//////////////////////////////////////////////////////////////////////////////
double proverka(double a); // �������� ��������� �� �������� ������ ��� double 
int proverka(int a);// �������� ��������� �� �������� ������ ��� int
int poloj(int a);// �������� ��������� �� ����� ������������� ��� int
double poloj(double a);// �������� ��������� �� ����� ������������� ��� double
///
double task1();  // ���������� ����� x_(doublle) � ������� y_(int)
double task1_(); // ���������� ����� x_(doublle) � ������� y_(double)
double task2();  // ���������� ����� x_(doublle) � ������� y_(double)
int task3();     // ���������� �������� ����� (������� ������ * ����������)
double task4();  // ���������� ��������� ������ (���� ������ * ����������)
double task5();  // ���������� ����� ������������ ��������(������������ * ����� ��������)
double task6();  // �������� ��������� ����� �� �������������� ���������
int task6_();    // �������� ��������� ����� �� �������������� ��������� 
int task7();     // ���������� ������� � ������
double task8();  // ���������� ����� �� ������ ���������
double task9();  // ���������� ����������� ����� �� ������ ���������� ���� ��� ��������� ������
double task10(); // ���������� ����� ��������� ���������
double task11(); // ��������� �� ������������ ������� ����� ���� doubl�
void task12(); // ��������� ��������� ������� 
double task13(); // ����������� ������ �� ������ ��� ���
double task14(); // ��������� �� ������������ ����� ����� ���� int     
//////////////////////////////////////////////////////////////////////////////
int poloj(int a) 
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
double poloj(double a)
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
double proverka(double a)
{
    while (!( a) ||(cin.peek() != '\n'))
    {        
        cin.clear();
        while (cin.get() != '\n'); 
        {
            cout << "�������� ������������ ��������!!! (����� double)" << endl;
            cin >> a;
        }
        continue;
    }
    return a;
}
int proverka(int a)
{    
    while (!(a) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        {
            cout << "�������� ������������ ��������!!! (����� int)" << endl;
            cin >> a;
        }
        continue;
    }
    return a;
}
double zadachi::task1()// ���������� x (double) � ������� y (int)
{
    double x_; int y_;
    cout << "������� �������� x : " ;
    cin >> x_;
    x_ = proverka(x_);
    cout << "������� �������� y : " ;
    cin >> y_;
    y_ = proverka(y_); 
    return pow(x_, y_);
}
double zadachi::task1_()// ���������� x (double) � ������� y (double)
{
    double x_, y_;
    cout << "������� �������� x : " ;
    cin >> x_;
    x_ = proverka(x_);
    cout << "������� �������� y : " ;
    cin >> y_;
    y_ = proverka(y_);
    return pow(x_, y_);
}
double zadachi::task2()
{
    int x_, y_;
    cout << "������� �������� x : " ;
    cin >> x_;
    x_ = poloj(x_);
    cout << "������� �������� y : " ;
    cin >> y_;
    y_ = proverka(y_);
    y_ = poloj(y_);  
    return (x_/y_);
}
int zadachi::task3()
{
    int x_, y_;
    cout << "������� ������� ������ : " ;
    cin >> x_;
    while ( (x_ != 50 && x_ != 100 && x_ != 500
        && x_ != 1000 && x_ != 2000 && x_ != 5000))
    {
        cout << "������ �������� ��������e ������ (50,100,500,1000,2000,5000)"<<endl;
        cin >> x_;
        x_ = proverka(x_);
    }
    cout << "������� ���������� ����� : ";
    cin >> y_;
    y_ = poloj(y_);
    return (x_ * y_);
}
double zadachi::task4()
{
    double x_;int y_;
    cout << "������� ���� ������ : ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "������� ���������� ������ : ";
    cin >> y_;
    y_ = poloj(y_);
    return (x_ * y_);
}
double zadachi::task5()
{
    int x_;double y_;
    cout << "������� ������������ 100 � �������� : ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "������� ����� �������� � ����������� : ";
    cin >> y_;
    y_ = poloj(y_);
    y_ *= 10;
    return (x_ * y_);
}
double zadachi::task6()
{
    double x_, y_, z_;
    cout << "������� ����� ������� ���������, ���������� � �������� : ";
    cin >> x_;
    x_ = proverka(x_);
    cout << "������� ������ ������� ���������, �� ���������� � ��������:  ";
    cin >> y_;
    y_ = proverka(y_);
    cout << "������� ����� ��� �������� �� �������������� � ���������: ";
    cin >> z_;
    z_ = proverka(z_);
    return(z_ < y_ && z_ > x_);
}
int zadachi::task6_()
{
    int x_, y_; int z_;
    cout << "������� ����� ������� ���������, ���������� � �������� : ";
    cin >> x_;
    x_ = proverka(x_);
    cout << "������� ������ ������� ���������, �� ���������� � ��������: ";
    cin >> y_;
    y_ = proverka(y_);
    cout << "������� ����� ��� �������� �� �������������� � ���������: ";
    cin >> z_;
    z_ = proverka(z_);
    return(z_ >= x_ && z_ < y_);
    
}
int zadachi::task7()
{
    int x_,  y_;
    cout << "������� ����� ����� : ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "������� ����� ����� : ";
    cin >> y_;
    y_ = poloj(y_);
    return (x_*60 + y_);
}
double zadachi::task8()
{
    double x_, y_;
    cout << "������� ���������e � ����� �� ���������: ";
    cin >> x_;
    x_ = proverka(x_);
    cout << "������� ���������� � ����� �� ���������: ";
    cin >> y_;
    y_ = proverka(y_);
    return sqrt(pow(x_,2)*pow(y_,2));
}
double zadachi::task9()
{
    double x_; int y_;
    cout << "������� �����: ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "������� ���������� ������������ ���� � ������: " ;
    cin >> y_;
    y_ = poloj(y_);
    return (x_ * y_);
}
double zadachi::task10()
{
    int x_; double y_;
    cout << "������� ����������������� ����������� ��������� � �������: ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "������� ��������� ����� ������ � ������: ";
    cin >> y_;
    y_ = poloj(y_);
    return (x_ * y_);
}
double zadachi::task11()
{
    double x_, y_, z_;
    cout << "������� ������� �����, ����� ����� �����:  ";
    cin >> x_;
    x_ = proverka(x_);
    x_ = int(x_);
    cout << "������� ������������� ������� �����, ������� ����� �����: ";
    cin >> y_;
    y_ = poloj(y_);
    double i2 = y_ - int(y_);
    cout << "������� ������� �����, �� ������� ������ �������� ����������� �����:  ";
    cin >> z_;
    z_ = proverka(z_);
    double drob = log10(y_) + 1;
    return x_+i2;
}
void zadachi::task12()
{
    double x_, y_;
    cout << "������� ���������� �� ���������: " << endl;
    cin >> x_;
    x_ = poloj(x_);
    cout << "������� ���������� �� �����������: " << endl;
    cin >> y_;
    y_ = poloj(y_);
}
double zadachi::task13()
{
    double x_, y_;
    cout << "������� ���������� �� ���������: " << endl;
    cin >> x_;
    x_ = poloj(x_);
    cout << "������� ���������� �� �����������: " << endl;
    cin >> y_;
    y_ = poloj(y_);
    return((0 < x_ && x_ < 1080) && (0 < y_ && y_ < 1920));
}
double zadachi::task14()
{
    int x_, y_, z_;
    cout << "������� ����� �����, ����� ����� �����:  ";
    cin >> x_;
    x_ = proverka(x_);
    cout << "������� ������������� ����� �����, ������� ����� �����: ";
    cin >> y_;
    y_ = poloj(y_);
    cout << "������� ����� �����, �� ������� ������ �������� ����������� �����:  ";
    cin >> z_;
    z_ = proverka(z_);
    int drob = log10(y_) + 1;
    return (x_ + y_ * pow(0.1, drob)) * z_;
}
