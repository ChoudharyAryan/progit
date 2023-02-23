#include<iostream>
using namespace std;
void pyth(int p,int b,int h);
 
 
int main()
{
    cout<<"enter prependicular,base,hypotenus";
    int prependicular,base,hypotenus;
    cin>>prependicular>>base>>hypotenus;
    pyth(prependicular,base,hypotenus);



    return 0;
}

void pyth(int p,int b,int h){

    if (p*p+b*b==h*h)
    {
        cout<<"pythogrian triplet";
    }
    else{
        cout<<"no triplet";
    }
    
}