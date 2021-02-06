//http://codeforces.com/contest/1247/problem/A
 #include <iostream>

using namespace std;

int main()
{
    int casos;
    //cin>>casos;

   // while(casos--){
        int a,b;
        bool lol = false, r=false;
        cin>>a>>b;
        if(a == 9 and b == 1){
            lol = true;
        }

        if(max(a,b)- min(a,b) >1 and lol == false){
            cout<<"-1"<<endl;
            r = true;
        }
        if(max(a,b)- min(a,b) == 1 and a<b){
            cout<<min(a,b)<<"9"<<" "<<max(a,b)<<"0"<<endl;
              r = true;
        }
        if(a==b and lol == false ){
            cout<<a<<"2"<<" "<<b<<"3"<<endl;
              r = true;
        }
        if(a == 9 and b == 1){
            cout<<"9 10"<<endl;
              r = true;
        }

        if(r == false)  cout<<"-1"<<endl;


    //}
    return 0;
}