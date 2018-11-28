#include<iostream>
#include<iomanip>
using namespace std;

struct UndergradStudent {
	int id;
	string first_name;
	string last_name;
	string major;
	double gpa[4];	
};

struct UndergradStudent record[3]={ 
	{1,"Joe","Shmoe","EE",{3.8,3.3,3.4,3.9}}, 
	{2,"Macy","Chen","CS",{3.9, 3.9, 4.0, 4.0}},
	{3, "Peter", "Patrick", "ME", {3.8, 3.0, 2.4, 1.9}}

};

void printRecords (struct UndergradStudent* records, int numrecords){

	for (int i = 0; i < numrecords; i++){
		double sumGPA = 0;
		for(int j=0; j<4; j++){
			sumGPA += records[i].gpa[j];
		}
		cout<<"These are the student records:"<<endl;
		
		cout<<setprecision(3)<<"ID# "<<records[i].id<<", "<<records[i].first_name<<", "<<records[i].last_name<<", "<<records[i].major<<", Average GPA: "<<sumGPA / 4<<endl;
	}
}
int main(){
	printRecords(record, 3);
}
