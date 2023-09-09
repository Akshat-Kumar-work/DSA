#include<iostream>
#include<string.h>

using namespace std;


bool isPalindrome(char arr[] ){
    int i=0;
    int j=strlen(arr)-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    char arr[1000];
    cin>>arr;

    cout<<isPalindrome(arr);

}