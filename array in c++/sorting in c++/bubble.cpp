// #include<iostream>
// using namespace std;
// int swap(int *A,int *K){
    
// int temp;
// temp=*A;
// *A=*K;
// *K=temp;




// }
// void bubble(int A[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
           
//             if(A[j]>A[j+1]){
//                  swap(A[j],A[j+1]);
//                 // int temp;
//                 // temp=A[j];
//                 // A[j]=A[j+1];
//                 // A[j+1]=temp;


//             }
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<A[i]<<endl;
//     // }
// }
// int main(){
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//      cout<<"enter the value of array"<<endl;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//     }
//     bubble(A,n);
//     cout<<"after the bubble sort"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<endl;

//     }
// }

// Revision bubble_sort

#include<iostream>
using namespace std;
void bubble_sort(int* ,int );
 int swap(int* ,int* );
int swap(int* a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int A[],int n){
    int i=0;
    while(i<n){
        //   cout<<i<<endl;
        for(int j=0;j<n-1-i;j++){
            
         if(A[j]>A[j+1]){
            swap(A[j],A[j+1]);
         }
        }
    
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    bubble_sort(A,n);
    // for(int i=0;i<n;i++){
    //     cout<<A[i]<<endl;
    // }
}