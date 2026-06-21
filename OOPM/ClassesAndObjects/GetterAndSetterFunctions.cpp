//getter and setter functions 
#include<iostream>
using namespace std;
class Student{
string name;
int age;
char grade;
public:
//setter functions
void set_name(string s){
name=s;
}
void set_age(int n){
age=n;
} 
void set_grade(char c){
grade=c;
}
//getter functions
void get_name(){
cout<<name<<endl;
}
void get_age(){
cout<<age<<endl;
}
void get_grade(){
cout<<grade<<endl;
}
};
int main(){
Student S1;
S1.set_name("ABC");
S1.set_age(15);
S1.set_grade('A');
S1.get_name();
S1.get_grade();
S1.get_age();
}