#include <iostream>
#include <math.h>

using namespace std;

int decimalToBinary(int n){


    int decimal =0;
    int i =0;

    while(n){

    int lastBit = n %10;

    decimal = decimal + lastBit * pow(2,i++);
    n /= 10;
  

    }

return decimal;


}

 

int main(){

    int no = 1011;

        int ans =  decimalToBinary(no);
  //  cout<<ans;

    

    

}
