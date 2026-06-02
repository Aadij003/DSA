#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> a={1,2,3,3,4,6,3,5};          //initialisation if a vector
for(int i: a){             //for each loop and here i doesn't mean index number instead it contains the value in that particular index number
    cout<<i<<" ";
}

}