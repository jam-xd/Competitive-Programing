#include <bits/stdc++.h>

using namespace std;

bool isNotSame (deque<int>v, deque<int>s){

    bool notsame = false;
    for(int i=0;i<10;i++)
        if(v[i] != s[i])notsame = true;

        return notsame;
}

int main()
{
   int casos;
   cin>>casos;

   cout<<"Lumberjacks:"<<endl;
   while(casos--){
        deque<int>jaja(10), save(10);
        for(int i=0;i<10;i++){
            cin>>jaja[i];
            save[i] = jaja[i];
        }

        sort(save.begin(), save.end());
        bool diferentes = false;
        if(isNotSame(jaja,save) == true)diferentes = true;
        else diferentes = false;

        sort(save.rbegin(),save.rend());
        bool diferentes2 = false;
        if(isNotSame(jaja,save) == true)diferentes2 = true;
        else diferentes = false;

        if(diferentes == true && diferentes2 == true)cout<<"Unordered"<<endl;
        else if(diferentes == false || diferentes2 == false) cout<<"Ordered"<<endl;
   }
    return 0;
}
