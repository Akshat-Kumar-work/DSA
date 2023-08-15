#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    //declaring unordered map
    unordered_map <int , int> hash;
    hash[3]++;



     for (auto element : hash)
    cout << element.first << element.second;
}

