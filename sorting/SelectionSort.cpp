#include<iostream>
#include<vector>
using namespace std;


int main(){

vector<int>vect{5,4,3,2,1};
int n = vect.size();

//loop till second last element
for(int i=0;i<n-1;i++){
    int mini =i;

    //loop from next element from i till last element
    for(int j=i+1;j<n;j++){
        //selecting one element as minimum element from whole array
        if(vect[j]<vect[mini]){
            mini =j;
        }
    }

    //after selecting swap element;
    swap(vect[i],vect[mini]);
}



for(auto element:vect){
    cout<<element;
}
    


}