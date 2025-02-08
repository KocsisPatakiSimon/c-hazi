#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream szam("bac.in");
    int a,szj,ujszam=0,hatvany=1;
    bool paratlan=false;
    szam>>a;

    while(a>0)
        {
            szj=a%10;
            if(szj %2 == 1)
            {
               ujszam=ujszam+szj*hatvany;
               hatvany*=10;
               paratlan=true;
            }
            ujszam=ujszam+szj*hatvany;
            a/=10;
            hatvany*=10;

        }
        if(paratlan == true){
            cout<<ujszam;
        }else{cout<<"-1";}



    return 0;
}
