// #include<iostream>
// #include<climits>
// using namespace std;
// class node {
//     public:
//     int data;
//    node* next;
// //   void insert(node**,int);
// };
//   void  insert(node** ptrbins ,int idx ){
//     node *temp;
//     temp=new node;
//     temp->data=idx;
//     temp->next=NULL;
//     if(ptrbins[idx]==NULL){
//         ptrbins[idx]=temp;
//     }
//     else{
//         node* p=ptrbins[idx];
//         while(p->next=NULL){
//             p=p->next;
//         }
//         p->next=temp;
//     }
//     cout<<"h"<<endl;

//   }
//   int Delete(node** ptrbins,int idx){
//     cout<<"d"<<endl;
//          node* p = ptrbins[idx];  // ptrBins[idx] is head ptr
//     ptrbins[idx] = ptrbins[idx]->next;
//     int x = p->data;
//     delete []p;
    
//     return x;
//   }

// int find_max(int A[], int n){
    
//     int max_no=INT_MIN;
//     for(int i=0;i<n;i++){
//         max_no=max(max_no,A[i]);
//     }
//     cout<<"f"<<endl;
//   return max_no;
// }
// void bucket_sort(int A[],int n){
//     node **bins;
//     int max=find_max(A,n);
//     bins=new node*[max+1];
//     for(int i=0;i<max+1;i++){
//         bins[i]=NULL;
//     }
//     for(int i=0;i<n;i++){
//         cout<<"j";
//         insert(bins,A[i]);
//     }
//     cout<<"g"<<endl;
    
//     // element of bins back to A array for sorting 
    
//     int i = 0;
//     int j = 0;
//     while (i < max+1){
//         while (bins[i] != nullptr){
//             A[j++] = Delete(bins, i);
//         }
//         i++;
//     }
 
//     // Delete heap memory
//     delete [] bins;
    
//  }
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//     }
//     bucket_sort(A,n);
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<endl;
//     }
// }

#include<iostream>
#include<climits>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void insert(node** bins,int value,int idx){
      node* temp;
      temp= new node;
      temp->data=value;
      temp->next=NULL;
      if(bins[idx]==NULL){
        bins[idx]=temp;
      }
      else{
        node* p=bins[idx];
        
        while(p->next!=NULL){
            p=p->next;

        }
        p->next=temp;
      }
}
int count_digit(int max_no){
    int s=0;
    while(max_no>0){
        max_no=max_no/10;
        s++;
    }
    return s;
}
int max(int A[],int n){
    int max_no=INT_MIN;
    for(int i=0;i<n;i++){
 max_no=max(max_no,A[i]);
    }
    return max_no;
}

int going(int x ,int idx){ 
    return (x / pow(10, idx)) % 10;
    
}
  int Delete(node** ptrbins,int idx){
    
         node* p = ptrbins[idx];  // ptrBins[idx] is head ptr
    ptrbins[idx] = ptrbins[idx]->next;
    int x = p->data;
    delete []p;
    
    return x;
  }

void radix_sort(int A[],int n){
    int max_no=max(A,n);
    int max_digit =count_digit(max_no);
    node** bins;
    bins=new node*[10];
    for(int i=0;i<n;i++){
        bins[i]=NULL;
    }
    int t=max_no;
    while(t>0){
        for(int i=0;i<n;i++){
    int element=going(A[i],i);
    insert(bins,A[i],element);
        }
        
    int i = 0;
    int j = 0;
    while (i < 10){
        while (bins[i] != nullptr){
            A[j++] = Delete(bins, i);
        }
        i++;
    }

    t--;
    
    }

}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    radix_sort(A,n);
}
    
