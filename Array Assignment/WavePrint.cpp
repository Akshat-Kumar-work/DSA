#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<vector<int>>mat;

    vector<int>a={1,2,3,4};
    vector<int>b={5,6,7,8};
    vector<int>c={9,10,11,12};

    mat.push_back(a);
    mat.push_back(b);
    mat.push_back(c);

    int rowSize = mat.size();
    int colSize = mat[0].size();

    for(int colNo=0; colNo<colSize ; colNo++){

        //agar even no. col hai toh top to bottom jao
        if( (colNo & 1)==0){

            //top to bottom
            for(int i =0 ; i<rowSize ; i++){
                cout<< mat [i] [colNo] <<" ";
            }
        }

        else{

            //bottom to top
            for(int i = rowSize-1 ; i>=0 ; i--){
                cout<< mat [i] [colNo]<<" ";
            }
        }
    }

   
}