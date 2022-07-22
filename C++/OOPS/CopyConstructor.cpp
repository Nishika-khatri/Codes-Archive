#include<iostream>
#include<cstring>

using namespace std;

class Patient{

    int age;
    int fee;
    public:
    char *name;

    Patient(){
        cout<<"Welcome!"<<endl;
        name = new char[100];
    }
    Patient(int age, int fee){
        this->age=age;
        this->fee=fee;
    }

    Patient(Patient& temp){
        cout<<"\nCopy Constructor"<<endl;
        char *ch = new char[strlen(temp.name)];
        strcpy(ch,temp.name);
        this->name = ch;
        this->age = temp.age;
        this->fee = temp.fee;
    }

    void print(){
        cout<<"\n"<<endl;
        cout<<"Patient's Name : "<<name<<endl;
        cout<<"Patient's Age : "<<age<<endl;
        cout<<"Fee charged to Patient : "<<fee<<endl;
    }

    void setVal(int age, int fee){
        this->age = age;
        this->fee = fee;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    ~Patient(){
        cout<<"Destructor Called"<<endl;
    }

    
   
};

int main(){
    // Patient P1(26,1500);
    // P1.print();
    //Copy constructor
    // Patient P2(P1);
    // P2.print();
    char name[8]= "Nishika";

    Patient *p1 = new Patient();
    p1->setVal(30,1500);
    p1->setName(name);
    p1->print();

    Patient p2(*p1);
    cout<<"\nPatient 2 : "<<endl;
    p2.print();

    p1->name[0]='G';
    cout<<"\nUpdated Info for P1 "<<endl;
    p1->print();

    cout<<"\nUpdated Info for P2 "<<endl;
    p2.print();

    delete p1;



    return 0;
}