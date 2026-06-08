// to convert string from lowercase to uppercase
#include<iostream>
using namespace std;
void Uppercase(string &S,int i, int size){
if(i==size){
return;
}
Uppercase(S,i+1,size);
S[i]=char(int(S[i])-32);

}
int main(){
string S="abcd";
int i=0;
int size=S.size();
Uppercase(S,i,size);
cout<<S<<endl;
}