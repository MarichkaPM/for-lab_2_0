// Lab_2_0.cpp
// �������� ������
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 20



#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double m; //�������  ��������
	double n; //������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "m = ";cin >> m; cout << endl;
	cout << "n = "; cin >> n;cout << endl;


	z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(m * m * m * n) + n * m + m * m - m);
	z2 = (sqrt(m) - sqrt(n)) / m;
	cout << "z1= " << z1 << endl;
	cout << "z2= " << z2 << endl;

	system("pause");

	return 0;
}
