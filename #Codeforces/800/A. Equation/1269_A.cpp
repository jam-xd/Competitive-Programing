//http://codeforces.com/contest/1269/problem/A
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;

    int r1 = 4+n;
    int r2 = 4;
    int divisores1=0, divisores2=0,contador=1;
    bool s1=false, s2=false;

    while(true){

        for(int i=1;i<=r1;i++){
        if(r1 % i == 0){
            divisores1++;
        }
        if(divisores1 == 3){
           s1 = true;
            break;
        }
        }

         for(int i=1;i<=r2;i++){
        if(r2 % i == 0){
            divisores2++;
        }
        if(divisores2 == 3){
           s2 = true;
            break;
        }
         }


        if(s1 == true and s2 == true){
            cout<<r1<<" "<<r2<<endl;
            break;
        }

        r1++;
        r2++;
        s1 = false;
        s2 = false;
        divisores1 = 0;
        divisores2 = 0;

    }
    return 0;
}