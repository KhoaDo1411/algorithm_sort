#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<set>
using namespace std;
multiset<string>se;
bool cmp1(string a, string b)
{
	return a < b;
}
bool cmp2(string a, string b)
{
	return a > b;
}
bool cmp3(string a, string b)
{
	if (a.length() != b.length())
	{
		return a.length() < b.length();
	}
	else
	{
		return a < b;
	}
}
bool cmp4(string a, string b)
{
	if (se.count(a) != se.count(b))
	{
		return se.count(a) > se.count(b);
	}
	else
	{
		return a < b;
	}
}
int main()
{
	string a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	sort(a, a + n, cmp1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a, a + n, cmp2);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a, a + n, cmp3);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a, a + n, cmp4);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
