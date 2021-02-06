//http://codeforces.com/contest/1311/problem/A
#include <bits/stdc++.h>

using namespace std;

int main(){

int casos;
cin>>casos;
int x,y,r;
while(casos--){
int a ,b;
	cin>>a>>b;
	if(a == b)cout<<"0"<<endl;

	if(a<b){// 2 3   aumentar a;
        r = b-a;
        //cout<<r<<endl;
        if(r %2 != 0)cout<<"1"<<endl;
        if(r % 2 == 0)cout<<"2"<<endl;
	}

	if(a>b){//sustraer
        r = a-b;
        //cout<<r<<endl;
        if(r % 2 == 0)cout<<"1"<<endl;
        if(r %2 != 0)cout<<"2"<<endl;
	}
}
	return 0;

}