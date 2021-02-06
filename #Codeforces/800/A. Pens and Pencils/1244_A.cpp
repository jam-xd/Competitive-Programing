//http://codeforces.com/contest/1244/problem/A
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--){
        int a,b,c,d,cap;
        int boligrafos=0, lapices=0;
        int r1=0,r2=0;
        cin>>a>>b>>c>>d>>cap;

       while(true){
        if(r1<a){
          r1 = r1 + c;
          boligrafos++;
        }else{break;}
       }
         while(true){
        if(r2<b){
          r2 = r2 + d;
          lapices++;
        }else{break;}
        }

        //cout<<boligrafos<<" "<<lapices<<endl;
        if(boligrafos + lapices > cap){
            cout<<"-1"<<endl;
        }

        if(boligrafos  +  lapices <=cap){
            cout<<boligrafos<<" "<<lapices<<endl;
        }

    }
    return 0;
}