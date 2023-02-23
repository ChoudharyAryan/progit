#include<iostream>
using namespace std;

int main(){

int p=5000;
 for (int i = 1; i <31 ; i++)
 {
    if(p<= 0){
        break;
        
    }
    if(i%2==0){
        continue;
        
    }
     
    cout<<"go to hell"<<endl;
    cout<<i<<endl;
    p=p-1000;
    cout<<p<<endl;
     

 }
 
return 0;
}