#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    long int n,i;
    long int a[1000];
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=n;i>0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
