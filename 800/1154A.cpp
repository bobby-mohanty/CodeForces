#include<iostream>
#define int long long
using namespace  std;

int32_t main()
{
	int arr[4]= {0};
	int idx = 0;
	for(int i=0; i<4; i++)
	{
		cin>>arr[i];
		if(arr[idx] < arr[i])
			idx = i;
	}
	for(int i=0; i<4; i++)
	{
		if(i != idx)
			cout<<arr[idx]-arr[i]<<" ";
	}
	return 0;
}