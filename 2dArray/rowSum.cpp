#include<iostream>

using namespace std;

int main(){

    int rowsum=0;
    

    int arr [5] [4] ={
                     {1,2,3,4},
                     {5,6,7,8},
                     {4,5,7,4},
                     {3,4,7,5},
                     {7,5,3,2}
                     };

    //print all row sum
    //row
    for( int i=0;i<5;i++){

        //column
        for(int j=0;j<4;j++){

            rowsum+= arr[i][j];
           
            
        }

        cout<<rowsum<<endl;
        rowsum =0;

    }

}