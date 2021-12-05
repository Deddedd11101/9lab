// 2zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include  <Windows.h>
#include < conio.h>
#include <stdio.h>
using namespace std;
void Ostatok(char* arr, char* arr2, int count);
void Chered(char* arr, char* arr2);
int main()
{
    SetConsoleCP(1258);
    SetConsoleOutputCP(1251);
    int count = 0;
    const int temp = 100;
    char arr1[temp];
    char arr2[temp];
    char arr3[temp];
    gets_s(arr1);
    gets_s(arr2);
    int len = 0;
    for (int i = 0; arr1[i] != '\0'; i++)
    {      
            if (arr1[i] == arr2[i])
            {
                count++;
            }
            len++;
    }
    cout << " Совпало " <<count<< " символов";
    Ostatok(arr1, arr2, count);
   
    strcpy_s(arr3, arr1 + count);
    strcat_s(arr3, arr2 + count);
    cout << "\nСоединение двух остатков: " << arr3;
    Chered(arr1, arr2);
}
void Ostatok(char* arr, char* arr2,  int count)
{
    int o = 0;
    int p = 0;
    int i=count;
    for (i; arr[i] != '\0'; i++)
    {
        o++;      
    }
    
    for (int j = count; arr2[j] != '\0'; j++)
    {
        p++;      
    }
    cout << " \nВ первой и второй строке осталось соответственно " << o << " и " << p << " символов";
   }
void Chered(char* arr, char* arr2)
{
    cout << "\nЧередование : ";
    for (int i = 0; arr[i]!= '\0'; i++)
    {
        cout << arr[i] << arr2[i];
       
    }
}
