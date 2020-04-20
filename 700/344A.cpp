#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int curr, last=-1;
	int cnt=0;
	for(int i=0; i<n; i++)
	{
		cin>>curr;
		if(last == -1 || (last != curr && last > 0))
		{
			cnt++;
			last = curr;
		}
	}
	cout<<cnt;
	return 0;
}