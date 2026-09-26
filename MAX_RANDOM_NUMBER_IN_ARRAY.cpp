// MAX_RANDOM_NUMBER_IN_ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
using namespace std;

int ReadPostiveNumber(string msg)
{
    int number;
	do
	{
		cout << msg << endl;
		cin >> number;
	} while (number<=0);
	return number;
}

int Random_Number(int From, int To)
{
	int Rand_Number = rand() % (1 - 100 + 1) + 1;
	return Rand_Number;
}

void FillArray(int arr[100], int& Lenght)
{
	for (int i = 0; i < Lenght; i++)
	{
		arr[i] = Random_Number(1, 100);
	}
}

void Print_Max_Number_AndValues(int arr[100], int& Lenght)
{
	int max_number = 0;
	for (int count = 0; count < Lenght; count++)
	{
		cout << arr[count]<<" ";
	}
	
}

int Max_Number_In_Array(int arr[100], int Lenght)
{
	int Max_Number = 0;
	for (int count = 0; count < Lenght; count++)
	{
		if (arr[count] > Max_Number)
		{
			Max_Number = arr[count];
		}
	}
	return Max_Number;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int Lenght = ReadPostiveNumber("ENTER THE LENGHT OF THE ARRAY:");
	FillArray(arr, Lenght);
	cout << "The Elements Into The Array Are:" << endl;
	Print_Max_Number_AndValues(arr, Lenght);
	cout << "\n The Max Number Into The Array Is:" << Max_Number_In_Array(arr, Lenght);

}