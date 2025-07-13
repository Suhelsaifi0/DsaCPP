#include<iostream>
 using namespace std;
  int main(){

//    int a = 5;
//    int* ptr = &a;
//    cout<<a<<endl;
//    cout<<&a<<endl;
//    cout<<ptr<<endl;
//    cout<<&ptr<<endl;
//    cout<<*ptr<<endl;

     int a = 5;
     int *ptr = &a;
     cout<<sizeof(ptr)<<endl;

    char ch = 'a';
    char *cptr = &ch;
    cout<<sizeof(cptr)<<endl;

    long l = 1040;
    long *lptr = &l;
    cout<<sizeof(lptr)<<endl;

     return 0;
  }