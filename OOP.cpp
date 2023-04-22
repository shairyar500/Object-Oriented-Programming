#include<iostream>
using namespace std;

class Employee{
	public:
		string Name;
		string Company;
		string Position;
		int Year;
		
		void profileUser1(){
			cout<<"Name = " << Name<<endl;
			cout<<"Company = "<<Company<<endl;
			cout<<"Position = "<<Position<<endl;
			cout<<"Year = "<<Year<<endl;
		}
		
		Employee(string name, string company, string position, int year){
			Name = name;
			Company = company;
			Position = position;
			Year = year;
		}
	
};

int main()
{
	Employee user1 = Employee("Shairyar Shamshad Ali", "Aga Khan Examination Board", "IT Assistant", 2023 );
	
	Employee user2 = Employee("Javed Hirani", "Aga Khan Examination Board", "IT Specialist", 2023 );
	
	cout<<"user1"<<endl;
	user1.profileUser1();
	cout<<"User2"<<endl;
	user2.profileUser1();
}
