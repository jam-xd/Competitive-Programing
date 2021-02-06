#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--){
        double x1,y1,x2,y2,r1,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;

        double distr = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
        double answer = distr-(r1+r2);

        //cout<<distr<<endl;
        if(distr > (r1+r2))printf("%.2f \n", answer);
        else cout<<"Todo OK"<<endl;
    }




    return 0;
}
