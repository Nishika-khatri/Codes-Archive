#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size =0;

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index]= val;

        while(index>1){
            if(arr[index]>arr[index/2]){
                swap(arr[index],arr[index/2]);
                index = index/2;
            }else{
                return;
            }
        }
    }

    void deleteInHeap(){
        if(size == 0){
            cout<<"Nothing Left to be Delete"<<endl;
            return;
        }
        //Step 1: Place the last element into the root
        arr[1]=arr[size];

        //Step 2: Remove the last element 
        size = size-1;

        //Step 3 : Place the root element into its correct position.
        int i = 1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[leftIndex],arr[i]);
                i = leftIndex;
            }else if(rightIndex<size && arr[i]< arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }else{
                return;
            }
        }
    }
    void print(){
        for(int i =1;i<=size;i++){
            cout<<arr[i]<<"\t";
        }cout<<endl;
    }
};

void heapify(int arr[], int n , int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<=n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest = right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[], int n){
    int size = n;

    while(size>1){
        //step 1: swap
        swap(arr[1],arr[size]);

        //step 2: 
        size--;
        //Step 3:
        heapify(arr,size,1);
    }
}

int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    cout<<"Heap : "<<endl;
    h.print();

    h.deleteInHeap();
    cout<<"After deletion "<<endl;
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i =n/2;i>0;i--){
        heapify(arr,n,i);
    }

    cout<<"Printing the array : "<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<"\t";
    }

    //heapsort
    heapsort(arr,n);
    cout<<"\nPrinting the array : "<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}