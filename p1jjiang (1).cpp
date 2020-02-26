#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

void merge(int h, int m, int U[], int V[], int ary[])
{
	int i = 0, j = 0, k = 0;

	while (i < h && j < m)
	{
		if (U[i] < V[j])
		{
			ary[k] = U[i];
			i++;
		}
		else
		{
			ary[k] = V[j];
			j++;
		}
		k++;
	}
	while (i < h)
	{
		ary[k] = U[i];
		i++;
		k++;
	}
	while (j < m)
	{
		ary[k] = V[j];
		j++;
		k++;
	}
}

void mergeSort(int n, int ary[])
{

	if (n > 1)
	{
		int h = n / 2;
		int m = n - h;
		int *U = new int[h];
		int *V = new int[m];

		for (int i = 0; i < n; i++)
		{
			if (i < h)
				U[i] = ary[i];
			else
			{
				V[i-h] = ary[i];
			}
		}

		mergeSort(h, U);
		mergeSort(m, V);
		merge(h, m, U, V,ary);

		delete[] U;
		U = NULL;

		delete[] V;
		V = NULL;
	}
}

int main()
{
	const char * inputFile = "p1data.txt";
	int  i = 0, n = 0;
	string p;

	ifstream myfile;
	myfile.open(inputFile);

	if (myfile.is_open())
	{
		while (getline(myfile,p) ) 
			n++;
	}
	else
		cout << "Unable to open file" << endl;
	if (n == 0)
	{
		cout << "Empty File." << endl;
		cin >> n;
		return 0;
	}
	int * ary = new int[n];
	myfile.close();

	myfile.open(inputFile);
	if (myfile.is_open())
	{
		while (myfile >> p)
		{
			ary[i] = stoi(p);
			i++;
		}
	}
	myfile.close();

	mergeSort(n, ary);

	cout << "Sorted Result: ";
	for (int l = 0; l < n; l++)
	{
		cout << ary[l] << " ";
	}
	cout << endl;


	delete[]ary;
	ary = NULL;

	cin >> n;
	return 0;
}
