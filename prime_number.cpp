#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> m;
    cin >> n;

    for (int i = m; i <= n; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j==i)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}