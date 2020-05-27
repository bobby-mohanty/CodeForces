#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len = s.length();
	int acount = 0;
	for(char x : s){
		if(x == 'a')
			acount++;
	}
	if(acount <= len/2){
		cout<<acount*2-1;
	} else cout<<len;
	return 0;
}