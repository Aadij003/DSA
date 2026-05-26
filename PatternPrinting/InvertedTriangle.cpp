#include<iostream>
using namespace std;
int main(){
    int n;
    int num=1;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
        cout<<" ";
        }
        for(int k=0;k<n-i;k++)
        {
            cout<<num;
            //    cout<<"\n";
        }num++;
     cout<<"\n";
    }
}