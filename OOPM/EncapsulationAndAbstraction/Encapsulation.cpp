//encapsulation 
#include<iostream>
using namespace std;
class Customer{
private:
string name;
int age;
int balance;
public:
Customer(string n,int a,int b){
name=n;
age=a;
balance=b;
}
void deposit(int n){
if(n>0){
balance+=n;
}
}
void withdraw(int n){
if((balance-n)>0){
balance-=n;
}
}
void display(){
cout<<"balance is:"<<" "<<balance<<endl;
}
};
int main(){
Customer A1("ABC",70,1000);
Customer A2("DEF",70,2000);
A1.display();
A1.withdraw(100);
A1.display();
A1.deposit(3000);
A1.display();
}