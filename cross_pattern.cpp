#include<iostream>
using namespace std;

int main() {

   int n,m;
   cin>>n>>m;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
          if (j==i || j==(m-i+1))
          {
            cout<<" *";
          }
          else{
            cout<<"  ";
          }
          
    }
    cout<<endl;
  }
   
   return 0;
    
}