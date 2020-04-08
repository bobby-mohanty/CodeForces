#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n+1] = {0};
	int r[n+1] = {0};
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(int i=1; i<=n; i++)
	{
		r[a[i]] = i;
	}
	for(int i=1; i<=n; i++)
		cout<<r[i]<<" ";
	return 0;
}