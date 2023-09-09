#include<iostream>
#include<string.h>

using namespace std;

void reverseChar(char arr[]){
    int size = strlen(arr);
    int i=0;
    int j = size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}

int main(){
    char arr[50];
    cin>>arr;
    reverseChar(arr);
    cout<<arr;
}