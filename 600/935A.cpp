#include <iostream>
using namespace std;

int main() {
	int n;
	int l=0;
	cin>>n;
	for(int i = 1; i<=n/2; i++)
	{
		if((n-i)%i == 0)
			l++;
	}
	cout<<l;
	return 0;
}