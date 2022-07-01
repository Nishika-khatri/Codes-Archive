#include<iostream>
#include<string>

using namespace std;

class Student{

    string name;
    int age;
    int rollNo;

    public:
    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    int getRollNo(){
        return rollNo;
    }

    void setName(string str){
        name = str;
    }

    void setAge(int ag){
        age = ag;
    }

    void setRollNo(int rn){
        rollNo = rn;
    }
};

int main(){
    Student std1;

    int age;
    int rollNo;
    string str;

    cout<<"Enter Name : ";
    getline(cin,str);

    cout<<"\nEnter Age : ";
    cin>>age;
    cout<<"\nEnter Roll No. :";
    cin>>rollNo;

    std1.setName(str);
    std1.setAge(age);
    std1.setRollNo(rollNo);

    cout<<"Student Name : "<<std1.getName()<<endl;
    cout<<"Student Age : "<<std1.getAge()<<endl;
    cout<<"Student Roll No. : "<<std1.getRollNo()<<endl;
    
    return 0;
}