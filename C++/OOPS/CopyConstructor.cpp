#include<iostream>

using namespace std;

class Patient{

    int age;
    int fee;
    public:
    Patient(){
        cout<<"Welcome!"<<endl;
    }
    // Patient(int age, int fee){
    //     this->age=age;
    //     this->fee=fee;
    // }

    // Patient(Patient& temp){
    //     cout<<"\nCopy Constructor"<<endl;
    //     this->age=temp.age;
    //     this->fee=temp.fee;
    // }

    Patient(Patient& temp){
        cout<<"\nCopy Constructor"<<endl;
        this->age = temp->age;
        this->fee = temp->fee;
    }

    void print(){
        cout<<"Patient's Age : "<<age<<endl;
        cout<<"Fee charged to Patient : "<<fee<<endl;
    }

    void setVal(int age, int fee){
        this->age = age;
        this->fee = fee;
    }

    
   
};

int main(){
    // Patient P1(26,1500);
    // P1.print();
    //Copy constructor
    // Patient P2(P1);
    // P2.print();

    Patient *p1 = new Patient;


    return 0;
}