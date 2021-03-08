#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <Windows.h>

using namespace std;

class Goods
{
private:
	string name;
	int price;
	int count;
	int number;
public:
	string GetName() const { return name; }
	int GetPrice() const { return price; }
	int GetCount() const { return count;  }
	int GetNumder() const { return number; }

	void SetName(string name) { this->name = name; }
	void SetPrice(int price) { this->price = price; }
	void SetCount(int count) { this->count = count; }
	void SetNumber(int number) { this->number = number; }

	void Read(Goods *p, int N, int i);
	void Display(Goods *p, int N);
	bool Init(int Price, int Count, int Number);
	string ToString(int value);
	void ChangePrice(Goods* p, int num, int value);
	void ChangeCount(Goods* p, int num, int value);
};