#include<iostream>

using namespace std;

int main(){
    int arr [3] [3] = { {1,2,3},
                        {4,5,6},
                        {7,8,9}
                                };

    //print 5 
    cout<<arr[1][1]<<endl;

    int TotalCol = 3;
    int TotalRow =3;

    //print index of 5
    cout<<TotalCol * 1+1<<endl;

    //printing 2d array row wise
    for(int i=0;i<TotalRow;i++){
       

        for(int j =0; j<TotalCol;j++){
           cout<< arr[i][j];

        }
        cout<<endl;
    }

     //printing 2d array col wise
    for(int i=0;i<TotalRow;i++){
       

        for(int j =0; j<TotalCol;j++){
           cout<< arr[j][i];

        }
        cout<<endl;
    }
}