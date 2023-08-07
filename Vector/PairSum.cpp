#include<iostream>
#include<vector>


using namespace std;

vector<int> pairSum(int arr[],int sum){

    vector<int>ans;

    for(int i =0; i<7 ; i++){

        for(int j =i+1;j<7;j++){
            if(arr[i]+arr[j]==sum){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);

            }
        }
    }

    return ans;
   

}


int main(){
    // int arr[]={1,3,5,7,2,4,6};
    
    // vector <int> ans {pairSum(arr,9)};

    // //priniting
    // for(auto item:ans){
    //     cout<<item<<endl;
    // }


    int arr[]= {10,20,30,40 ,50,60,70};
    int Sum = 150;

    for(int i=0;i<7;i++){
        
        for( int j =i+1;j<7;j++){

            for(int k=j+1;j<7;j++){

               for( int l=k+1;l<7;l++){

                 if(arr[i]+arr[j]+arr[k] + arr[l] == Sum){
                    cout<< "("<<arr[i]<<","<<arr[j] << ","<<arr[k]<<"," << arr[l]<<")"<<endl;
                }

               }

               
            }
        }
    }
 


}