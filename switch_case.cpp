 #include<iostream>
 using namespace std;

 int main(){
    char tell;
    cin>>tell;

    switch (tell)
    {
    case 'a':
        cout<<"out";
        break;
    case 'b':
        cout<<"not out";
        break;

    case 'c':
       cout<<"run out";
       break;    
    case 'd':
      cout<<"third empire";
      break;
    default:
       cout<<"no match";
       break;
    }
 }