#include<iostream>
using namespace std;
int Vowel(string S,int i,int size){
if(i==size){
return 0;
}
int total;
int count=0, count2=0;
if(S[i]=='A'||S[i]=='E'||S[i]=='I'||S[i]=='O'||S[i]=='U'||
   S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
count=count+1;
}
count2=Vowel(S,i+1,size);
total=count+count2;
return total;
}

int main(){
string a="amanos";
int size=a.size();
int i=0;
int count=Vowel(a,i,size);
cout<<"Total vowels in string = "<<count;
}