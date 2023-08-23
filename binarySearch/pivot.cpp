#include<iostream>

using namespace std;

int leftMostPivot(int arr[]){
    int start=0;
    int end=5;
    int mid = start+(end-start)/2;

    while (start<=end)
    {

        //agar sirf sorted array hai
        if(start==end){
            return start;
        }
        //agar mid pivot element par hai
        else if(arr[mid]>arr[mid+1]  &&  mid+1<=5){
            return arr[mid];
            break;
        }

        //agar mid right most pivot par hai
        else if(mid-1>=0  &&  arr[mid-1]>arr[mid]){
            return arr[mid-1];
            break;
        }

        //agar mid desecending order vali row m hai 
        else if(arr[mid]<arr[start]){
            end = mid-1;
        }

        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }

    return -1;
    
}

int main(){
    int arr[] = {4,5,6,7,8,3,2,1};

    int leftMostPivotElement = leftMostPivot(arr);
    cout<<"left most pivot element is "<<leftMostPivotElement;

return 0;
}