#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossibleTime(vector<int>CookRanks , int TotalPrata , int currentTime){
    int CookedPrataCount = 0;

    for(int i=0; i<CookRanks.size();i++){
        int CookRank = CookRanks[i];
        int Current_Prata_Cooking_No=1;
        int TimeTaken =0;

        while(true){
            if(TimeTaken + Current_Prata_Cooking_No * CookRank <= currentTime ){
                CookedPrataCount++;
                TimeTaken += Current_Prata_Cooking_No*CookRank;
                Current_Prata_Cooking_No++;
            }else{
                break;
            }
        }

        if(CookedPrataCount >= TotalPrata){
            return true;
        }
    }
    return false;
}

int FindMinimumTime(vector<int>CookRanks , int TotalPrata){

    int start =0;
    int highestRank = *max_element(CookRanks.begin(),CookRanks.end());
    int end = highestRank * (TotalPrata*(TotalPrata+1)/2);
    int ans = -1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossibleTime(CookRanks , TotalPrata , mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){

    vector<int>CookRanks{1,2,3,4};
    int TotalPrata = 10;


    int ans = FindMinimumTime(CookRanks , TotalPrata);
    cout<<ans;
}