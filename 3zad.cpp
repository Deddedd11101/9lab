// 3zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <algorithm>
using namespace std;
void vivod(char* arr);
constexpr auto temp  = 100;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   char arr[temp];
   gets_s(arr);
   vivod(arr);
}
void vivod(char* arr)
{
    
    int count = 0;
    int count2 = 0;
    for (int i = 0; arr[i] != '.'; i++)
    {
        count++;
    }
    cout << "Целая часть числа " << arr << " содержит " << count << " цифр\n";
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count2++;
    }
    cout << "В обратном порядке: ";
    for (int i =0; i < count2; i++)
    {
        cout << arr[count2 - i - 1];
    }
}

