#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char a[n];
	cin>>a;
	int ca=0, cd=0;
	for(char c : a){
		if(c == 'A')
			ca++;
		else
			cd++;
	}
	if(ca == cd)
		cout<<"Friendship";
	else if(ca > cd)
		cout<<"Anton";
	else
		cout<<"Danik";
	return 0;
}