#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int flag=0;
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
		if(arr[i])
			flag = 1;
	}
	cout<<(flag ? "HARD" : "EASY");
	return 0;
}