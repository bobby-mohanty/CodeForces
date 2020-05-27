#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, k;
	cin>>n>>m>>k;
	if(n<=m && n<=k)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}