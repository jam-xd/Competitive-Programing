//http://codeforces.com/contest/1462/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;

int const N = 1005;
int const MOD = 10e9+7;

int toInt (deque<int>current){

}

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        if(n > 45){
            cout<<-1<<endl;
            continue;
        }


    deque<int>ggnomas;
    for(int i=0;i<9;i++)ggnomas.push_back(i+1);
    int tam = ggnomas.size();
    deque<int>current, answer;

    int last = INT_MAX;

        for(int i=0; i<(1<<tam); i++){
            for(int j=0; j<tam; j++){
                if(i & (1 << j)){
                current.push_back(ggnomas[j]);
                //cout<<ggnomas[j]<<" ";
                }
            }

           // cout<<"size = <<"<<current.size();
            int sum = 0;
            for(int k=0;k<current.size();k++)sum = sum + current[k];
            //cout<<" ||  sum = "<<sum<<endl;


            if(current.size() <= last && sum == n){
                answer.clear();
                last = current.size();
                for(int k=0;k<current.size();k++){
                    answer.push_back(current[k]);
                }
            }


            current.clear();

        }

        for(int i=0;i<answer.size();i++)cout<<answer[i];
        cout<<endl;
        current.clear();
        answer.clear();
    }
    return 0;
}