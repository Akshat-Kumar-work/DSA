#include<iostream>


using namespace std;

int OddOccuring(int arr[] ){

    int start =0;
    int end = 4;
    int mid = start+(end-start)/2;


    while(start<=end){

        if(start == end){
            return start;
            break;
        }

        //if mid even hai
        else if( (mid&1) == 0){

            if(arr[mid]==arr[mid+1]){
                start = mid+2;
            }
            else{
      
                end=mid;
            }
        }

        //if mid odd hai
        else{

            if(arr[mid]==arr[mid+1]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        mid = start+(end-start)/2;
    }

 return -1;

}

int main(){
 // int arr[] = {1,1,2,2,3,3,4,4,3,600,600,4,4};
    int arr[] = {5,5,7,7,4,6,6};

  int ans = OddOccuring(arr);
  cout<<"odd occuring element is "<<arr[ans];


}