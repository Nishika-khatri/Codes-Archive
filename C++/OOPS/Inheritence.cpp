#include<iostream>
#include<string>

using namespace std;

class Human{
    protected:
    float weight=45.23;
    public:
    int age;
    float height=5.7;
    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age=age;
    }
};


class Female: public Human{
    public:
    string name="Nishika";

    void sleep(){
        cout<<"Girl is sleeping."<<endl;
        cout<<"Weight of the girl :"<<weight<<endl;
    }
};


int main(){
    Female f1;
    f1.setAge(21);
    cout<<f1.age<<"\t"<<f1.height<<"\t"<<"\t"<<f1.name<<endl;
    f1.sleep();
    return 0;
}