#include<iostream>

using namespace std;

int bs(int arr[], int start , int end , int target){
    while(start <=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int exponentialSearch(int arr[],int n , int x){
    if(arr[0]==x) return 0;

    int i =1;
    while(i<n && arr[i]<=x){
        i *=2;
    }
    return bs(arr , i/2 , min(i,n-1),x);
}

int main(){
    int arr[]= {3,4,5,6,11,13,14,15,56,70};

    //total element
    int n = sizeof(arr)/sizeof(int);

    int x = 13;

    int ans = exponentialSearch(arr , n , x);
    cout<<"element found at index "<<ans;
    
}