#include<iostream>

using namespace std;

int main(){

    int maxNo = INT8_MIN;
    int minNo = INT8_MAX;
    

    int arr [5] [4] ={
                     {0,2,3,4},
                     {5,6,7,8},
                     {4,5,7,4},
                     {3,4,7,5},
                     {7,5,3,2}
                     };


    //row
    for( int i=0;i<5;i++){

        //column
        for(int j=0;j<4;j++){

            if(arr[i][j]>maxNo){
                maxNo=arr[i][j];
            }
            if(arr[i][j]<minNo){
                minNo = arr[i][j];
            }
        
        }
      

    }

    cout<<"maximum no"<<" "<<maxNo<<endl;
    cout<<"minimum nO"<<" "<<minNo;

}