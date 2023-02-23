#include<iostream>
using namespace std;
int fact(int n);
 
 
int main()
{
    int a;
    cin>>a;
    cout<<fact(a);
    

    return 0;
}


int fact(int n){
    int res=1;
    for (int i = n; i > 0; i--)
    {
    res=res*i;
        
    }
    return res;
    
}