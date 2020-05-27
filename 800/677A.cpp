#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, h;
	cin>>n>>h;
	int cnt = 0;
	int x;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(x > h)
			cnt++;
	}
	cout<<n+cnt;
	return 0;
}