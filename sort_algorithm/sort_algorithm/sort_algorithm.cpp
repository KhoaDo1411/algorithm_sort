#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	int n, a[200000];
	set<int>se;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	cout << se.size();
}
