#include <iostream>
#include <string>
#include <cmath>
#define MAX 999

using namespace std;

void skital (string stroka)
{
    unsigned int sum,sum1,kolvo=0;
    sum=stroka.length();
    sum1 = ceil (sqrt (sum));
    const int n = sum1;
    const int m = sum1;
    char matr[n][m];
    for (unsigned int i = 0; i < sum1; i++) {
        for(unsigned int j = 0; j < sum1; j++) {
            matr[i][j] = '1';
        }
    }
    for (unsigned int i = 0; i < sum1; i++) {
        for(unsigned int j = 0; j < sum1; j++) {
            if (i*m +j < sum) {
                matr[i][j] = stroka [(i)*m +j];
            }
        }
    }
    cout<< "��� ��� ����������"<< endl;
    for (unsigned int j = 0; j < sum1 ; j++) {
        for(unsigned int i = 0; i < sum1; i++) {
            cout << matr[i][j];

        }
    }
    cout<<endl;
    cout<< "�������� ���"<< endl;
    for (unsigned int j = 0; j < sum1 ; j++) {
        for(unsigned int i = 0; i < sum1; i++) {
            if (matr[i][j] != '1')
                cout << matr[i][j];

        }
    }
    cout<<endl;

}

int main()
{
    string strochka;
    cout<< "������� ������ ��� ���������� ��� �� ��������";
    cin >> strochka;
    skital (strochka);
    cout<<"������� ������� �� ������ � ���� ��� ��� ���������� - ����������� �������� ��������� ������� ��������� ������, ��� ����� ���������� ������� ��� ������, ��� ����������� � �������� ����...";
    return 0;
}
