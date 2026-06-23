//destructor 
#include<iostream>
using namespace std;
class Student{
string name;
int age;
double* percentage;
public:
Student(){
percentage=new double;
name="ABC";
age=15;
*percentage=70.5;
cout<<"default constructor called"<<endl;
}
~Student(){
delete percentage;
cout<<"Destructor is called"<<endl;
}

};
int main(){
Student S1;


}