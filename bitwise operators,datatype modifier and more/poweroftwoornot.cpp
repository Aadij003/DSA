#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int pow=1;
    for(int i=1;i<=n;i++){
     
        if(pow==n){
            cout<<"comes in power of 2";
            break;
        }
          else{
               pow=pow*2;
    }
}if(pow!=n){
    cout<<"does not come in power of 2";
}
  return 0;
}
