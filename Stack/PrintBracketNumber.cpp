#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void print_bracket_no(string s) {
    int unique=0;
    vector<int>ans;
    stack<int> S;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='(') {
            unique++;
            S.push(unique);
            ans.push_back(unique);
        } else {
            ans.push_back(S.top());
            S.pop();
        }
    }
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i];
    }
}
int main() {
    string str;
    cout<<"enter the string:";
    cin>>str;
    print_bracket_no(str);

}