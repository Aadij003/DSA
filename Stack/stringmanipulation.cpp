#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<string> A;
    string x;
    int size;
    cout<<"enter size of string";
    cin>>size;
    cout<<"enter string elements:"<<endl;
    for(int  i=0;i<size;i++){
        cin>>x;
        A.push_back(x);
    }
    stack<string> S; // stack creation
    for(int i=0;i<size;i++){
        if(S.empty()){
            S.push(A[i]);
        }else if(S.top()==A[i]){
S.pop();
        }   
        else{
            S.push(A[i]);
        }
     }
     vector<string> B;
     while(!S.empty()){
        B.push_back(S.top());
        S.pop();
         }
         cout<<"after string manipulation"<<endl;
         for(int i=0;i<B.size();i++){
            cout<<B[i]<<endl;
         }
    
}