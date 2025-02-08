#include <iostream>

using namespace std;

int main()
{
    int szam1,szam2,ujsz1=0,ujsz2=0;
    cout<<"szam 1= ";
    cin>>szam1;
    cout<<"szam 2= ";
    cin>>szam2;
    int hatvany=1;
    while(szam1>0){
        int szj=szam1%10;
        szam1/=10;
        if(szj%2==0 && szj!=0){
            ujsz1+=szj*hatvany;
            hatvany*=10;
        }

    }


    while(szam2>0){
        int szj=szam2%10;
        szam2/=10;
        if(szj%2==0 && szj!=0){

            ujsz2=ujsz2*10+szj;

        }

    }

    if(ujsz1==ujsz2){
        cout<<"1";
    }
    else{cout<<"-1";}



    return 0;
}
