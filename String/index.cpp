#include<iostream>
#include<string>
using namespace std;

int main(){

    string str="akshat cool";
    string str1="kdkd";

    //cin>>str;

    //getline(cin,str);

    //size of string
    cout<<"string size "<<str.size()<<endl;

    //is empty
    cout<<"is string empty: "<<str.empty()<<endl;

    //adding charater to string
    str.push_back('a');
    cout<<"after adding character "<<str<<endl;

    //removing character 
    str.pop_back();
    cout<<"after removing character "<<str<<endl;

    //generate substring , first is starting index of substring and second is no. of character from that index
    cout<<"sub string "<<str.substr(1 , 4)<<endl;

    //comparing string -> if 0 then equal
    cout<<str.compare(str1)<<endl;

    //find character from string
    cout<<str.find("o");

    //to replace , pass starting index and no. of character to replace
    str.replace(0,5,"z");
    cout<<"after replacing "<<str<<endl;

    //to eleminate the string
    str.erase(3,4);
    cout<<str;


}