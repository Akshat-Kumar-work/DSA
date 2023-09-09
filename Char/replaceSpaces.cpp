#include<iostream>
#include<string.h>

using namespace std;

void replaceSpaces (char sentence[]){
    int size = strlen(sentence);
    for(int i=0;i<size;i++){
        if(sentence[i]==' '){
            sentence[i]= '@';
        }
    }
}

int main(){
    char arr[100];
    cin.getline(arr,100);
    replaceSpaces(arr);
    cout<<arr;
}