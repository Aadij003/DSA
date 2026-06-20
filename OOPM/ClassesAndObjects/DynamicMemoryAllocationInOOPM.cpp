//dynamic implementation
#include<iostream>
using namespace std;
class Student{
public:
string name;
int age;
char grade;
};
int main(){
Student *p=new Student;
(*p).name="ABC";
(*p).age=15;
(*p).grade='A';
cout<<p->age;
}