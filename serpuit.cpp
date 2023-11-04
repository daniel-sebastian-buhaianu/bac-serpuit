#include <iostream>
#define NMAX 15
using namespace std;
int main()
{
	int a[NMAX][NMAX], n, i, j;
	cout << "n = "; cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i%2 == 0)
				a[i][j] = n*i + j+1;
			else
				a[i][j] = n*(i+1) - j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}
