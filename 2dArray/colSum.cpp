#include<iostream>

using namespace std;

int main(){
    int arr [4] [4] ={
                     {1,2,3,4},
                     {5,6,7,8},
                     {4,5,7,4},
                     {3,4,7,5},
                     
                     };

        for(int i=0;i<4;i++){
            int sum=0;
            for(int j=0;j<4;j++){
                sum+=arr[j][i];
            }
            cout<<sum<<endl;
        }
}