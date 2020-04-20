/*
 * Author: bobby.mohanty2345
 * Time: 2020-04-08 09:18:36
 */

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin>>a>>b;
    int s, m;
    if(a>b){
	    s = b;
	    m = a;
    } else {
	    m = b;
	    s = a;
    }
    m -= s;
    cout<<s<<" "<<m-(m%2);
    return 0;
}
