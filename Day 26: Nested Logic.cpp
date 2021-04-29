#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int dr,mr,yr;
    cin>>dr>>mr>>yr;
    int dd,md,yd;
    cin>>dd>>md>>yd;
    if(yd>yr)
    {
        cout<<"0"<<endl;
    }
    else if(yd==yr)
    {
        if(mr<md)
        {
            cout<<"0"<<endl;
        }
        else if(mr==md)
        {  
            if(dr<=dd)
            {
                cout<<"0"<<endl;
            }
            else
            {
                int k;
                k=dr-dd;
                cout<<k*15<<endl;
            }    
        }
        else
        {
            int k;
            k=mr-md;
            cout<<k*500<<endl;
        }
    }
    else
    {
        cout<<"10000"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
