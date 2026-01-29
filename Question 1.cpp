#include<iostream>
using namespace std;

int main()
{
	float marks[5], avg, sum=0;
	cout<<"Enter marks of 5 subjects:"<<endl;
	
	for(int i=0; i<5; i++)
	{
		cout<<"Subject "<<i+1<<": ";
		cin>>marks[i];
		
		sum = sum + marks[i];
	}
	avg= sum/5;
	
	cout<<"Total Marks: "<<sum<<endl;
	cout<<"Average Marks: "<<avg<<endl;
	
	if(avg >= 50)
	{
		cout<<"Result: Pass"<<endl;
	}
	else
	{
		cout<<"Result: Pass"<<endl;
	}
}
