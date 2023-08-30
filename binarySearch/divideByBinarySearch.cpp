#include<iostream>

using namespace std;

int divide(int dividend , int divisor){
    int start = 0;
    int end = abs(dividend);
    int mid = start+(end-start)/2;
    int ans =0;



    while(start<=end){

        if(abs(divisor*mid) == abs(dividend)){
            return mid;
            break;

        }

        else if (abs(divisor*mid) > abs(dividend)){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }

    if( dividend<0 || divisor<0){
       
        return -ans;
    }
    return ans;
}

int main(){
    int dividend ;
    cout<<"enter dividend";
    cin>>dividend;

    int divisor;
    cout<<"enter divisor";
    cin>>divisor;

    int ans = divide(dividend , divisor);
    cout<<"quotient is "<<ans;
}