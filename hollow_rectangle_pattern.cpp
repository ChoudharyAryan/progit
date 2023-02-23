#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                cout << " *";
            }
            else
            {
                if (i > 1 || i < row)
                {
                    for (int k = 1; k <= col; k++)
                    {
                        if (k == 1)
                        {
                            cout << " *";
                        }
                        else if (k == col)
                        {
                            cout << " *";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                }

                break;
            }
        }
        cout << endl;
    }
}