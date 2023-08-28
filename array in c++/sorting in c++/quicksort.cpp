// #include<iostream>
// using namespace std;
// // int main(){
// //     int a,b;
// //     cin>>a>>b;
// //     cout<<a<<b<<endl;
// // }
// int k;
// void swap(int*,int*);
// int partition(int*,int,int);
// void quicksort(int*,int,int);
// void array(int,int);
// void swap(int *A,int *K){
// int temp;
// temp=*A;
// *A=*K;
// *K=temp;
// }
// int partition(int A[],int l,int h){
//     int pivot=A[l];
//     int i=l,j=h;
//     do{
//     do{i++;}while(A[i]<=pivot);
//     do{j--;}while(A[j]>pivot);
//     if(i<j){
//         swap(A[i],A[j]);
//     }
//     }while(i<j);
//     swap(A[l],A[j]);
//     return j;

// }
// void quicksort(int A[],int l,int h){
//     cout<<"h"<<endl;
//     k=partition(A,l,h);
//     quicksort(A,l,k);
//     quicksort(A,k+1,h);
    

// }
// void array(int A[],int n){
// for(int i=0;i<n-1;i++){
//     cout<<A[i]<<endl;
// }
// }
// int main(){
//     int A[]={50,70,60,90,40,80,10,20,30,32767},n=10;
//     quicksort(A,0,n-1);
//      array(A,n-1);
//     // cout<<"dfs"<<endl;
//     // for(int i=0;i<n-1;i++){
//     //     cout<<A[i]<<endl;
//     // }
// }

#include<iostream>
using namespace std;
int partiton(int*,int,int);
void quicksort(int*,int,int);
int partition(int A[],int l,int h){
    int pivot =A[l];
    int start=l;
    int end =h;
    while(start<end){
        // cout<<"h"<<endl;
        while(A[start]<=pivot){
            // cout<<"g"<<endl;
            start++;
        }
        while(A[end]>pivot){
            // cout<<"p"<<endl;
            end--;
        }
        if(start<end){
        swap(A[start],A[end]);
        }

    }
    swap(A[l],A[end]);
    return end;

}
void quicksort(int A[],int l,int h){
    
    if(l<h){
    
   int k=partition(A,l,h);
        quicksort(A,l,k-1);
        quicksort(A,k+1,h);
    }
    
     
    
           
        
    
    
}
void array(int A[],int n){
    for(int i=0; i<n;i++){
        cout<<A[i]<<endl;
    }
}



// #include<iostream>
// using namespace std;
// void merge(int*,int*,int,int);
// void merge(int A[],int B[],int n1, int n2,int c[],int l){
//     // int l=n1+n2;
//     cout<<l<<endl;
//     // int c[l];
//     int i,j,k;
//     i=j=k=0;
//     while(i<n1 && j<n2){
//         if(A[i]<B[j]){
//             c[k++]=A[i++];
//         }
//         else{
//             c[k++]=B[j++];
//         }
//     }
//     cout<<i<<endl;
//     for(;i<n1;i++){
//         c[k++]=A[i];
//         cout<<"sd"<<endl;
//     }
//     cout<<i<<endl;
//     for(;j<n2;j++){
//         c[k++]=B[j];
//         cout<<"s"<<endl;
//     }
//     cout<<"f"<<endl;
//     for(int i=0;i<l;i++){
//         cout<<c[i]<<endl;
//     }
// }
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int l=n1+n2;
//     int A[n1];
//     int B[n2];
//     int c[l];
//     cout<<"A"<<endl;

//     for(int i=0;i<n1;i++){
//         cin>>A[i];
//     }
//     cout<<"B"<<endl;
//     for(int i=0;i<n2;i++){
//         cin>>B[i];
//     }
//     merge(A,B,n1,n2,c,l);
// }


// #include<iostream>
// using namespace std;
// void merge(int A[],int n){
// int l=0,h=n;
// int mid=(l+h-1)/2;
// int i=0,j=mid+1,k=0;
// int c[n];
// while(i<mid+1 && j<h){
//     if(A[i]<A[j]){
//         c[k++]=A[i++];
//     }
//     else{
//         c[k++]=A[j++];
//     }
// }
// for(;i<mid+1;i++){
//     c[k++]=A[i];
// }
// for(;j<h+1;j++){
//     c[k++]=A[j];
// }
// for(int i=0;i<n;i++){
//     cout<<c[i]<<endl;
// }

// }
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];


//     }
//     merge(A,n);
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int T,t,p,x;
//     cin>>T;
//     cin>>t;
//     int n=11;
//     int A[n];
// for(int i=1;i<=T;i++){
//     for(int i=1;i<=t;i++){
//         if(p>0 && p<=11){
//         cin>>p;
//         cin>>x;
//         A[p]=x;

//     }
// } 


// }
// }