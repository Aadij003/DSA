#include<iostream>
using namespace std;
int sumofdigits(int a){
    int lastDigit=0;
    int sum=0;
    for(;a>0;a=a/10)
    {
        lastDigit=a%10;
        // a=a/10;
              sum=sum+lastDigit;

    }
return sum;

}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    sumofdigits(n);
    cout<<sumofdigits(n);
}