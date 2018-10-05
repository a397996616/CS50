#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double x1=0;
	double x2=0;
	int a=0;
	int b=0;
	int y=0;
	int c=0;
	double delta=0;
	cout<<"enter variable a:";
	cin>>a;
	cout<<"enter variable b:";
	cin>>b;
	cout<<"enter variable c:";
	cin>>c;
	delta=sqrt(b*b-4*a*c);
	
	if(delta<0){	
		x1=(-b+delta)/(2*a);
		x2=(-b-delta)/(2*a);
		cout<<"x1="<<x1<<", x2="<<x2<<endl;
	}else if(delta==0){
		x1=x2=-b/(2*a);
		cout<<"x1=x2="<<x1<<endl;
	}else{
		cout<<"No Solution"<<endl;
	}


	return 0;
}
