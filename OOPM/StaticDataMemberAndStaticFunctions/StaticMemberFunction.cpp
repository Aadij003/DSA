//static member function
#include<iostream>
using namespace std;
class Student{
string name;
int age;
public:
static int total_students;
Student(string n,int a){
name=n;
age=a;
total_students++;
}
//static memeber function
//can only access static data members
// static data members and static data functions are part of "class" not "object"
static void display(){
cout<<total_students;
}
};
int Student::total_students=0;
int main(){
Student S1("ABC",16);
Student S2("DEF",15);
Student::display();   // without making objects we can access static data members by static member functions 


}