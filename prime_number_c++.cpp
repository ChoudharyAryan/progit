#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s=0;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<"not prime";
            s=1;
            break;
        }
    }
   if(s==0){
     cout<<"prime";
   }
    
}