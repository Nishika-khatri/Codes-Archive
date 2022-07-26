#include<iostream>

using namespace std;

class Hero{
    int health;
    public :
    char level;
    static int timeleft;

};

int Hero::timeleft = 10;

int main(){
    cout<<Hero::timeleft<<endl;
    return 0;
}