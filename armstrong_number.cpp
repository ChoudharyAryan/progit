#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int on;
    on=n;
    int count = 0;
    int z = 0;
    while (n > 0)
    {
        int digit;
        digit = n;
        n = n / 10;
        count++;
    }
    cout << count<<endl;

    while (n > 0)
    {
        int x;
        int y;
        int count;

        x = n % 10;
        n = n / 10;
        y = pow(x,count);
        z = z + y;
    }
    cout << z << endl;

    if (z == on)
    {
        cout << "number  is armstrong" << endl;
    }
    else
    {
        cout << "not armstrong";
    }

    return 0;
}