// #include<iostream>
// #include<climits>
// using namespace std;
// int find_max(int A[],int n){
//     int max_no = INT_MIN;
//     for(int i=0; i<n;i++){
//     max_no=max(max_no,A[i]);
//     }
//     return max_no;
// }
// void count_sort(int A[],int n){
//     int *c;
//    int  max=find_max(A,n);
//    c=new int[max+1];
//    for(int i=0;i<max+1;i++){
//     c[i]=0;
//    }

//    for(int i=0;i<n;i++){
//     c[A[i]]++;
//    }
// //    for(int i=0;i<max+1;i++){
// //     cout<<c[i]<<endl;
// //    }
// cout<<"print the value of sorted array"<<endl;
// for(int i=0;i<max+1;i++){
//     if(c[i]>0){
//         for(int j=c[i];j>0;j--){
//             cout<<i<<endl;
//         }
//     }
// }
// }
// int main(){
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     int A[n];
//     cout<<"enter the value of array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//     }
//     count_sort(A,n);
// }

#include<iostream>
#include<climits>
using namespace std;
class node {
    public:
    int data;
   node* next;
//   void insert(node**,int);
};
  void  insert(node** ptrbins ,int idx ){
    node *temp;
    temp=new node;
    temp->data=idx;
    temp->next=NULL;
    if(ptrbins[idx]==NULL){
        ptrbins[idx]=temp;
    }
    else{
        node* p=ptrbins[idx];
        while(p->next=NULL){
            p=p->next;
        }
        p->next=temp;
    }
    cout<<"h"<<endl;

  }
  int Delete(node** ptrbins,int idx){
    cout<<"d"<<endl;
         node* p = ptrbins[idx];  // ptrBins[idx] is head ptr
    ptrbins[idx] = ptrbins[idx]->next;
    int x = p->data;
    delete []p;
    
    return x;
  }

int find_max(int A[], int n){
    
    int max_no=INT_MIN;
    for(int i=0;i<n;i++){
        max_no=max(max_no,A[i]);
    }
    cout<<"f"<<endl;
  return max_no;
}
void bucket_sort(int A[],int n){
    node **bins;
    int max=find_max(A,n);
    bins=new node*[max+1];
    for(int i=0;i<max+1;i++){
        bins[i]=NULL;
    }
    for(int i=0;i<n;i++){
        cout<<"j";
        insert(bins,A[i]);
    }
    cout<<"g"<<endl;
    
    // element of bins back to A array for sorting 
    
    int i = 0;
    int j = 0;
    while (i < max+1){
        while (bins[i] != nullptr){
            A[j++] = Delete(bins, i);
        }
        i++;
    }
 
    // Delete heap memory
    delete [] bins;
    
 }
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    bucket_sort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    
}
// #include <iostream>

// using namespace std;


// int Max(int A[], int n){
//     int max = -32768;
//     for (int i=0; i<n; i++){
//         if (A[i] > max){
//             max = A[i];
//         }
//     }
//     return max;
// }
 
// // Linked List node
// class Node{
// public:
//     int value;
//     Node* next;
// };
 
// void Insert(Node** ptrBins, int idx){
//     Node* temp = new Node;
//     temp->value = idx;
//     temp->next = nullptr;
 
//     if (ptrBins[idx] == nullptr){ // ptrBins[idx] is head ptr
//         ptrBins[idx] = temp;
//     } else {
//         Node* p = ptrBins[idx];
//         while (p->next != nullptr){
//             p = p->next;
//         }
//         p->next = temp;
//     }
// }
 
// int Delete(Node** ptrBins, int idx){
//     Node* p = ptrBins[idx];  // ptrBins[idx] is head ptr
//     ptrBins[idx] = ptrBins[idx]->next;
//     int x = p->value;
//     delete p;
//     return x;
// }
 
// void BinSort(int A[], int n){
//     int max = Max(A, n);
 
//     // Create bins array
//     Node** bins = new Node* [max + 1];
 
//     // Initialize bins array with nullptr
//     for (int i=0; i<max+1; i++){
//         bins[i] = nullptr;
//     }
 
//     // Update count array values based on A values
//     for (int i=0; i<n; i++){
//         Insert(bins, A[i]);
//     }
 
//     // Update A with sorted elements
//     int i = 0;
//     int j = 0;
//     while (i < max+1){
//         while (bins[i] != NULL){
//             A[j++] = Delete(bins, i);
//         }
//         i++;
//     }
 
//     // Delete heap memory
//     delete [] bins;
// }
 
// int main() {
 
//     int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
//     int n = sizeof(A)/sizeof(A[0]);
 
    
//     BinSort(A, n);
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<endl;
//     }
    
//     return 0;
// }