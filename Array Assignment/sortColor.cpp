#include<iostream>
#include<vector>

using namespace std;



int main(){

    vector<int>nums{2,0,2,1,1,0};



        //method 1 
        int element0 =0;
        int element1 = 0;
        int element2 = 0;

        for( int i=0; i<nums.size();i++){
            if(nums[i]==0){
                element0 += 1;
            }
             if(nums[i]==1){
                element1 += 1;
            }
             if(nums[i]==2){
                element2 += 1;
            }
        }

      
        vector<int>newArray;

        while(element0){
             newArray.push_back(0);
                element0--;
              
        }

         while(element1){
             newArray.push_back(1);
                element1--;
           
        }

         while(element2){
              newArray.push_back(2);
                element2--;
             
        }


        for(auto element:newArray){
            cout<<element;
        }



    


    

}