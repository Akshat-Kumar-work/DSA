#include<iostream>

using namespace std;

int main(){

int transpose [4] [4];
   

    
    

    int arr [4] [4] ={
                     {1,2,3,4},
                     {5,6,7,8},
                     {4,5,7,4},
                     {3,4,7,5},
                    
                     };

  
    //row
    for( int i=0;i<4;i++){

        //column
        for(int j=0;j<4;j++){

         transpose [i] [j] = arr[j][i];
                 
        }



    };


    
    //row
    for( int i=0;i<4;i++){

        //column
        for(int j=0;j<4;j++){

           cout<<transpose[i][j];
                 
        }
        cout<<endl;


    };

}