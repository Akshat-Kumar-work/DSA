#include<iostream>

using namespace std;

double SquareRoot (double n){
    int start = 0;
    int end = n;
    int ans;

    int mid = start + (end -start)/2;

    while(start<=end){

        if(mid*mid == n ){
            return mid;
        }
        else if (mid* mid >n){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
        mid = start+(end - start)/2;
    }

    return ans;
}

int main(){

    double n;
    cout<<"Enter number for square root ";
    cin>>n;

    double answer = SquareRoot(n);
    cout<<"integer ans is "<<answer<<endl;

    double step =0.1;

    int precision;
    cout<<"enter the number for digits ";
    cin>>precision;

    //loop chlao precision tak
    for(int i=0;i<precision ;i++){

        //loop chlao number tak with points
        for(double j=answer; j*j<=n ; j+= step){
            answer = j;
        }

        //making 0.1 to 0.01 to 0.001 and so on
        step = step/10;
    }

    cout<<"final answer is "<<answer; 





}