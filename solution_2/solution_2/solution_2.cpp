#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, a[1000000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	sort(a, a + n, greater<int>());
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
