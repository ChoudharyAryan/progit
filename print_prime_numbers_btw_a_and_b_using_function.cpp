#include <iostream>
using namespace std;
void prime(int a, int b);

int main()
{
    int x, y;
    cin >> x >> y;
    prime(x, y);

    return 0;
}

void prime(int a, int b)
{
    int i, j;   

    for (i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {

                break;
            }
        }
        if (i == j)
        {
            cout << i << " prime" << endl;
            continue;
        }
    }
}