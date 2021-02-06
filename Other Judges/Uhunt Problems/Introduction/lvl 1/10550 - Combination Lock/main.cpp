#include <iostream>

using namespace std;

int main()
{
    int pos, uno, dos, tres;
    while(cin>>pos>>uno>>dos>>tres){
        if(pos == 0 && uno == pos  && dos == pos && tres == pos)break;
        int answer = 1080;
        int sum = ((pos-uno)+40)%40 + ((dos - uno)+40)%40 +  ((dos-tres)+40)%40;

        cout<<answer + sum*9<<endl;
    }
    return 0;
}
