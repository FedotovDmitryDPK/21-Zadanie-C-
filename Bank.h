#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Bank
{
private:
	char   name[50];
	int id;
	double prosent;
	double balance;
	const double DOLLAR = 74.71;
	const double EURO = 79.57;
public:
	double balanceInEuro();// Перевод баланса в Евро
	double balanceInDollars();// Перевод баланса в Доллары 
	double changeBalance(double sum);//Изменение баланса (снятие и положить деньги на баланс)
	double procent();// Вычисление сумму баланса после начисления  процентов 
	void read();// Ввод данных пользователя
};