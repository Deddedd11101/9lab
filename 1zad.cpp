// 1zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdio.h"
#include <cstdio>
#include "iostream"
#include <conio.h>
#include <Windows.h>
using namespace std;
int cyclefor(char len[]);
int cyclewhile(char len[]);
int cycledo(char len[]);
void strcpy_for(char* arr, char* arr1);
void strcpy_do_while(char* arr, char* arr1);
void strcpy_while(char* arr, char* arr1);
void Counter(char len[]);
void Swapper(char* arr);
char Swapper2(char* arr1);
constexpr auto LEN =  10;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char arr[100], arr1[100];
	cout << "\nNomer 1\n";
	gets_s(arr);
	cyclefor(arr);
	cycledo(arr);
	cyclewhile(arr);
	cout << "\n" << "Nomer 2:" << "\n";
	strcpy_while(arr, arr1);
	puts(arr1);
	strcpy_for(arr, arr1);
	puts(arr1);
	strcpy_do_while(arr, arr1);
	puts(arr1);
	cout << "\nNomer 3\n";
	Counter(arr);
	cout << "\nNomer 4\n";
	Swapper(arr);
	Swapper2(arr1);
}
int cyclefor(char len[])
{
	int count = 0;
	for (int i = 0; len[i]; i++)
	{
		count++;
	}
	cout << "Cycle for :" << count;
	return count;
}
int cycledo (char len [])
{
	int i = 0;
	int count = 0;
	do
	{
		i++;
		count++;
	} while (len[i]);
	cout << "\n" << "Cycle do :" << count;
	return count;
	}
int cyclewhile(char len[])
{
	int i = 0;
	int count = 0;
	while (len[i])
	{
		i++;
		count++;
	}
	cout << "\n" << "Cycle while :" << count;
	return count;
}
void strcpy_while(char* arr, char* arr1)
{
	int i = 0;
	while (arr[i]) { arr1[i] = arr[i]; i++; }
	*(arr1 + i) = 0;
}

void strcpy_for(char* arr, char* arr1)
{
	for (int i = 0;; i++)
		if (arr[i]) { arr1[i] = arr[i]; }
		else { arr1[i] = 0; return; }
}

void strcpy_do_while(char* arr, char* arr1)
{
	int i = 0;
	do { arr1[i] = arr[i]; i++; } while (arr[i]);
	arr1[i] = 0;
}
void Counter(char len[])
{
	
	int let = 0;
	int fig = 0;
	for (int i = 0; len[i] != '\0'; i++)
	{
	if (((len[i] >= 65) && (len[i] <= 90)) || ((len[i] >= 97) && (len[i] <= 122)))
			let++;
	if ((len[i] >= 48) && (len[i] <= 57))
		fig++;
	}

	cout << "В строке " << let << " букв и " << fig << " цифр";
}
void Swapper(char* arr)
{
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (((arr[i] >= 65) && (arr[i] <= 90)) || ((arr[i] >= 97) && (arr[i] <= 122)))
		{
			arr[i] = arr[i];
		}
		else
			arr[i] = ' ';
		
	}	
	cout<< "\nМассив букв " << arr;
}
char Swapper2(char* arr1)
{
	for (int i = 0; arr1[i] != '\0'; i++)
	{
		if (!((arr1[i] >= '0') && (arr1[i] <= '9')))
		{
			arr1[i] = ' ';
		}
	}
	cout << "\nМассив цифр " << arr1;
	return 0;
}


