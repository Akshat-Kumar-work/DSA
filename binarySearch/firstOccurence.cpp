#include<iostream>
#include<algorithm>

using namespace std;

int  firstOccur(int arr[] , int size,int target){
    int start =0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){
            end=mid-1;
            ans = mid;
        }
        else if (arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }

    return ans;
}

int  LastOccur(int arr[] , int size,int target){
    int start =0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){
            start=mid+1;
            ans = mid;
        }
        else if (arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }

    return ans;
}

int main(){

    int arr[] = {1,3,4,4,4,4,4,6,7,9};
    int size = 10;
    int target = 4;
    int occur = firstOccur(arr,size , target);
    //cout<<"element first occur at index"<<" "<<occur<<endl;
    int Lastoccur = LastOccur(arr,size,target);
    //cout<<"element last occur at index"<<" "<<Lastoccur<<endl;


//using stl function
auto ans = lower_bound(arr,arr+size,4);
cout<<ans-arr<<endl;

auto address = &arr[9];
cout<<address-arr;







}