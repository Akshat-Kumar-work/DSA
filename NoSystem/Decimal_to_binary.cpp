#include <iostream>
#include <math.h>

using namespace std;

//division method
int decimalToBinaryMethod1(int n){

     int binaryno = 0;
     int i =0;
 while(n>0){
    int bit = n %2;

    binaryno = bit*pow(10,i++)+binaryno;
    
    n = n /2;
 }
 return binaryno;
}

//bitwise method
int decimalToBinaryMethod2(int m){

    int answer = 0;
    int i =0;
    while(m>0){
        //last bit nikal li
        int bit = (m & 1);
        //last bit answer m daldi
        answer = bit * pow(10,i++) + answer;
        //last bit neglect krdi
        m = m>>1;
    }
    return answer;
}






int main(){
    int n = 10;


   int result = decimalToBinaryMethod1(n);
   cout<<result<<endl;

    int ans = decimalToBinaryMethod2(10);
    cout<<ans;
   
}