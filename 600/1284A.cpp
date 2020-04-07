#include <iostream>
#include <string>

#define ll long long

using namespace std;

int main()
{
	int n, m, q;
	ll x, y;
	cin>>n>>m;
	string a[n], b[m];
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<m; i++)
		cin>>b[i];
	cin>>y;
	for(ll i=0; i<y; i++)
	{
		cin>>x;
		x -= 1;
		cout<<a[(ll)x%n]<<b[(ll)x%m]<<'\n';
	}
	return 0;
}