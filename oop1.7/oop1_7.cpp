#include "Goods.h"
#include "Date.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N, MenuItem;
	cout << " Введіть кількість полей таблиці: "; cin >> N;

	Goods x;
	Date y;
	Goods* p = new Goods[N];
	Date* d = new Date[N];

	do {
		cout << endl << endl << endl;
		cout << "Виберіть дію:" << endl << endl;
		cout << " [1] - Введення даних з клавіатури" << endl;
		cout << " [2] - Вивід даних на екран" << endl;
		cout << " [3] - Змінити кількість товару" << endl;
		cout << " [4] - Змінити ціну товару" << endl;
		cout << " [5] - Працювати з датами" << endl;
		cout << endl << endl;
		cout << " [0] - вихід та завершення роботи програми" << endl << endl;
		cout << "Введіть значення: "; cin >> MenuItem;
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
				cout << " Введіть номер рядка: "; cin >> num_1;
				if (N < num_1)
				{
					cout << " Рядка під номеером " << num_1 << " не існує! " << endl;
				}
			} while (N < num_1);
			cout << " Нова кількість: "; cin >> value_1;
			x.ChangeCount(p, num_1-1, value_1);
			break;
		case 4:
			int num_2; int value_2;
			do {
				cout << " Введіть номер рядка: "; cin >> num_2;
				if (N < num_2)
				{
					cout << " Рядка під номеером " << num_2 << " не існує! " << endl;
				}
			} while (N < num_2);
			cout << " Нова ціна: "; cin >> value_2;
			x.ChangePrice(p, num_2-1, value_2);
			break;
		case 5:
			y.WorkWithDate(d, N);
			break;
		case 0:
			break;
		default:
			cout << "Ви ввели помилкове значення! "
				"Слід ввести число - номер вибраного пункту меню" << endl;
		}
	} while (MenuItem != 0);
	return 0;
}