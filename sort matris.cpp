#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int temp = 0;
	cout << "Enter Values" << endl;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}



	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "Desnding Series" << endl;
	for (int i = 0; i<n; i++)
	{
		cout << endl;
		cout << a[i] << endl;
	}


}
