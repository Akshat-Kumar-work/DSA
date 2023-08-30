#include<iostream>

using namespace std;

int searchNearlySorted(int arr[],int target){
    int start =0;
    int end = 6;
    int mid = start + (end - start)/2;

    while(start<=end){

        if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        else if(arr[mid]==target){
            return mid;
        }
        else if(mid+1<=end && arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid]>target){
            end = mid-2;
        }
        else{
            start = mid+1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){

    int arr[] = {10,3,40,20,50,80,70};
    int target =80;
    int ans = searchNearlySorted(arr,target);
    cout<<"element found at index "<<ans;


}