#include <iostream>

using namespace std;

int main()
{
    int n,S=0,i;
    cin>>n;
    for(i=3; i<=3*n;)
    {

        if(i%3==0)
        {
            S=S+i;

        }
        i+=3;
    }
    cout<<S;
    return 0;
}
