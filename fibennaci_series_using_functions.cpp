#include <iostream>
using namespace std;
int fibn(int n);

int main()
{
    int a;
    cin >> a;
    fibn(a);
    return 0;
}

int fibn(int n)
{
    int t1 = 0;
    int t2 = 1;
    int s;
    for (int i = 1; i <= n; i++)
    {
        s = t1 + t2;
        t1 = t2;
        t2 = s;
        cout<<s<<endl;
        
    }
}