#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> Q;
    stack<int> S;
    Q.push(10);
     Q.push(20);
      Q.push(30);
       Q.push(40);
        Q.push(50);
         while(!Q.empty()){
          S.push(Q.front());
          Q.pop();
         }
         // reversing the queue
         cout<<"Reversed Queue is:"<<endl;
         while(!S.empty()){
            cout<<S.top()<<endl;
            Q.push(S.top());
            S.pop();

         }
}