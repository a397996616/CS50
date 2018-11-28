#include<iostream>
using namespace std;

int main(){
int num=10, *ptr1=&num, *ptr2=0;

cout<<"ptr1 = " <<ptr1<<endl;
cout<<"*ptr1 = " <<*ptr1<<endl;
cout<<"ptr2 = " <<ptr2<<endl;
//cout<<"*ptr2 = "<<*ptr2<<endl;

if(ptr2) ptr1=ptr2;
else if(ptr1) ptr2=ptr1;
(*ptr1)++;


cout<<"ptr1 = " <<ptr1<<endl;
cout<<"*ptr1 = " <<*ptr1<<endl;
cout<<"ptr2 = " <<ptr2<<endl;
cout<<"*ptr2 = "<<*ptr2<<endl;

}
