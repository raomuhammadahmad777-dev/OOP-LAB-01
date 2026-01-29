#include<iostream>
using namespace std;

typedef struct{
	
	int roll_no;
	string name;
	int marks[3];
	float cgpa;
	
}Student;

void details(Student* students)
{
	cout<<"Roll No: ";
	cin>>students->roll_no;
	
	cin.ignore();
	
	cout<<"Name: ";
	getline(cin , students->name);
	
	cout<<"Marks (3 subjects): ";
	for(int i=0; i<3; i++)
	{
		cin>>students->marks[i];
	}
}

void cal_cgpa(Student* students, int n)
{
	float sum = 0;
	for(int i=0; i<3; i++)
	{
		sum = sum + students->marks[i];
	}
	
	students->cgpa = sum/30;
	cout<<"Calculated CGPA: "<<students->cgpa<<endl;
}

void display(Student* students, int n)
{
	cout<<"Students with CGPA >= 3.0:"<<endl;
	for(int i=0; i<n; i++)
	{
		if(students[i].cgpa >= 3.0)
		{
			cout<<i+1<<". "<<students[i].name<<" - CGPA: "<<students[i].cgpa<<endl;
		}
	}
	cout<<endl;
}

void top_performer(Student* students, int n)
{
	float max = 0;
	int count=-1;
	
	for(int i=0; i<n; i++)
	{
		if(students[i].cgpa >= max)
		{
			max = students[i].cgpa;
			count = i;
		}
	}
	
	cout<<"Top Performer: "<<students[count].name<<" with CGPA: "<<students[count].cgpa;
}

int main()
{
	int n;
	cout<<"Enter number of students: ";
	cin>>n;
	
	Student* students = new Student[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter details for student "<<i+1<<":"<<endl;
		details(&students[i]);
		cal_cgpa(&students[i], n);
		
		
	}
	display(students, n);
	top_performer(students, n);

    delete[] students;	
}
