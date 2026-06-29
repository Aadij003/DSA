//static data member
#include<iostream>
using namespace std;
class Student{
string name;
int age;
static int total_students;
public:
Student(string n, int a){
name=n;
age=a;
total_students++;
}
void display(){
cout<<total_students<<endl;
}
};
int Student::total_students=0;
int main(){
Student S1("ABC",15);
Student S2("DEF",15);
S1.display();

}