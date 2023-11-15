#include <iostream>

using namespace std;

int main()
{
    int a,n,S=0;
    cin>>n;
    for(a=0;a<=n;a++)
    {
        if(a%2==0)
        {
            S=S+a;
        }
    }
    cout<<S;
    return 0;
}
