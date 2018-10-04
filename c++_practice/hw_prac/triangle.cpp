#include<iostream>

using namespace std;

int drawtriangle(int width);
int main(int argc, char*argv[]){

	if(argc != 2){
		cerr<<"Usage: "<<argv[0]<<" width"<<endl;
		exit(1);
	}else{
		drawtriangle(atoi(argv[1]));
	}
	
	return 0;
}


int drawtriangle(int width){
	for(int i=1; i<=width;i+=2){
		for (int k=width; k>i;k-=2){
			cout<<" ";
		}
		for (int j=1; j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
