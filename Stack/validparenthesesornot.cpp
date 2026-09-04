#include<iostream>
#include<stack>
using namespace std;
bool check(string s){
    stack<char> S;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            S.push(s[i]);
        }
        else{
            if(S.empty()){
                return false;
            }else{
                S.pop();
            }
        }
    }
 return S.empty();   
}
int main(){
    string str="((()))";
    check(str);
    if(check(str)){
        cout<<"Balanced Parentheses"<<endl;
    }else{
        cout<<"Unbalanced Parentheses"<<endl;
    }
    return 0;
}