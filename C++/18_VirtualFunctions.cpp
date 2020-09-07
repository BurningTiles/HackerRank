/**
 * Author  : BurningTiles
 * Created : 2020-09-07 11:50:38
 * Link    : GitHub.com/BurningTiles
 * Program : Virtual Function
**/

#include <bits/stdc++.h>
using namespace std;

class Person{
	protected:
		string name;
		unsigned int age;
	public:
		virtual void getdata()=0;
		virtual void putdata()=0;
};

class Professor : public Person{
	static int id;
	int publication, curID;
	public:
		void getdata(){
			cin >> name >> age >> publication;
			curID = ++id;
		}
		void putdata(){
			cout << name << " " << age << " " << publication << " " << curID << "\n";
		}
};

class Student : public Person{
	static int id;
	int marks[6], curID, sum;
	public:
		void getdata(){
			cin >> name >> age;
			sum = 0;
			for(int i=0; i<6; i++){
				cin >> marks[i];
				sum += marks[i];
			}
			curID = ++id;
		}
		void putdata(){
			cout << name << " " << age << " " << sum << " " << curID << "\n";
		}
};

int Student::id = 0;
int Professor::id = 0;

int main(){
	int n, val;
	cin>>n; //The number of objects that is going to be created.
	Person *per[n];

	for(int i = 0;i < n;i++){

		cin>>val;
		if(val == 1){
			// If val is 1 current object is of type Professor
			per[i] = new Professor;

		}
		else per[i] = new Student; // Else the current object is of type Student

		per[i]->getdata(); // Get the data from the user.

	}

	for(int i=0;i<n;i++)
		per[i]->putdata(); // Print the required output for each object.

	return 0;
}

/**

**/