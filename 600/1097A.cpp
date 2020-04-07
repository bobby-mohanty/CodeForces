#include <iostream>
#include <string>
using namespace std;

int main() {
	string tc;
	string arr[5];
	int flag = 0;
	cin>>tc;
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
		if(arr[i][0] == tc[0] || arr[i][1] == tc[1])
			flag = 1;
	}
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}