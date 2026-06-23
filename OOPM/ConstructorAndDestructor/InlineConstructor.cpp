//inline constructor
#include<iostream>
using namespace std;
class Customer{
string name;
int account_number; 
int balance; 
public:
Customer(){
cout<<"default constructor called for A1"<<endl;
name="Def";
balance=0;
account_number=567;
}
inline Customer(string n,int a, int b):name(n),account_number(a),balance(b){
}
inline Customer(int b,int a): balance(b),account_number(a){
}
void display(){
cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl; 
}
};
int main(){
Customer A1;
Customer A2("Abc",1234,5000);
Customer A3(1000,1122);
A1.display();
A2.display();
A3.display();

}