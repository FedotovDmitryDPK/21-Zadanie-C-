#include "Bank.h"
/////////////////////////////////////////////////
int proverka_(int a);// �������� ��� �� �������� ������
int poloj_(int a);// �������� ��� �� ����� �������������
double balanceInEuro();// ������� ������� � ����
double balanceInDollars();// ������� ������� � ������� 
double changeBalance(double sum);//��������� ������� (������ � �������� ������ �� ������)
double procent();// ���������� ����� ������� ����� ����������  ��������� 
void read();// ���� ������ ������������
/////////////////////////////////////////////////
int proverka_(int a)
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
int poloj_(int a)
{
	while (a < 0)
	{
		cout << "������ ����� ������ ���� �������������" << endl;
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
	cout << "������� ������� ���: ";
	cin >> name;
	cin.getline(name, 50) ;
	cout << "������� ����� �����: ";
	cin >> id;
	id = poloj_(id);
	cout << "������� ������: ";
	cin >> balance;
	balance = poloj_(balance);
	cout << "������� ��������: ";
	cin >> prosent;
	prosent = poloj_(prosent);
}