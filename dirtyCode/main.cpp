#include <iostream>
#include <fstream>
using namespace std;
bool mostrar(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	return true;
}
int main()
{
	int a[10];
	int b, c, d = 0;
	ifstream e("numeros.txt");
	while (!e.eof())
	{
		e >> a[d];
		d++;
	}
	e.close();
	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}

		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	
	if (mostrar(a))
	{
		cout << "vector mostrado";
	}

	return 0;
	system("pause");
}