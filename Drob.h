#pragma once
class Drob
{
private:

protected:
    long first;
    unsigned short second;
    float number;
public:
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
};