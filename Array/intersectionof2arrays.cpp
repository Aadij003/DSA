#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int sizea=sizeof(a)/sizeof(int);
    int b[]={3,4,7,8,9};
     int sizeb=sizeof(b)/sizeof(int);
    cout<<"common elements in both arrays are:";
    for(int i=0;i<sizea;i++){
         int count=0;
        for(int j=0;j<sizeb;j++){
            if(a[i]==b[j]){
                count++;
            }
        
            
             
        }
           if(count==1){
                cout<<a[i]<<endl;
    }
}

}