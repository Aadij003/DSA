#include<iostream>
#include<queue>
using namespace std;
int main(){
    vector<int> V;
    queue<int> q;
  q.push(10); 
   q.push(20); 
    q.push(30); 
     q.push(40); 
      q.push(50); 
while(!q.empty()){
cout<<q.front()<<endl;
V.push_back(q.front());
q.pop();
}
for(int i=0;i<V.size();i++){
    q.push(V[i]);
}
   
}