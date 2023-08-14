#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {1,2,-3,4,-5,-6};


    //method 1-> using sort function , T.C -> O(nlogn)
    // 6 element required 24 byte -> one element require 4 byte 
    // int arrayL=  sizeof(arr)/sizeof(arr[0]);
  
    // sort(arr,arr+arrayL);

    // for(int i=0;i<6;i++){
    //     cout<<arr[i];
    // }

    //method 2-> dutch national flag algorithm -> 2 pointers approach
    int low = 0;
    int high=5;

    while(low<high){

        if(arr[low]<0){
            low++;
        }
        else{
            swap(arr[low],arr[high]);
            high--;
        };
    };

    for(int i=0;i<6;i++){
        cout<<arr[i];
    };




    

}