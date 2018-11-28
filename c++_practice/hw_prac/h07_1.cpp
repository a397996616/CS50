#include<iostream>
using namespace std;

int main(){
/*
	int *p1, *p2, *p3;
	p1 = new int;
	p2 = new int;
	p3 = p1;
	*p1 = 20;
	*p2 = 30;
	cout<< *p1<<' '<<*p2<<' '<<*p3<<endl;
	p1 = p2;
	cout<< *p1<<' '<<*p2<<' '<<*p3<<endl;
	*p3 = *p2;
	cout<< *p1<<' '<<*p2<<' '<<*p3<<endl;
*/

	int array_size = 4, *a;
	a = new int [array_size];
	int *p = a;
	for (int i = 0; i < array_size; i++){
		*(a+i) = 2*i;
	}
	p[0]=10;
	for (int i = 0; i < array_size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}	

