#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long double result=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        result = result+(long double)arr[i]/100;
    }
    result = result/n;
    cout<<(result*100);
    return 0;
}