
//https://codeforces.com/problemset/problem/474/B
// Good example of binary search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ss;
    cin>>n;
    deque<int>minimos(n), maximos(n);
    cin>>ss; //primerits
    minimos[0]=1; maximos[0]=ss;
    for(int i=1;i<n;i++){
        cin>>ss;
        minimos[i]=maximos[i-1]+1;
        maximos[i]=maximos[i-1]+ss;
    }
    //for(int i=0;i<n;i++)cout<<minimos[i]<<" "<<maxmios<<endl;  furula
 
    cin>>m;
    int high,low,mid;
    for(int i=0;i<m;i++){
        high=n;
        low=0;
        cin>>ss;
        while(true){
            mid=(high+low)/2;
 
            if(minimos[mid]== ss){
                cout<<mid+1<<endl;
                break;
            }
            else if(minimos[mid]< ss){
                //cout<<maximos[mid]<<endl;
                if(maximos[mid]>= ss){
                cout<<mid+1<<endl;
                break;
                }else low=mid;//,cout<<mid<<endl;
            }else high=mid;
        }
    }
    return 0;
}
