#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>vec{1,2,3,4,6,7,8};

    int start=0;
    int end= vec.size()-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;

        if(vec[mid]==mid+1){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }

    cout<<start+1;

    

    

    return 0;
}