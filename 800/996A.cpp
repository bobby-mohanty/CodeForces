#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long ans = 0;
	ans += (long long)(n/100);
	n %= 100;
	ans += (long long)(n/20);
	n %= 20;
	ans += (long long)(n/10);
	n %= 10;
	ans += (long long)(n/5);
	ans += (long long)(n%5);
	cout<<ans;
	return 0;
}