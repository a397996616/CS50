#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int a(1), b(2), c(2), d(2), e(2);
	double ex1;
	double ex2;
	double ex3;
	double ex4;

//	ex1=(a+b)*c/static_cast<double>(d+e);
//	ex2=static_cast<double>((a+b)*c)/(d+e);
//	ex3=(a+b)*static_cast<double>(c)/(d+e);
//	ex4=static_cast<double>((a+b)*(c)/(d+e));

//	cout<<ex1<<endl<<ex2<<endl<<ex3<<endl<<ex4<<endl;

	double answer;
	answer = static_cast<double>(9)/2;
	cout<<answer<<endl;
	double answer2;
	answer2 = 9/2;
	cout<<answer2<<endl;
	return 0;

}
