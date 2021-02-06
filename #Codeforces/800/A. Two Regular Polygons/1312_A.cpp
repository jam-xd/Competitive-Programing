//http://codeforces.com/contest/1312/problem/A
#include <iostream>
using namespace std;

int main() {
	int casos;
	cin>>casos;
	
	while(casos--){
		int a,b;
		cin>>a>>b;
		if(a % b == 0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}