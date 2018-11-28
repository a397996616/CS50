#include<iostream>
using namespace std;

void foo(int*a, int *b, int &c, int d){ //pointer, pointer, referance, int
	*a=*a+2;			//pass by value has two ways
	b=b+2;				//1. pass by pointer
	c=c+2;				//2. pass by referance
	d=d+2;

}

int main(){
	int x=10, y=15, z=20,s=30;
	foo(&x,&y,z,s);
	cout <<x<<","<<y<<","<<z<<","<<s<<endl;
	return 0;

}
