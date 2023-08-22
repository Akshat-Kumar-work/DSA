#include<iostream>

using namespace std;

int main(){
    int arr[] = {2,4,6,8,10,12,16};
    int target = 6;

    int start =0;
    int end = 6;
    int mid= start + (end-start)/2;
    //(start+end)/2;

    while (start<=end)
    {
        int element = arr[mid];

        if(element == target){
            cout<<"index of element is "<< mid;
            break;
        }

        else if (element > target){
            end = mid-1;
        }

        else{
            start = mid+1;
        }

        mid= start + (end-start)/2;

    }

    
    

    return 0;
}