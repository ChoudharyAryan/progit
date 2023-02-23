#include <iostream>
using namespace std;
void pascaltri(int n);
int fact(int n);

int main()
{
    int n;
    cin >> n;
    pascaltri(n);

    return 0;
}

void pascaltri(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) /(fact(i - j) * fact(j))<<endl;
        }
        cout<<endl;
    }
}

int fact(int n)
{

    int factorial=1;
    for (int i = n; i > 0; i--)
    {
        factorial = factorial * i;
    }
    
    return factorial;
}