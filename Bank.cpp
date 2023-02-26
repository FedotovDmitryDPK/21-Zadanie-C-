#include "Bank.h"
/////////////////////////////////////////////////
int proverka_(int a);// Проверка явл ли значение числом
int poloj_(int a);// Проверка явл ли число положительным
double balanceInEuro();// Перевод баланса в Евро
double balanceInDollars();// Перевод баланса в Доллары 
double changeBalance(double sum);//Изменение баланса (снятие и положить деньги на баланс)
double procent();// Вычисление сумму баланса после начисления  процентов 
void read();// Ввод данных пользователя
/////////////////////////////////////////////////
int proverka_(int a)
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
int poloj_(int a)
{
	while (a < 0)
	{
		cout << "Ошибка число должно быть положительным" << endl;
		cin >> a;
		a = proverka_(a);
	}
	return a;
}
double Bank::balanceInEuro()
{
	return balance / EURO;
}
double Bank::balanceInDollars()
{
	return balance / DOLLAR;
}
double Bank::changeBalance(double sum)
{
	balance = balance + sum;
	return balance;
}
double Bank::procent()
{
	balance = balance + ((balance * prosent) / 100);
	return balance;
}
void Bank::read()
{
	cout << "Введите Фимилию Имя: ";
	cin >> name;
	cin.getline(name, 50) ;
	cout << "Введите номер счета: ";
	cin >> id;
	id = poloj_(id);
	cout << "Введите баланс: ";
	cin >> balance;
	balance = poloj_(balance);
	cout << "Введите проценты: ";
	cin >> prosent;
	prosent = poloj_(prosent);
}