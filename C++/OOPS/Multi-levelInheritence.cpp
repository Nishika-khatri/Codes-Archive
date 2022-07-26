#include<iostream>
#include<string>
using namespace std;

class car{
    public: 
    string company;
    void baseFunction(){
        cout<<"Hello this is base function!"<<endl;
    }
};

class Model:public car{
    public:
    string model;
    void immediateChild(){
        cout<<"This is immediate child!"<<endl;
    }
};

class Color: public Model{
    public:
    string color;
    void indirectchild(){
        cout<<"This is indirect child!"<<endl;
    }
};

int main(){
    Color c1;
    c1.indirectchild();
    c1.immediateChild();
    c1.baseFunction();

    return 0;
}