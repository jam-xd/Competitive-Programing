//http://codeforces.com/contest/1108/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{ int casos;
cin>> casos;
while(casos--){
int a,b;
int l1,r1,l2,r2;

    cin>>l1>>r1>>l2>>r2;

    a = l1+1;
    b = l2+1;

    if(a  == b )a--;

cout<<a<<" "<<b<<endl;
}

    return 0;
}