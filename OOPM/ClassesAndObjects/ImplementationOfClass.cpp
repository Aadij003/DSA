//Implementation of class
#include<iostream>
using namespace std;
class Student{
public: 
string name;
float percentage;
int age;
};
int main(){
Student S1;
Student S2;
S1.name="Abc";
S1.age=15;
S1.percentage=79.8;
S2.name="Def";
S2.age=15;
S2.percentage=75.6;
cout<<S2.percentage;


}