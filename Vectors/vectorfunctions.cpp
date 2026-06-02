#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5,6};
     cout<<"intially vector is:";
     for(int i: a){
        cout<<i<<" ";
     }
     cout<<endl;


    // .size function-----------> to get size of vector 
    cout<<"before push back size is:"<<a.size()<<endl;


   // .push_back--------------> pushes any element to the last of any vector
    a.push_back(7);
cout<<"after push back size is:"<<a.size()<<endl;
cout<<"now the vector is:";
for(int i: a){
    cout<<i<<" ";
}
cout<<endl;


    // .pop_back---------------> deletes last element
    a.pop_back();
      cout<<"after pop back 7 gets removed which we added from push back"<<endl;
      cout<<"now vector becomes:";
    for(int i: a){
      cout<<i<<" ";
    }
    cout<<endl;


    // .front----------------> if we want to print first value of a vector
     cout<<"using .front we get:"<<a.front()<<endl;


     // .back---------------> if we want to print last(back) value of a vector
    cout<<"using .back we get:"<<a.back()<<endl;


    // .at------------------>to access the value at particular index of a vector
       cout<<"using .at(3) we get:"<<a.at(3)<<endl;

}