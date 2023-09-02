#include<iostream>

using namespace std;

int main(){
    int arr[] = {6,5,4,3,2,1};
    int n=6;
for(int i =1 ; i<n ; i++){
    //step -1 -> fetch element from unsorted array
    int value = arr[i];
    //step 2 -> fetch elements before current element
    int j= i-1;
    for( ; j>=0;j--){
        //if previous element is greater than current element
        if(arr[j]>value){
            // step 3 -> shift the previous element in position of current element
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
    }
    //
    arr[j+1] = value;
}

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}