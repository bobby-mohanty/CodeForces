#include <iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long ans=0;
	for(int i=5; i>0; i--)
	{
		ans += (n/i);
		n = n%i;
	}
	cout<<ans;
	return 0;
}