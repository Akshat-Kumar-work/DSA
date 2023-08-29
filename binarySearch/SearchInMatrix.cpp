#include<iostream>
#include<vector>

using namespace std;

int binarySearchMatrix ( vector<vector<int> >vect, int target , int row , int col){
    int start =0;
    int end = row*col-1;
    int mid = start + (end - start)/2;


    while(start<=end){

        int rowNo = mid/col;
        int colNo = mid%col;

        if(vect[rowNo][colNo] == target){
            return mid;
        }

        else if(vect[rowNo][colNo] >target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

        mid = start + (end - start)/2;
    }

    return -1;

}

int main(){


    vector< vector<int> > vect ;

    vector<int>a = {1,2,3,4};
    vector<int>b = {5,6,7,8};
    vector<int>c = {9,10,11,12};

    int target = 3;

    vect.push_back(a);
    vect.push_back(b);
    vect.push_back(c);

    int n = vect.size();
    int m = vect[0].size();

    int ans = binarySearchMatrix(vect , target , n , m);
    cout<<"element found at index "<<ans;

    

}