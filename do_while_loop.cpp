#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    do
    {
        cout<<n<<endl;
        int a=n/2;
        n=a;
    } while (n>0);
    
}