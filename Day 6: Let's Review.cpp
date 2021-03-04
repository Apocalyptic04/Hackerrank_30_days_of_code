#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() 
{
    long long int i,t,k;
    long long int n;
    string s;
    cin>>n;
    for(t=0;t<n;t++)
    {
        cin>>s;
        k=s.size();
        for(i=0;i<k;i++)
        {
            //cout<<s[i];
            if(i%2==0)
            {
                cout<<s[i];
            }
        }
        cout<<" ";
        for(i=0;i<k;i++)
        {
            if(i%2!=0)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
        
    }
    return 0;
}
