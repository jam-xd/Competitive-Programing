#include <bits/stdc++.h>

using namespace std;


//Globales:
deque<char>jaja;
deque<int>ggnomas;


int awa (int v){
    while(true){
        string temp; int xd = 0;
        stringstream ss;
        ss<<v;
        ss>>temp;
        ss.clear();
        if(temp.size() == 1)break;

        for(int i=0;i<temp.size();i++){
            stringstream gg;int aux;
            gg<<temp[i];
            gg>>aux;
            xd = xd + aux;
            gg.clear();
        }
        v = xd;
    }
        return v;

}


string may (string cad){
    for(int i=0;i<cad.size();i++)
        if(cad[i] >= 97 and cad[i] <= 122)cad[i] = cad[i] - 32;

    return cad;

}

int sumacad (string cad){
    int suma = 0;
    for(int i=0;i<cad.size();i++){
        for(int j=0;j<jaja.size();j++){
            if(jaja[j] == cad[i])suma = suma + ggnomas[j];
        }
    }

    return suma;
}



int main()
{
    for(int i=65;i<=90;i++)jaja.push_back(i);
    for(int i=1;i<=26;i++)ggnomas.push_back(i);

    string cad,cadd;
    while(getline(cin,cad) && getline(cin,cadd)){

        cad = may(cad);
        cadd = may(cadd);
        //cout<<cad<<" "<<cadd<<endl;
        int sum = sumacad(cad);
        int summ = sumacad(cadd);

        //cout<<sum<<" "<<summ<<endl;
        double r1 = max(awa(sum), awa(summ));
        double r2 = min(awa(sum), awa(summ));
        //cout<<r1<<" "<<r2<<endl;
        double answer = 100.0/r1*r2;

        printf("%.2f", answer);
        cout<<" %"<<endl;

       // cout<<awa(sum)<<" "<<awa(summ)<<endl;
    }

    //QUE ESTA MAAAAAALLL :"v  DEMONIOS...
    return 0;
}
