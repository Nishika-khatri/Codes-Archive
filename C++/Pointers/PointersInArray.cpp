#include<iostream>

using namespace std;

int main(){

    int arr[4]={2,5,9,10};

    cout<<"Address of arr "<<arr<<endl;
    cout<<"Address of arr "<<&arr<<endl;
    cout<<"Value at 0th index of arr "<<arr[0]<<endl;
    cout<<"Value at 0th index of arr "<<*arr<<endl;
    cout<<"Value at (*arr)+1 "<<(*arr)+1<<endl;
    cout<<"Address of 1st index of arr "<<&arr[1]<<endl;
    cout<<"Address of 1st index of arr "<<arr+1<<endl;
    
    int temp[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr1 = temp;
    cout<<"Size of temp : "<<sizeof(temp)<<endl;
    cout<<"Size of ptr  : "<<sizeof(ptr1)<<endl;
    cout<<"First element at pointed by ptr : "<<*ptr1<<endl;
    cout<<"Size of value stored at address pointed by ptr :"<<sizeof(*ptr1)<<endl;

   //Char Array 
   char ch[5] = "abcd";
   cout<<"Char array : "<<ch<<endl;

   char *ptr = ch;
   cout<<"First -> "<<ptr<<endl;
   cout<<"Second -> "<<*ptr<<endl;
   cout<<"Third -> "<<&ptr<<endl;


    return 0;
}