#include <time.h>
#include <iostream>

using namespace std;

int main()
{
	//ZADANIE 1
	/*int tab[10], a = 3;
	for (int i = 0; i < 10; i++)
	{
		tab[i] = a;
		cout << tab[i] << " ";
		a += 3;
	}
	*/

	//ZADANIE 2 
	/*int tab[10], a = 3;
	for (int i = 0; i < 10; i += 2)
	{
		tab[i] = a;
		cout << tab[i] << " ";
		a += 3;
	}
	*/

	//ZADANIE 3
	/*int a, x = 0;
	int tab[10];
	cout << "podaj a: " << endl;
	cin >> a;
	for (int i = 9; i >= 0; i--)
	{
		tab[i] = a - x;
		cout << tab[i] << " ";
		x += 5;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << tab[i] << " ";
	}
	*/

	//ZADANIE 4
	/*
	srand(time(NULL));
	int a, min = 51;
	int tab[10];
	for (int i = 0; i < 10; i++)
	{
		tab[i] = (rand() % 50) + -23;
		cout << tab[i] << endl;
		if (min > tab[i])
		{
			min = tab[i];
			cout << "minimalna: " << min << endl;
		}
	}
	*/

	//ZADANIE 5
	/*int l1, l2;
	int tab[10];
	cout << "podaj 2 pierwsze liczby: " << endl;
	cin >> l1 >> l2;
	tab[0] = l1;
	tab[1] = l2;
		for (int i = 2; i < 10; i++)
		{
			tab[i] = tab[i - 1] + tab[i - 2];
			cout << tab[i] << endl;
		}
	*/

	//ZADANIE 6
	/*int tab[20];
	for (int i = 0; i < 20; i++)
	{
		if (i > 9)
		{
			tab[i] = tab[i - 10];
			cout << tab[i] << endl;
		}
		else
		{
			tab[i] = i;
			cout << tab[i] << endl;
		}
	}
	*/

































































}
