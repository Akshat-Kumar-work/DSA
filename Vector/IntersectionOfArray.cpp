#include<iostream>
#include<vector>

using namespace std;

vector<int> intersectionOfArray ( vector<int>arr1 , vector<int>arr2){
        vector<int>ans;

        cout<<ans.size();

    for(int i=0;i<arr1.size();i++){

        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                arr2[j] = -1;
                ans.push_back(arr1[i]);
            }
        }
    }

    return ans;
}

int main(){

    vector<int>arr1{1,2,3,4,6,8};
    vector<int>arr2{3,4,9,10,2,2};

   vector<int>ans{intersectionOfArray(arr1,arr2)} ;

    for(auto value:ans){
        cout<<value<<" ";
    }


}