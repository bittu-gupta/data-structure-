#include<iostream>
using namespace std;
void swap(int *A,int *K){
int temp;
temp=*A;
*A=*K;
*K=temp;
}
void selection(int A[],int n){
    int i,j,k;
    i=j=k=0;
    for(int i=0;i<n-1;i++){
      j=k=i;
    
    while(j<n){
        if(A[k]>A[j]){
            k=j;
            
        }
        j++;
    }
         
    
    swap(A[i],A[k]);
    
    }
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int A[n];
    cout<<"enter the value of array"<<endl;
    for(int i=0;i<n;i++){
       cin>>A[i];
    }
    selection(A,n);
    cout<<"sorting array"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
}
