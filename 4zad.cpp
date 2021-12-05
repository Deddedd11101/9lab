// 4zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctype.h>
#include <Windows.h>
using namespace std;
void checktype(char c[]);
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c[10];
	gets_s(c);
	checktype(c);
}

void checktype(char c[])
{ cout << "Результат: ";
	for (int i = 0; c[i] != '\0'; i++) {
		cout << "Номер символа " << i << '\n';
		if (isalpha(c[i]) != 0)
		{
			cout << "латинская буква";
		}
		if (isdigit(c[i]) != 0)
		{
			cout << ", десятичная цифра";

		}
		if (isxdigit(c[i]) != 0)
		{
			cout << ", шестнадцатеричная цифра";

		}
		if (isalnum(c[i]) != 0)
		{
			cout << ", латинская буква или цифра";

		}

		if (isprint(c[i]) != 0)
		{
			cout << ", печатаемый символ, включая пробел";

		}
		if (ispunct(c[i]) != 0)
		{
			cout << ", знак пунктуации";

		}
		if (isspace(c[i]) != 0)
		{
			cout << ", пробел, новая строка, табуляция";

		}
		if (isupper(c[i]) != 0)
		{
			cout << ", буква верхнего регистра";

		}
		if (islower(c[i]) != 0)
		{
			cout << ", буква нижнего регистра";

		}
		cout << '\n';
	}
	
	
}
