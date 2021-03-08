#include "Goods.h"
#include "Date.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N, MenuItem;
	cout << " ������ ������� ����� �������: "; cin >> N;

	Goods x;
	Date y;
	Goods* p = new Goods[N];
	Date* d = new Date[N];

	do {
		cout << endl << endl << endl;
		cout << "������� ��:" << endl << endl;
		cout << " [1] - �������� ����� � ���������" << endl;
		cout << " [2] - ���� ����� �� �����" << endl;
		cout << " [3] - ������ ������� ������" << endl;
		cout << " [4] - ������ ���� ������" << endl;
		cout << " [5] - ��������� � ������" << endl;
		cout << endl << endl;
		cout << " [0] - ����� �� ���������� ������ ��������" << endl << endl;
		cout << "������ ��������: "; cin >> MenuItem;
		cout << endl << endl;

		switch (MenuItem)
		{
		case 1:
			y.Read(d, p, N);
			break;
		case 2:
			y.Display(d, p, N);
			break;
		case 3:
			int num_1; int value_1;
			do {
				cout << " ������ ����� �����: "; cin >> num_1;
				if (N < num_1)
				{
					cout << " ����� �� �������� " << num_1 << " �� ����! " << endl;
				}
			} while (N < num_1);
			cout << " ���� �������: "; cin >> value_1;
			x.ChangeCount(p, num_1-1, value_1);
			break;
		case 4:
			int num_2; int value_2;
			do {
				cout << " ������ ����� �����: "; cin >> num_2;
				if (N < num_2)
				{
					cout << " ����� �� �������� " << num_2 << " �� ����! " << endl;
				}
			} while (N < num_2);
			cout << " ���� ����: "; cin >> value_2;
			x.ChangePrice(p, num_2-1, value_2);
			break;
		case 5:
			y.WorkWithDate(d, N);
			break;
		case 0:
			break;
		default:
			cout << "�� ����� ��������� ��������! "
				"��� ������ ����� - ����� ��������� ������ ����" << endl;
		}
	} while (MenuItem != 0);
	return 0;
}