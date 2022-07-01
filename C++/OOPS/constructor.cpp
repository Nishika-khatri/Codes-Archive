#include<iostream>
#include<string>

using namespace std;

class Employee{
    int id;
    string name;
    string department;

    public:

    Employee(){
        id= 0;
        name = "none";
        department = "none";
    }

    Employee(string name, int id, string department){
        this->name=name;
        this->id = id;
        this->department = department;
    }

    void displayDetails(){
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Employee Id : "<<id<<endl;
        cout<<"Employee Department : "<<department<<endl;
    }
};

int main(){
    Employee emp;
    string name,department;
    int id;

    cout<<"\nEnter Name :";
    getline(cin,name);

    cout<<"\nEnter department : ";
    getline(cin,department);

    cout<<"\nEnter id : ";
    cin>>id;
    
    emp.displayDetails();

    Employee Emp1(name,id,department);
    Emp1.displayDetails();


    return 0;
}