// lab8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include<iomanip>
using namespace std;
void create(int ** arr, const int row, const int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "] = ";
			cin >> arr[i][j];
		}
		cout << endl;
	}
}
void print(int** arr, const int row, const int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
bool MatrSemetrichna(int** arr, int row, int col)
{
	if (row == col) {
		return false;
	}
	else
	{
		for (int i = 0; i < row; i++) {

			for (int j = 0; j < i; j++) {

				if (arr[i][j] != arr[j][i])
					return false;
			}
		}
		return true;
	}
	
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int row, col;
	cout << "Введіть кількість рядків "; cin >> row;
	cout << "Введіть кількість  стовпців "; cin >> col;
	int** arr = new int*[row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}

	create(arr, row, col);
	print(arr, row, col);

	if (MatrSemetrichna (arr,row,col)== false)
		cout <<endl<<"матриця не симетрична " << endl;
	if (MatrSemetrichna(arr,row,col) == true)
		cout << endl << "матриця не симетрична "<<endl;


	for (int i = 0; i < row; i++) {
		delete[]arr[i];
	}
	delete[]arr;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
