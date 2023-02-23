#include<iostream>
using namespace std;
int sum(int n);
 
 
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    
    return 0;
}

int sum(int n){
    int s=0;
    for (int i = 0; i <= n; i++)
    {
        s=s+i;
    }
    return s;
}