#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n; int prod=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        prod=prod*a[i];
    }
    cout<<prod;

}
