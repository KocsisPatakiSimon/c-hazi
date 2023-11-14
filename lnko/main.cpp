#include <iostream>

using namespace std;

int main()
{
    int n,minim,maxim,a;
    cout<<"hany szamot akarsz: ";
    cin>>n;
    cout<<"ird be az 1 szamot: ";
    cin>>a;
    minim=maxim=a;
    for(int i=2;i<=n;++i)
    {
        cout<<"ird be a "<<i<<" szamot:";
        cin>>a;
        if(a<minim){
            minim=a;}
        if(a>maxim){
            maxim=a;
        }
    }
    while(minim !=maxim){
        maxim=maxim-minim;
    }
    cout<<"a legkisebb es legnagyobb szam lnko-ja: "<<maxim;
    return 0;
}
