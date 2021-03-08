#include "Goods.h"

bool Goods::Init(int Price, int Count, int Number)
{
	if (Price > 0)
	{
		SetPrice(Price);
		return true;
	}
	if (Count > 0)
	{
		SetCount(Count);
		return true;
	}
	if (Number > 0)
	{
		SetNumber(Number);
		return true;
	}
	else
		return false;
}

void Goods::Read(Goods *p, int N, int i)
{
		cout << " Товар № " << i + 1 << ":" << endl;
		cin.get();
		cin.sync();
		cout << " Назва товару: "; getline(cin, p[i].name);
		cout << " Ціна: "; cin >> p[i].price;
		cout << " Кількість: "; cin >> p[i].count;
		cout << " Номер накладної: "; cin >> p[i].number;
		cout << endl << endl;
		if (Init(p[i].price, p[i].count, p[i].number) == false)
		{
			cout << endl << " Введіть коректне значення! " << endl;
		}
}

void Goods::Display(Goods* p, int N)
{
	cout << "=================================================================================================="
		<< endl;
	cout << "|  №  |     Товар     |      Кількість      |     Ціна шт.    |    № Накладної   |     Сума      |"
		<< endl;
	cout << "=================================================================================================="
		<< endl;

	for (int i = 0; i < N; i++)
	{
		cout << "| " << setw(3) << right << i+1 << " ";
		cout << "| " << setw(14) << left << p[i].name
			<< "| " << setw(20) << left << ToString(p[i].count)
			<< "| " << setw(15) << right << ToString(p[i].price) << " |"
			<< setw(17) << right << ToString(p[i].number) << " |"
		<< setw(14) << right << ToString(p[i].price * p[i].count) << " |";
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------";
		cout << endl;
	}
}

void Goods::ChangePrice(Goods *p, int num, int value) { p[num].price = value; }

void Goods::ChangeCount(Goods* p, int num, int value) { p[num].count = value; }

string Goods::ToString(int value)
{
	stringstream sstr;
	sstr << value;
	return sstr.str();
}