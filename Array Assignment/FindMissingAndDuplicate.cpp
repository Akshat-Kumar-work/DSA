#include<iostream>
#include<algorithm>

using namespace std;

void findMissing(int a[] , int n){

    //method 1 -> visited method
    // for(int i=0;i<n;i++){
    //     int index = abs(a[i]);

    //     if(a[index-1] > 0){
    //         a[index -1 ] *= -1;
    //     }
    // }

    // // for( int i=0;i<n;i++){
    // //     cout<<a[i]<<" ";
    // // }

    // //all positive index are missing
    // for(int i=0;i<n;i++){
    //     if(a[i]>0){
    //     cout<<"missing element"<<i+1<<endl;
    //   //  cout<<"duplicate element"<<a[i];
    //     }
        
    // }


    //method 2 -> sorting and checking
    int i=0;
    while(i<n){
        int index = a[i]-1;

        if(a[i]!= a[index]){
            swap(a[i],a[index]);
        }
        else{
            ++i;
        }
       
    }

}

int main(){

    int n;
    int a[]={1,2,2,4,5};
    n = sizeof(a)/sizeof(int);

    findMissing(a,n);

}