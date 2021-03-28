#include <iostream>
#include <fstream>
using namespace std;

const int sizeVector = 10;
const string file = "numeros.txt";
int vector[sizeVector];

void readArchive()
{
	int cont = 0; 
	ifstream file(file);
	while (!file.eof())
	{
		file >> vector[cont];
		cont++;
	}
	file.close();
}

void verifyMajor(int index1, int index2)
{
	if (vector[index1] > vector[index2])
		swap(vector[index1], vector[index2]);
}

void sort()
{
	for (int i = 0; i < sizeVector - 1; i++)
		for (int j = i + 1; j < sizeVector; j++)
			verifyMajor(i, j);
}

void showVector()
{
	for (int i = 0; i < sizeVector; i++)
		cout << vector[i] << endl; 
}

int main()
{
	readArchive();
	sort();
	showVector();´
	return 0;
}