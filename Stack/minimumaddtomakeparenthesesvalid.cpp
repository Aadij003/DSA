#include<iostream>
#include<stack>
using namespace std;
int min_add(string s){
    stack<char> S;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            S.push(s[i]);
        }else if(!S.empty()){
            S.pop();
        } else{
            count++;
        }
    }
    cout<<"min add for valid parentheses is:";
   return count+S.size();
}
int main(){
    int n;
    string str;
    cout<<"enter the string:";
    cin>>str;
    n=min_add(str);
    cout<<n;
}