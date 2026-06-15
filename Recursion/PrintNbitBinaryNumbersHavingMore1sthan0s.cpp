/* #include<iostream>
#include<vector>
using namespace std;
void Nbit(vector<int>&A,int index,int n){
if(index==n){
if(A[0]==0){
return;
}
int count1=0,count0=0;
for(int i=0;i<n;i++){
if(A[i]==1){
count1++;
}
else{
count0++;
}
}
if(count1>=count0){
for(int i=0;i<n;i++){
cout<<A[i];
}
cout<<endl;
}
return;
}
A.push_back(0);
Nbit(A,index+1,n);
A.pop_back();
A.push_back(1);
Nbit(A,index+1,n);
A.pop_back();
}
int main()
{
int n;
cout<<"enter n:";
cin>>n;
vector<int>A;
int index=0;
Nbit(A,index,n);
}
*/
#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& A, int n, int ones, int zeros){
    if(A.size() == n){
        for(int i = 0; i < n; i++){
            cout << A[i];
        }
        cout << endl;
        return;
    }

    A.push_back(1);
    solve(A, n, ones + 1, zeros);
    A.pop_back();

    if(zeros < ones){
        A.push_back(0);
        solve(A, n, ones, zeros + 1);
        A.pop_back();
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> A;
    solve(A, n, 0, 0);
    return 0;
}