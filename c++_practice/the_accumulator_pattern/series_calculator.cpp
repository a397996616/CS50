#include<iostream>
using namespace std;


int main(int argc, char* argv[]){	//char* argv as a string always have two peremeters or none

//  cout<<"number of arguments to the program:"<<argc<<endl;  //argc number of argument pass the program
  if(argc !=2){
	cerr<<"usage :"<<argv[0]<<"number"<<endl;
	exit(1);
  }
  int num=atoi(argv[1]);

//  cout<<"arg 0:"<<argv[0]<<endl;	//print out the first string on the list argv[]
//  cout<<"arg 1:"<<argv[1]<<endl;	//print out the second string on the list argv[]
// cout<<"arg 2;"<<argv[2]<<endl;
	double sum=0;
	cout<<"Num:"<<num<<endl;
	for (int i=0; i<=num; i++){
	sum+=1.0/(i+1);
	cout<<"sum=:"<<sum<<endl;

	}
	return 0; //go back to the function that called this function
	

}
