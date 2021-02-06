//http://codeforces.com/contest/1234/problem/A
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--){
        int n,sum=0;
        cin>>n;
        deque<int>jaja(n);
        for(int i=0;i<n;i++){
            cin>>jaja[i];
            sum = sum + jaja[i];
        }
        if(sum % n ==0)cout<<sum/n<<endl;
        if(sum % n !=0)cout<<sum/n+1<<endl;
    }
    return 0;
}