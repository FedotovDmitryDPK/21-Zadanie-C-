#pragma once
class Drob
{
private:

protected:
    long first;
    unsigned short second;
    float number;
public:
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
};