#include<iostream>
#include<vector>

using namespace std;

int findUnique( vector<int> arr){

    int unique=0 ;
    for(int i =0;i<arr.size();i++){
        unique = unique ^ arr[i];
    }

    return unique;

}

int main(){
    
    cout<<"enter size of array";
    int n;
    cin>>n;

    vector<int>arr(n);
    cout<<"enter the elements"<<endl;
    //taking input
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    int uniqueElement=findUnique(arr);

    cout<<"unique element is "<<uniqueElement<<endl;
   
}