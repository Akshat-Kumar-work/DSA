#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossibleHeight(vector<int>trees , int requiredWood , int CurrentHeight){
    int WoodCollected =0;

    for(int i=0;i<trees.size();i++){
        //tree height is greater than current blade height
        if(trees[i]>CurrentHeight){
            WoodCollected += trees[i]-CurrentHeight;
        }
    }
    //if collected wood is greater than or equal to requiredwood return true else false
    return WoodCollected >= requiredWood;

}

int maxSawBladeHeight(vector<int>trees ,int requiredWood ){
    int start =0;
    int end = *max_element(trees.begin(),trees.end());
    int ans = -1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(isPossibleHeight(trees , requiredWood , mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    return ans;
    
}

int main(){
    
    int TotalTrees , RequiredWood;
    TotalTrees=4 ;
    RequiredWood = 7;

    vector<int> trees{20,15,10,17};

    int ans = maxSawBladeHeight(trees , RequiredWood) ;
    cout<<ans;
    

    
}