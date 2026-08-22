#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int> V;
    cout<<"enter elements inside array:"<<endl;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
       
        V.push_back(x);

    }
    //creating a stack
    stack<int> S;
    for(int i=0;i<n;i++){
        if(i==0 || S.empty()){
            S.push(V[i]);
        }else if(V[i]>0 && S.top()>=0){
            S.push(V[i]);
        }
        else if(V[i]<0 && S.top()<0){
            S.push(V[i]);
        }
        else{
            S.pop();
        }
    }
    cout<<"array becomes:"<<endl;
    vector<int>v;
    while(!S.empty()){
       v.push_back(S.top());
       S.pop();
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<endl;
    }
}