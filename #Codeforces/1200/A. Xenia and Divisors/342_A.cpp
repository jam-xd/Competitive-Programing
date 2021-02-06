//http://codeforces.com/contest/342/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{
   int n; cin>>n;
   bool nel = false;
   int uno, dos, tres, cuatro, seis;
   uno = dos = tres = cuatro = seis = 0;
   deque<int>ggnomas;
   for(int i=0;i<n;i++){
    int gomitas; cin>>gomitas;
    if(gomitas == 7 || gomitas == 5)nel = true;
    else{
        if(gomitas == 1)uno++;
        if(gomitas == 2)dos++;
        if(gomitas == 3)tres++;
        if(gomitas == 4)cuatro++;
        if(gomitas == 6)seis++;
    }
   }
   int grupos = n/3;

        for(int i=0;i<grupos;i++){
            if(uno > 0 && dos >0 && cuatro >0){
                //cout<<1<<" "<<2<<" "<<4<<endl;
                ggnomas.push_back(1);
                ggnomas.push_back(2);
                ggnomas.push_back(4);
                uno--; dos--; cuatro--;
            }else if(uno > 0 && dos > 0 && seis >0){
                //cout<<1<<" "<<2<<" "<<6<<endl;
                ggnomas.push_back(1);
                ggnomas.push_back(2);
                ggnomas.push_back(6);
                uno--; dos--; seis--;
            }else if(uno > 0 && tres > 0 && seis > 0){
                //cout<<1<<" "<<3<<" "<<6<<endl;
                ggnomas.push_back(1);
                ggnomas.push_back(3);
                ggnomas.push_back(6);
                uno--; tres--; seis--;
            }else{
                nel = true;
                break;
            }
        }

        if(nel == true)cout<<-1<<endl;
        else{
            int jump = 0;
            for(int i=0;i<ggnomas.size();i++){
                cout<<ggnomas[i];
                jump++;
                if(jump == 3)cout<<endl;
                else cout<<" ";
            }
        }





    return 0;
}