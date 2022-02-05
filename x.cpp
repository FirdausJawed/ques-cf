#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    int neg = 0,pos=0,zero=0;
    for(int i=1;i<=n;i++){
        cin >> t;
        if (t>0)
        {
            pos += 1;
        }
        else if (t<0)
        {
            neg += 1;
        }
        else{
            zero++;
        }
    }
    cout << pos<<"\n";
    cout << neg << "\n";
    cout << zero << "\n";
    return 0;
}