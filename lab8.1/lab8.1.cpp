//Варіант 9.
//Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
//1. Вияснити, чи є серед цих символів четвірка сусідніх однакових символів.
//2. Замінити кожну четвірку сусідніх однакових символів парою зірочок “ * *”.


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
		

char* change(char* str)
{
	if (strlen(str) < 4)
		return str;
	char* tmp = new char[strlen(str) * 1 / 2 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	int i = 0;
	while (str[i + 3] != 0)
	{
		if (str[i] == str[i + 1]
			&& str[i + 2] == str[i + 3]
			&& str[i] == str[i + 3])
		{

			strcat(t, "**");
			t += 2;
			i += 4;
			*t = '\0';

		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
using namespace std;

bool find1(char* string)
{

	if (strlen(string) < 4)
		return false;
	for (int i = 0; i < strlen(string) - 1; i++)
	{
		if (string[i] == string[i + 1]
			&& string[i + 2] == string[i + 3]
			&& string[i] == string[i + 3])
			return true;

	}
	return false;
}

int main()
{
	char str [100];
	cout << "Enter string " << endl;
	cin.getline(str, 99);

	cout << endl << "Visit four elements ";
	if (find1(str)==1)
		cout << "yes";
	else
		cout << "no";
	cout << endl;

	char* dest = new char[151];
	dest = change(str);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
}
