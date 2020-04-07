#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	char a[n];
	cin>>a;
	int b[2] = {0};
	for(int i=0; i<n; i++)
	{
		if(a[i] == 'z')
			b[0]++;
		if(a[i] == 'n')
			b[1]++;
	}
	while(b[1]>0)
	{
		cout<<1<<" ";
		b[1]--;
	}
	while(b[0]>0)
	{
		cout<<0<<" ";
		b[0]--;
	}
	return 0;
}