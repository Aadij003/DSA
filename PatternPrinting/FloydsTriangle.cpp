#include<iostream>
using namespace std;
int main(){
    int n;
    int num=1;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<num<<" ";
              num++;
        }
           
                 cout<<"\n";
    }
}