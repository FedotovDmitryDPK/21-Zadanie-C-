#include <iostream>
#include "zadachi.h"
//////////////////////////////////////////////////////////////////////////////
double proverka(double a); // Проверка являеться ли значение числом для double 
int proverka(int a);// Проверка являеться ли значение числом для int
int poloj(int a);// Проверка являеться ли число положительным для int
double poloj(double a);// Проверка являеться ли число положительным для double
///
double task1();  // возведение числа x_(doublle) в степень y_(int)
double task1_(); // возведение числа x_(doublle) в степень y_(double)
double task2();  // возведение числа x_(doublle) в степень y_(double)
int task3();     // вычисление денежной суммы (номинал купюры * количество)
double task4();  // вычисление стоимости товара (цена товара * количество)
double task5();  // вычисление общей калорийности продукта(калорийность * масса продукта)
double task6();  // проверку заданного числа на принадлежность диапазону
int task6_();    // проверку заданного числа на принадлежность диапазону 
int task7();     // приведение времени в минуты
double task8();  // расстояние точки от начала координат
double task9();  // вычисление начисленной суммы за данное количество дней для заданного месяца
double task10(); // вычисление общей стоимости разговора
double task11(); // умножение на произвольное дробное число типа doublе
void task12(); // изменение координат курсора 
double task13(); // определение курсор на экране или вне
double task14(); // умножение на произвольное целое число типа int     
//////////////////////////////////////////////////////////////////////////////
int poloj(int a) 
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
double poloj(double a)
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
double proverka(double a)
{
    while (!( a) ||(cin.peek() != '\n'))
    {        
        cin.clear();
        while (cin.get() != '\n'); 
        {
            cout << "Введенно некоректоное значение!!! (нужно double)" << endl;
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
            cout << "Введенно некоректоное значение!!! (нужно int)" << endl;
            cin >> a;
        }
        continue;
    }
    return a;
}
double zadachi::task1()// Возведения x (double) в степень y (int)
{
    double x_; int y_;
    cout << "Введите значение x : " ;
    cin >> x_;
    x_ = proverka(x_);
    cout << "Введите значение y : " ;
    cin >> y_;
    y_ = proverka(y_); 
    return pow(x_, y_);
}
double zadachi::task1_()// Возведения x (double) в степень y (double)
{
    double x_, y_;
    cout << "Введите значение x : " ;
    cin >> x_;
    x_ = proverka(x_);
    cout << "Введите значение y : " ;
    cin >> y_;
    y_ = proverka(y_);
    return pow(x_, y_);
}
double zadachi::task2()
{
    int x_, y_;
    cout << "Введите значение x : " ;
    cin >> x_;
    x_ = poloj(x_);
    cout << "Введите значение y : " ;
    cin >> y_;
    y_ = proverka(y_);
    y_ = poloj(y_);  
    return (x_/y_);
}
int zadachi::task3()
{
    int x_, y_;
    cout << "Введите номинал купюры : " ;
    cin >> x_;
    while ( (x_ != 50 && x_ != 100 && x_ != 500
        && x_ != 1000 && x_ != 2000 && x_ != 5000))
    {
        cout << "Ошибка номинала доступныe купюры (50,100,500,1000,2000,5000)"<<endl;
        cin >> x_;
        x_ = proverka(x_);
    }
    cout << "Введите количество купюр : ";
    cin >> y_;
    y_ = poloj(y_);
    return (x_ * y_);
}
double zadachi::task4()
{
    double x_;int y_;
    cout << "Введите цену товара : ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "Введите количество товара : ";
    cin >> y_;
    y_ = poloj(y_);
    return (x_ * y_);
}
double zadachi::task5()
{
    int x_;double y_;
    cout << "Введите калорийность 100 г продукта : ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "Введите массу продукта в килограммах : ";
    cin >> y_;
    y_ = poloj(y_);
    y_ *= 10;
    return (x_ * y_);
}
double zadachi::task6()
{
    double x_, y_, z_;
    cout << "Введите левую границу диапазона, включается в диапазон : ";
    cin >> x_;
    x_ = proverka(x_);
    cout << "Введите правую границу диапазона, не включается в диапазон:  ";
    cin >> y_;
    y_ = proverka(y_);
    cout << "Введите число для проверки на принадлежность к диапозону: ";
    cin >> z_;
    z_ = proverka(z_);
    return(z_ < y_ && z_ > x_);
}
int zadachi::task6_()
{
    int x_, y_; int z_;
    cout << "Введите левую границу диапазона, включается в диапазон : ";
    cin >> x_;
    x_ = proverka(x_);
    cout << "Введите правую границу диапазона, не включается в диапазон: ";
    cin >> y_;
    y_ = proverka(y_);
    cout << "Введите число для проверки на принадлежность к диапозону: ";
    cin >> z_;
    z_ = proverka(z_);
    return(z_ >= x_ && z_ < y_);
    
}
int zadachi::task7()
{
    int x_,  y_;
    cout << "Введите число часов : ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "Введите число минут : ";
    cin >> y_;
    y_ = poloj(y_);
    return (x_*60 + y_);
}
double zadachi::task8()
{
    double x_, y_;
    cout << "Введите координатe х точки на плоскости: ";
    cin >> x_;
    x_ = proverka(x_);
    cout << "Введите координату у точки на плоскости: ";
    cin >> y_;
    y_ = proverka(y_);
    return sqrt(pow(x_,2)*pow(y_,2));
}
double zadachi::task9()
{
    double x_; int y_;
    cout << "Введите оклад: ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "Введите количество отработанных дней в месяце: " ;
    cin >> y_;
    y_ = poloj(y_);
    return (x_ * y_);
}
double zadachi::task10()
{
    int x_; double y_;
    cout << "Введите продолжительность телефонного разговора в минутах: ";
    cin >> x_;
    x_ = poloj(x_);
    cout << "Введите стоимость одной минуты в рублях: ";
    cin >> y_;
    y_ = poloj(y_);
    return (x_ * y_);
}
double zadachi::task11()
{
    double x_, y_, z_;
    cout << "Введите дробное число, целая часть числа:  ";
    cin >> x_;
    x_ = proverka(x_);
    x_ = int(x_);
    cout << "Введите положительное дробное число, дробная часть числа: ";
    cin >> y_;
    y_ = poloj(y_);
    double i2 = y_ - int(y_);
    cout << "Введите дробное число, на которое хотите умножить производную дробь:  ";
    cin >> z_;
    z_ = proverka(z_);
    double drob = log10(y_) + 1;
    return x_+i2;
}
void zadachi::task12()
{
    double x_, y_;
    cout << "Введите координату по вертикали: " << endl;
    cin >> x_;
    x_ = poloj(x_);
    cout << "Введите координату по горизонтали: " << endl;
    cin >> y_;
    y_ = poloj(y_);
}
double zadachi::task13()
{
    double x_, y_;
    cout << "Введите координату по вертикали: " << endl;
    cin >> x_;
    x_ = poloj(x_);
    cout << "Введите координату по горизонтали: " << endl;
    cin >> y_;
    y_ = poloj(y_);
    return((0 < x_ && x_ < 1080) && (0 < y_ && y_ < 1920));
}
double zadachi::task14()
{
    int x_, y_, z_;
    cout << "Введите целое число, целая часть числа:  ";
    cin >> x_;
    x_ = proverka(x_);
    cout << "Введите положительное целое число, дробная часть числа: ";
    cin >> y_;
    y_ = poloj(y_);
    cout << "Введите целое число, на которое хотите умножить производную дробь:  ";
    cin >> z_;
    z_ = proverka(z_);
    int drob = log10(y_) + 1;
    return (x_ + y_ * pow(0.1, drob)) * z_;
}
