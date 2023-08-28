// #include<iostream>
// using namespace std;
// void insertion(int A[],int n,int key){
//     for(int i=n-1;i>0;i--){
//         if(key>A[i]){
//             for(int j=i+1;j<n;i++){
//                 A[j+1]=A[j];
//             }
//         }
//      A[i+1]=key;
//     }


// }
// int main(){
//     // int n,key;
//     // cout<<"enter the value of n"<<endl;
//     // cin>>n;
//     int A[7]={5,8,10,12,14,15};
//     // cout<<"enter the value of array"<<endl;
//     // for(int i=0;i<7;i++){
//     //     cin>>A[i];
//     // }
//     int key;
//     cout<<"enter the value of key"<<endl;
//     cin>>key;
//     insertion(A,7,key);
//     for(int i=0;i<7;i++){
//         cout<<A[i]<<endl;

//     }

// }

// sorting revison

// bubble sort
// #include<iostream>
// using namespace std;
// void bubble_sort(int*,int );
// void swap(int* ,int*);
// void bubble_sort(int A[],int size ){
    
//     for(int j=0;j<size;j++){
//     for(int i=0;i<size-j;i++){
//         if(A[i]>A[i+1]){
//           swap(A[i],A[i+1]);
//         }
//     }
//     }
//     for(int i=0;i<size;i++){
//         cout<<A[i]<<endl;

//     }
// }
// void swap(int *a,int *b){
//     cout<<"f"<<endl;
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
    
    
// }
// int main(){
//     int x;
//     cin>>x;
//     int A[x];
//     for(int i=0;i<x;i++){
//         cin>>A[i];
//     }
//     bubble_sort(A,x);
// }

// insertion sort
// #include<iostream>
// using namespace std;
// void insertion(int* ,int);
// void insertion(int A[],int size,int key){
    
//     int j,i;
//     for(i=size-2 ;i>0 ;i--){
    

//         if(key<A[i]){
//             j=i;
//             A[j+1]=A[i];
            

//         }
//         else{
//             break;
//         }

//     }
//     A[i+1]=key;
//     for(int i=0;i<size;i++){
//        cout<<A[i]<<endl;
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];

//     }
//     n++;
    
//     insertion(A,n,9);
// }

// selection sort
// #include<iostream>
// using namespace std;
// void slection(int*,int);
// void swap(int*,int*);
// void selection(int A[],int size){

//     int i,j,k;
//     for(i=0;i<size-1;i++){
        
//       for(j=k=i;j<size;j++){
        
//         if(A[k]>A[j]){
            
//             k=j;
//         }

//       }
//       swap(A[i],A[k]);
//     }
//     for(int i=0;i<size;i++){
//         cout<<A[i]<<endl;
//     }

// }
// void swap(int *a, int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int n;
//     cin>>n;
//     // cout<<n<<endl;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];

//     }
//     selection(A,n);
//     // for(int i=0;i<n;i++){
//     //     cout<<A[i]<<endl;
//     // }
// }

// revision insertion sort 06/08/23
#include<iostream>
using namespace std;
void insertion(int A[],int n){
    int j=1,x,i,k=0;
    while(j<n){
        x=A[j];
        for( i=j-1;i>=0;i--){
            
            if(A[i]>x){
                A[i+1]=A[i];
                k=i;
            }
        }
        A[k]=x;
        j++;
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
    insertion(A,n);
}

