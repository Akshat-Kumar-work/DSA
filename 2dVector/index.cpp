#include <iostream>
#include<vector>

using namespace std;
int main(){

    //declaring
    vector< vector<int> > arr;

    vector<int>a={1,2,3};
    vector<int>b={1,2,3,3,45,4};
    vector<int>c={1,2,3,2,2};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);



    //printing
    for(int i=0;i<arr.size();i++){

        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j];
        }
        cout<<endl;

    }



//declaration 2
    vector< vector<int> >vect ( 4 , vector<int>(4,0));

    
    //printing
    for(int i=0;i<vect.size();i++){

        for(int j=0;j<vect[i].size();j++){
            cout<<vect[i][j];
        }
        cout<<endl;

    }




vector< vector<int>> vect2 (2 , vector<int>(2,0));

cout<<"vector values";

//taking input
for(int i=0;i<vect2.size();i++){
    for(int j=0;j<vect2[1].size();j++){
        cin>>vect2[i][j];
    }
}

//printing output
for(int i=0;i<vect2.size();i++){
    for(int j=0;j<vect2[1].size();j++){
        cout<<vect2[i][j];
    }
    cout<<endl;
}




}