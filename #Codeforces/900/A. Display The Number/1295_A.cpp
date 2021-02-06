//http://codeforces.com/contest/1295/problem/A
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;

    while(casos--){
        int n;
        cin>>n;

        if(n%2==0){
        while(n!=0){
            n=n-2;
            cout<<"1";
            if(n==0)cout<<endl;
        }
    }

        if(n%2!=0){
            n=n-3;
            cout<<"7";
            if(n==0)cout<<endl;
             while(n!=0){
            n=n-2;
            cout<<"1";
             if(n==0)cout<<endl;
        }

        }
    }
        return 0;
}