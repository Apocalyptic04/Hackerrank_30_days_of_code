#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h[6][6],i,j,sum=0,a,b,c,d,e,f,g,max;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>h[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            a=h[i][j];
            b=h[i][j+1];
            c=h[i][j+2];
            d=h[i+1][j+1];
            e=h[i+2][j];
            f=h[i+2][j+1];
            g=h[i+2][j+2];
            sum=a+b+c+d+e+f+g;
            h[i][j]=sum;
            sum=0;            
        }
    }
    max=h[0][0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(h[i][j]>max)
            {
                 max=h[i][j];
            }
        }
    }
    cout<<max;
    return 0;
}
