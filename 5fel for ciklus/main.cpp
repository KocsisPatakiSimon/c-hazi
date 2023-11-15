#include <iostream>

using namespace std;

int main()
{
    int n,a,c=0,i,S=0;
    cin>>n;
    double atlag;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            S=S+a;
            c++;
        }
    }
    atlag=S/c;
    cout<<atlag;
    return 0;
}
