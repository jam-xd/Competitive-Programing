//http://codeforces.com/contest/337/problem/A
#include <bits/stdc++.h>

typedef long long ll;
typedef long double dbl;

using namespace std;

int main()
{
    int students, puzzles;
    cin>>students>>puzzles;

    deque<int>jaja(puzzles);
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
    }

    sort(jaja.begin(), jaja.end());
    //for(int i=0;i<jaja.size();i++)cout<<jaja[i]<<" ";
    //cout<<endl;

    int pointer1=0, pointer2 = pointer1 + (students-1);
    int current = 1000000;
    int i,j;
    while(true){
        //cout<<"p1 = "<<pointer1<<" p2 = "<<pointer2<<endl;
        int diff = max(jaja[pointer2],jaja[pointer1]) - min(jaja[pointer2],jaja[pointer1]);
        //cout<<diff<<" diff"<<endl;
        if(diff <= current){
            current = diff;
            i = pointer1;
            j = pointer2;
        }
        if(pointer2 + 1 > jaja.size()-1)break;
        pointer1++;
        pointer2++;

    }
    //cout<<"1> = "<<jaja[i]<<endl;
    //cout<<"2> = "<<jaja[j]<<endl;
    cout<<current<<endl;
    return 0;
}