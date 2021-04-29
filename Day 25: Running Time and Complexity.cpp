#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int count=0;
        if(n<2)
        {
            cout<<"Not prime"<<endl;
        }
        else
        {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                count=1;
                break;
            }
        }
        if(count==1)
        {
            cout<<"Not prime"<<endl;
        }
        else
        {
            cout<<"Prime"<<endl;
        }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
