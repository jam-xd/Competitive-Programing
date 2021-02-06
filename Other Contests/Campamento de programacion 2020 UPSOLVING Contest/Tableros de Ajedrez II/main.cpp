#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--){
        long long jaja;
        cin>>jaja;
        long long sum = 1;
        if(jaja == 1)cout<<"1"<<endl;
        else{

        for(int i=1;i<=jaja;i++){
            sum = sum * i;
        }

        cout<<sum/2<<endl;
        }

    }
    return 0;
}
