#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a=12;
    
    cout<<sizeof(a)<<endl;

    float b=5.5;
    cout<<sizeof(b)<<endl;

    char c;
    cout<<sizeof(c)<<endl;
    double d=14.8888888888888;
    cout<<sizeof(d)<<endl;

    bool e;
    cout<<sizeof(e)<<endl;

    short int si;
    long int li;
    signed int di;
    unsigned int fi;
    cout<<sizeof(si)<<endl;
    cout<<sizeof(li)<<endl;
    cout<<sizeof(di)<<endl;
    cout<<sizeof(fi)<<endl;

}