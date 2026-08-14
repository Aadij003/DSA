// STL= standard template library
#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>S;
S.push(10);
S.push(20);
S.push(30);
S.pop();
cout<<S.top()<<endl;
cout<<S.size()<<endl;
cout<<S.empty();


}