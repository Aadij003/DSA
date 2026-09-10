#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> Q;
    // push
    Q.push(10);
    Q.push(29);
    Q.push(30);

    //pop
    Q.pop();


    //empty
    if(Q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
    cout<<"Queue is not empty"<<endl;
    }

    //size
  int x=  Q.size();
  cout<<"size is:"<<" "<<x<<endl;


    //front
   int y= Q.front();
   cout<<"front is:"<<" "<<y<<endl;

   //back
   int z=Q.back();
   cout<<"back element is:"<<" "<<z<<endl;

}