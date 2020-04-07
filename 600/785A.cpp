#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int n;
	cin>>n;
	map<string, int> m;
	m["Tetrahedron"] = 4;
	m["Cube"] = 6;
	m["Octahedron"] = 8;
	m["Dodecahedron"] = 12;
	m["Icosahedron"] = 20;
	int ans = 0;
	string s;
	for(int i = 0; i < n; i++)
	{
		cin>>s;
		ans += m[s];
	}
	cout<<ans;
	return 0;
}