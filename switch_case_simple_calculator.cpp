#include<iostream>
using namespace std;

int main() {
    int a,b,x;
    cin>>a;
    cin>>b;
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
       cout<<a-b;
    break;

    case 3 :
       cout<<a*b;
       break;
     case 4:
     cout<<a/b;
       break;

     case 5:
     cout<<a%b;
       break;       
    default:
    cout<<"what!";
        break;
    }
}