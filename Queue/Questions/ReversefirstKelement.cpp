// reverse first k element
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    stack<int> S;
    queue<int> Q;
    int arr[]={3,7,10,13,8,5,4};
    int size= sizeof(arr)/sizeof(int);
    // inserting array elements in queue
    for(int i=0;i<size;i++){
Q.push(arr[i]);
    }
    int k;
    cout<<"enter value of k:"<<" "<<endl;
    cin>>k;
    while(k--){
        S.push(Q.front());
        Q.pop();
    }
    for(int i=0;i<size;i++){
        if(!S.empty()){
            Q.push(S.top());
            S.pop();
        }else{
        Q.push(Q.front());
        Q.pop();
        }
    }
    //printing
    cout<<"After reversing first k elements,Queue becomes:"<<endl;
          int n=Q.size();
while(n--){
cout<<Q.front()<<endl;
Q.push(Q.front());
Q.pop();
}
   
}