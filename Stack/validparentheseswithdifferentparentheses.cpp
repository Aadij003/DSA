#include<iostream>
#include<stack>
using namespace std;
bool check(string s){
    stack<char> S;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            S.push(s[i]);
        }else{
            if(S.empty()){
                return 0;
            }
         else if(s[i]==')'){
        if(S.top()!='('){
            return 0;
        }else{
            S.pop();
        }
         }
         else if(s[i]==']'){
            if(S.top()!='['){
                return 0;
            }
            else{
                S.pop();
            }
         }
         else{
            if(S.top()!='{'){
            return 0;
        }
            else{S.pop();}
         }
        }
    }
   return S.empty();
}
int main(){
    int x;
    string str;
    cout<<"enter string:";
    cin>>str;
   x= check(str);
   if(x==1){
    cout<<"valid";
   }else{
    cout<<"invalid";
   }
}