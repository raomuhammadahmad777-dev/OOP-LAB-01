#include<iostream>
using namespace std;

typedef struct{
	
	int book_id;
	string book_title;
	string author_name;
	float price;
	
}Book;

int main()
{
	float sum=0;
	Book details[3];
	
	cout<<"Enter details for 3 books:"<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<"Book "<<i+1<<":"<<endl;
		cout<<"ID: ";
		cin>>details[i].book_id;
		cin.ignore();  

		
		cout<<"Title: ";
		getline(cin , details[i].book_title);
		
		cout<<"Author: ";
		getline(cin , details[i].author_name);
		
		cout<<"Price: ";
		cin>>details[i].price;
		
		sum = sum + details[i].price;
		
		cout<<endl;

	}
	
	cout<<"Total Price of All Books: $"<<sum<<endl;
}
	
