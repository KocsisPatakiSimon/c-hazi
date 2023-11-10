#include <iostream>

using namespace std;

int main()
{
    int n,i,a=0,szam;
    double atlag,S;
    cout<<"hany szamot szeretnel: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout << "Adja meg a(z) " << i + 1 << ". szamot: ";
        cin>>szam;
        if(szam%2==0){
           S=S+szam;
           a++;
        }
    }
    atlag=S/a;
    cout<<atlag;

    return 0;
}
