#include<iostream>
using namespace std;

int main(){
	int a, sumpositive=0, sumnegative=0;
	string promptcontinue="\nto continue enter y/Y\n";
	string promptnum="\nenter a number:";
	char response='y';

	while (response =='y'|| response=='Y'){
		cout<<promptnum;
		cin>>a;
		if(a<=0){
			sumpositive+=a;
		}else{
			sumnegative+=a;
		}
		cout<<promptcontinue;
		cin>>response;
	}
	cout<<"positive:"<<sumpositive<<endl;
	cout<<"negative:"<<sumnegative<<endl;
	return 0;
	}
