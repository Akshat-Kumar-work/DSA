#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>vect{10,1,7,6,14,9};
    int size = vect.size();

    for(int i=0;i<size-1;i++){

        for(int j=0;j<size-i-1;j++){
            if(vect[j]>vect[j+1]){
                swap(vect[j],vect[j+1]);
            }
        }
    }

    for(auto element:vect){
        cout<<element<<endl;
    }
}