#include<iostream>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    int x=1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<x<<"  ";
            (x==1)?x=0:x=1;
        }
        cout<<endl;
    }
    




    return 0;
}