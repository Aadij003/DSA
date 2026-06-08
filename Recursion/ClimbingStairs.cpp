//climbing stairs
#include<iostream>
using namespace std;
int Count(int n){
if(n<=1){
return 1;
}
int count=Count(n-1)+Count(n-2);
return count;

}
int main(){
int n;
cout<<"Enter nth stair:";
cin>>n;
int count=Count(n);
cout<<"Total combinations possible are:"<<count;




}