#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int>D;
D.push_back(10);
D.push_front(30);
cout<<D.front()<<endl;
D.pop_front();
cout<<D.front();
}