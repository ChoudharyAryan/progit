#include <iostream>
using namespace std;
int fact(int n);

int main()
{
    int n, r,ans;
    cin >> n >> r;
    ans=fact(n)/(fact(r)*fact(n-r));    
    cout << ans;
    return 0;
}

int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}