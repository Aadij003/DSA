#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
int n;
char c;
    vector<char> v;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    cout<<"enter characters:";
    for(int i=0;i<n;i++){
        cin>>c;
        v.push_back(c);
    }
    cout<<"given array is:"<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
  stack<char> S;
  for(int i=0;i<v.size();i++){
    S.push(v[i]);
  }
  int i=0;
  while(!S.empty()){
    v[i]=S.top();
    i++;
    S.pop();
  }
  cout<<"reversed array is:"<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
}