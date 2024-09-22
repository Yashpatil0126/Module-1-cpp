
//Q.No. 3
//Create a class 'Student' with three data members which are name, age and address. The constructor of the
//class assigns default values to name as "unknown", age as '0' and address as "not available". It has two
//functions with the same name 'setInfo'. First function has two parameters for name and age and assigns
//the same whereas the second function takes has three parameters which are assigned to name, age and
//address respectively. Print the name, age and address of 10 students.
// Use array of objects.
 #include<iostream>
 using namespace std;
 class student
 {
 	private:
	 	int age;
	 	string name,address;
	public:
		 student()
		 {
			age=0;
			name="unknown";
			address="unavailable";
		 }	
		 void getinfo()
		 {
		 	cout<<"\nEnter the name of the student";
		 	cin>>name;
		 	cout<<"\nEnter the age of the student";
		 	cin>>age;
		 	cout<<"\nEnter the address of the student";
		 	cin>>address;
		 }
		 void setinfo()
		 {
		 	cout<<"\nThe name of the student is :-"<<name;
		 	cout<<"\nThe address of the student is :-"<<address;
		 	cout<<"\nThe age of the student is :-"<<age;
			
		 }
		 void setinfo(int age,string name,string address)
		 {
		 	this->age=age;
		 	this->name=name;
		 	this->address=address;
		 	cout<<"\nThe name of the student is :-"<<name;
		 	cout<<"\nThe address of the student is :-"<<address;
		 	cout<<"\nThe age of the student is :-"<<age;
		 	
		 }
 };
 int main()
 {
 	student s[10];

	int i;

	for(i=0;i<2;i++)
	{
		s[i].getinfo();
	}
 	for(i=0;i<2;i++)
 	{
 		s[i].setinfo();
 		cout<<"\n........................................";
	}
	
 }
 

