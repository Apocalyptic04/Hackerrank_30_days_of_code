#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int c;
    	cin >> c;
        a.push_back(c);
    }
    int numberOfSwaps=0;
    int mi=a[0];
    int ma=a[0];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }
        if (numberOfSwaps == 0) 
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>ma)
        {
            ma=a[i];
        }
        if(a[i]<mi)
        {
            mi=a[i];
        }
    }
    cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<mi<<endl;
    cout<<"Last Element: "<<ma<<endl;
    return 0;
}
