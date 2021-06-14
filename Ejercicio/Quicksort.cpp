#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int middle(int a[], int pInitial, int pFinal);
void sort(int a[], int pInitial, int pFinal);


int main()
{
	int A[10] = { 123,-6,13,-33,-98,333,23,-5,0,-100 };
	ofstream file;
	string nameA;
	cout << "Ingrese el nombre del file: ";
	getline(cin, nameA);
	file.open(nameA.c_str(), ios::out);

	cout << "Antes de sort: " << endl;
	file << "Antes de sort: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
		file << A[i] << " ";
	}

	sort(A, 0, 9);
	cout << endl;
	file << endl;
	cout << "Despues de sort: " << endl;
	file << "Despues de sort: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
		file << A[i] << " ";
	}
	file.close();


	return 0;
}

int middle(int a[], int pInitial, int pFinal)
{
	return a[(pInitial + pFinal) / 2];

}

void sort(int a[], int pInitial, int pFinal)
{
	int i = pInitial;
	int j = pFinal;
	int temp;
	int piv = middle(a, pInitial, pFinal);

	do
	{
		while (a[i] < piv)
		{
			i++;
		}

		while (a[j] > piv)
		{
			j--;
		}

		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);


	if (pinicial < j)
	{
		ordenar(a, pinicial, j);
	}

	if (i < pfinal)
	{
		ordenar(a, i, pfinal);
	}
}