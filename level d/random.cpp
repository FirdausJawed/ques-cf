#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p = n / 4, q = n % 4;
    cout << p << " " << q;
    return 0;
}