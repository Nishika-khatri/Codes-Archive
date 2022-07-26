#include<iostream>
#include<string>

using namespace std;

class Animal{
    public:
    int age;
    float weight;

    void setValue(int age, int weight){
        this->age=age;
        this->weight=weight;
    }

    int getAge(){
        return age;
    }
    
    float getWeight(){
        return weight;
    }
};

class Dog: public Animal{
    public:
    string breed;

    void setBreed(string breed){
        this->breed=breed;
    }

    void displayProperties(){
        cout<<"Breed : "<<breed<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Weight : "<<weight<<endl;
    }
};

int main(){
    Dog d1;
    d1.setBreed("Husky");
    d1.setValue(2,15);
    d1.displayProperties();

    return 0;

}