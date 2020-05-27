#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char a[n];
	int s=0, f=0;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n-1; i++)
	{
		if(a[i] == 'S' && a[i+1] == 'F')
			s++;
		else if(a[i] == 'F' && a[i+1] == 'S')
			f++;
	}
	cout<<(s>f?"YES":"NO");
	return 0;
}