#include<iostream> 
#include<string.h>
using namespace std;
int const s=2;

struct student{
	char name[50];
	int  rollno;
	float sgpa;
};
void accept(struct student list[s]);
void display(struct student list[80]);
void bubblesort(struct student list[s]);
void insertionsort(struct student list[s]);
void linearsearch(struct student list[s]);

int main(){
	int choice,i,x;
	int size; 
	struct student data[20];
	accept(data);
	do{
		cout<<"\n enter 1 for bubble sort:";
		cout<<"\n enter 2 for insertion sort";
		cout<<"\n enter 3 for LINEAR SEARCH";
		cin>>choice; 
		
		switch(choice){
			case 1:
				bubblesort(data);
				display(data);
				break;
			case 2:
			    insertionsort(data);
				display(data);
				case 3:
			    linearsearch(data);
				break;
			default:
			   cout<<"select valid choice---";					
		}
		cout<<"enter 1 to continue and 0 to exit:";
		cin>>x;
	}while(x!=0);
}

void accept(struct student list[s]){
	cout<<"enter the students detail";
	int i;
	for(i=0;i<s;i++)
	{
		cout<<endl;
		cout<<"\n Student\n "<<i+1<<endl;
		cout<<"\n enter the roll number: "<<endl;
		cin>>list[i].rollno;
		cout<<"\n enter the name: "<<endl;
		cin>>list[i].name;
		cout<<"\n enter the SGPA:"<<endl;
		cin>>list[i].sgpa;
	}
}
void display(struct student list[80]){
	int i;
	for(i=0;i<s;i++){
		cout<<"Name\tRoll No.\tSGPA"<<endl;
		cout<<list[i].name<<"\t";
		cout<<list[i].rollno<<"\t";
		cout<<list[i].sgpa<<"\t"<<endl;
		
	}
	
}
void bubblesort(struct student list[s]){
	int i,j;
	struct student temp;
	for(i=0;i<s-1;i++){
	for(j=0;j<(s-1-i);j++){
		if(list[j].rollno>list[j+1].rollno){
			temp=list[j];
			list[j]=list[j+1];
			list[j+1]=temp;
		}
	}	
	}
}
void insertionsort(struct student list[s]){
	int k,j;
	struct student temp;
	for(k=1;k<s;k++){
		temp=list[k];
		j=k-1;
		
		while(strcmp(list[j].name,temp.name)>0&&j>=0){
			list[j+1]=list[j];
			--j;
		}
		list[j+1]=temp;
	}
}
void linearsearch(struct student list[s]){
	float sgpa;
	int i;
	cout<<"\n enter SGPA";
	cin>>sgpa;
	for(i=0;i<s;i++){
		if(sgpa==list[i].sgpa)
		{
			cout<<"\n Name:"<<list[i].name<<endl;
			cout<<"\n Roll no:"<<list[i].rollno<<endl;
			cout<<"\n SGPA:"<<list[i].sgpa<<endl;
			
		}
	}
}
