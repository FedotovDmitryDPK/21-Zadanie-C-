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
	double balanceInEuro();// ������� ������� � ����
	double balanceInDollars();// ������� ������� � ������� 
	double changeBalance(double sum);//��������� ������� (������ � �������� ������ �� ������)
	double procent();// ���������� ����� ������� ����� ����������  ��������� 
	void read();// ���� ������ ������������
};