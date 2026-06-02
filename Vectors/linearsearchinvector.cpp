#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter an element to search:";
    cin>>x;
    vector<int> a={27,97,46,89,26,17,83};
    for(int i:  a){
        if(i==x){
            cout<<"element found";
            return 0;
        }

    }cout<<"element not found";
}