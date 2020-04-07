#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int len;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		len = s.length();
		if(s.substr(len-2,len).find("po") != string::npos)
			cout<<"FILIPINO\n";
		else if(s.substr(len-4,len).find("desu") != string::npos ||
			s.substr(len-4,len).find("masu") != string::npos)
			cout<<"JAPANESE\n";	
		else if(s.substr(len-5,len).find("mnida") != string::npos)
			cout<<"KOREAN\n";
	}
	return 0;
}