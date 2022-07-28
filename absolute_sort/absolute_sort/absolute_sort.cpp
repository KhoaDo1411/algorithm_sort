#include<iostream>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
int main()
{
	int n, a[100000];
	map<int, int>mp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		mp[a[i]]++;
	}
	int max = 0;
	int x=0;
	auto it = mp.begin();
	while (it != mp.end())
	{
		if (it->second > max)
		{
			max = it->second;
			x = it->first;
		}
		++it;
	}
	cout << x << " " << max << endl;
}