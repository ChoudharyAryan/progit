#include<iostream>
using namespace std;

int main(){
  int n,i,m;
  cin>>n;
  cin>>m;
  for ( i = n; i <= m; i++)
  {
    int j;
   for ( j = 2; j < i; j++)
   {
    if(i%j==0){
    break;

    }
    
   }
   if (j==i)
   {
    cout<<i<<endl;
    
   }
   
   
  }
  

}