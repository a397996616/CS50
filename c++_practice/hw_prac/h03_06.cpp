#include<iostream>
using namespace std;

int main(int argc, char*argv[]){
	int score = atoi(argv[1]);

		if(score<0 || score >100){
			cerr<<"not a valid score"<<endl;
			exit(1);
		}else if(score>=90 && score<=100){
			cout<<"grade is 'A'"<<endl;
		}else if(score<90 && score>=80){
			cout<<"grade is 'B'"<<endl;				
		}else if(score<80 && score>=70){
			cout<<"grade is 'C'"<<endl;				
		}else if(score<70 && score>=60){
			cout<<"grade is 'D'"<<endl;
		}else (score<60 && score>=0){
			cout<<"grade is 'F'"<<endl;
		}			

	
return 0;

}

