//http://codeforces.com/contest/200/problem/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double tragos,ggnomas, sum =0;
    cin>>tragos;

    for(int i=0;i<tragos;i++){
        cin>>ggnomas;
        sum = sum + ggnomas;
    }

    double r = 1.0/tragos*sum;
    printf("%.5f\n",r);

    return 0;
}
//noice