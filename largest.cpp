#include<iostream>
using namespace std;

int main(){
   int arr[]={10,20,80,9,15}; 
int n = sizeof(arr)/sizeof(arr[0]);
int max_val=arr[0];
for (int i=1;i<n;i++){
    if(arr[i]>max_val){
        max_val = arr[i];
    }
}
cout<<"Largest element : "<<max_val<<endl;

}