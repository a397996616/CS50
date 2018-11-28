#include<iostream>
using namespace std;
void reverse(int number[], int length);
int main(){
/*	
	int arr[5];
	for (int i = 0; i<5;i++){
		if (i<3) arr[i]='a';
		else arr[i]='z';
		cout<<arr[i]<<endl;
	}


	int codes[]={44,66,83,973,-977};
	for (int count:codes){
		cout<<count<<" ";
		if ((count/2)<50)
			cout<<count<<endl;
		else cout<<"invalid"<<endl;
	}
*/
int nums[]={10,20,30,40,50};
reverse(nums, 5);
for (int i=0;i<5;i++)
	cout<<nums[i]<<" ";	

}


void reverse(int number[], int length){
	
	int temp[length];

	for(int i=0; i<length; i++)	//temp = number
		temp[i]=*(number+i);
	
	

	for (int j=0; j<length; j++){
	
		number[j]=temp[length-j-1];
	
	}

}
