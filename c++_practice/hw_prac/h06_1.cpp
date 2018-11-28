#include<iostream>
using namespace std;

void zero_both(int *x, int *y){
	*x=0;
	*y=0;
}

void phooey(int &z){
	z=z/2;
	cout <<"z="<<z<<endl;
}


int main(){
	int x;
	int y;
	zero_both(&x, &y); //zero_both(address of x, address of y)
	cout<<"x= "<<x<<" "<<"y= "<<y<<endl;

	int b=3;
	
	phooey(b);
	cout<<"b="<<b<<endl;
}



