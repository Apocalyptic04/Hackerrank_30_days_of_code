#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x[100],y[100];
    int max;
    cin>>n;
    int i=0,k=0;
    while(n>0)
    {
        x[i]=n%2;
        if(x[i]==1)
        {
            k++;
            y[i]=k;
        }
        else
        {
            k=0;
            y[i]=k;           
        }
        n=n/2;
        i++;
    }
    max=y[0];
    for(int j=i-1;j>=0;j--)
    {
        if(y[j]>max)
        {
            max=y[j];
        }
    }
    cout<<max;

    return 0;
}
