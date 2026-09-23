#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    queue<int> Q;
    int time=0;
    int arr[]={1,5,2,3,7};
    int size=sizeof(arr)/sizeof(int);
     vector<int> V(size);
    for(int i=0;i<size;i++){
        Q.push(i);
    }
    while(!Q.empty()){
        if(arr[Q.front()]==1){
            time=time+1;
            V[Q.front()]=time;
            Q.pop();
        }else{
            time++;
            arr[Q.front()]=arr[Q.front()]-1;
            Q.push(Q.front());
            Q.pop();
        }
    }
    // user input for time needed for kth ticket
    int k;
    cout<<"enter index of kth ticket whose time to find:";
    cin>>k;
    cout<<"This Ticket will take"<<" "<<V[k]<<" "<<"seconds"<<endl;

}