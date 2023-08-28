// #include<iostream>
// using namespace std;
// class node{
// public:
// int data;
// node* next; node* create_node(int data);

// void insert(node* hashtable[],int key);
// void display(node*p[]);
// };
//  node* node::create_node(int data){
//     // cout<<"dsfs0"<<endl;
//     node* new_node=new node;
//     if(new_node==NULL){
//         return NULL;
//     }
    
//     else{
//         // cout<<"sfsd"<<endl;
//     new_node->data=data;
//     new_node->next=NULL;
//     // cout<<new_node->data<<endl;
//     return new_node;
//     }

// }
// void node::insert(node* hashtable[],int key){
//   int index=(key%10); 
//      node* new_node=create_node(key);
//     // cout<<new_node->data<<" ";
//  if(hashtable[index]==NULL){
//     hashtable[index]=new_node;
//  }
//  else{
//     //  cout<<"dfsd"<<endl;
//     node* temp=hashtable[index];
//     while(temp->next==NULL){
//         temp=temp->next;
//     }
//     temp->next=new_node;
//  }
// }
// void node::display(node* p[]){
    
// for(int i=0;i<10;i++){
    
//     node* temp=p[i];
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// }
// int main(){
//     class node b;
//     node* hashtable[10];
//     for(int i=0;i<10;i++){
//         hashtable[i]=NULL;
//     }
//     b.insert(hashtable,2);
//     b.insert(hashtable,10);
//     b.insert(hashtable,9);
//     b.insert(hashtable,5);
//     b.insert(hashtable,20);
//     b.insert(hashtable,15);
//     b.insert(hashtable,22);
//     b.insert(hashtable,19);
//     b.display(hashtable);


    
    

// }
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
     
// };
// class Hashtable{
// public:
// node** hashtable;

// Hashtable(){
//     hashtable = new Node*[10];
//     for(int  i=0;i<10;i++){
//         hashtable[i]=NULL;

//     }
    
// }

// int hashfunc(int key){
// return (key%10);
// }


// void insert(int key){
// int index=hashfunc(key);
//  node* new_node=new node;
//    new_node->data=key;
//   new_node->next=NULL;
  
//   if(hashtable[index]==NULL){
//      hashtable[index]=new_node;


    
// }
// else{
//     node* temp=hashtable[index];
//     while(temp){
//         temp=temp->next;
//     }
//     temp->next=new_node;
// }

// }

// };
// int main(){
// // Hashtableinsert() ;
// }
// #include<iostream>
// using namespace std;
// void sorted(int*,int );
// void swap(int*,int*);
// void swap(int *a , int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void sorted(int A[],int n,int W){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(A[j]>A[j+1]){
//                 swap(A[j],A[j+1]);
//             }
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<A[i]<<endl;
//     // }
//     // int i=n,flag=0;;
//     // int count=0;
//     // while(i>=0){
//     //     int k=A[i]-A[i-1];
//     //     if(k>W){
//     //         flag=1;
//     //     //     cout<<"dfsf"<<endl;
//     //     //    i--;
//     //     }
//     //     else{
//     //         flag=0;
//     //         // cout<<"dsf"<<endl;
//     //         count=count+1;
//     //     //   i-2;
//     //     }
//     // }if(flag==1){
//     //     i--;
//     // }
//     // else{
//     //     i-2;
//     // };
//     // cout<<count<<endl;
    
//     int count=0;
//     for(int i=n;i>=0;i--){
//         int k=A[i]-A[i-1];
//         if(k>W){

//         }
//         else{
//             count=count+1;
//              i=i-1;
//         }
//     }
//     cout<<count<<endl;
// }
// int main(){
//     int N,W;
//     //  cin>>T;
//     //  for(int i=0;i<T;i++){
//     //   cout<<"jfkgb"<<endl;
//         cin>>N;
//         // cout<<"sds"<<endl;
//         cin>>W;
//         int A[N];
//         for(int i=0;i<N;i++){
//             cin>>A[i];
//         }
//         sorted(A,N,W);
        
    
// //  }

// }
// #include <bits/stdc++.h>
// using namespace std;
// void pushpa(int A[],int n){
//     sort(A,A+n);
//     // for(int i=0;i<n;i++){
//     //     cout<<A[i]<<endl;
//     // }
    
    
//         if(A[n-1]!=A[n-2]){
//           cout<<A[n-1]<<endl; 
//         }
//         else{
//             int i, s=0;
//             for(i=n;i>=0;i--){
//                 if(A[i-1]==A[i-2]){
//                     s++;
//                     for(int i=0;i<n-s;i++){
//                         A[i]=A[i]+1;
//                     }
//                 }
//                 else{
//                       cout<<A[i-1]<<endl;
//                       break;
//                 }
//             }
            
        


//         }
//      }

// int main() {
//     int t,n;
//     cin>>t;
    
//     for(int i=0;i<t;i++){
//         cin>>n;
//         int A[n];
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//         }
//         pushpa(A,n);
//     }
    
    
// 	// your code goes here
// 	return 0;
// }

#include<iostream>
using namespace std;
// template<typename T>
// T add(T x, T y ){
    
//     return (x,y)?x:y;
// }
// int main(){
//     cout<<add<float>(3.6,4);
    
// }
template<typename T>
class harry{
   T a,b;
   public:
   harry(T a){
    this->a=a;
    cout<<this->a<<endl;
   }
   void display();
   T add(T c,T d){
  a=c;
  b=d;
  return a+b;
//   int s=a+b;
//   cout<<s<<endl;
   }
//    void func( int a);
   
};
void  func(int a){
cout<<a<<endl;
}
template<typename T>
void  func(T a){
    
    cout<<a<<endl;
}


template<typename T>
void harry<T>::display(){
    cout<<this->a<<endl;
}
int main(){
    harry<int> obj(5);
   
//  vector<float>(5.6);
int c=6;
float d=8.9;
cout<<obj.add(c,d)<<endl;
float result=obj.add(c,d);
 cout<<result<<endl;
 obj.display();
//  obj.func(6);

}

// HOW TO define fucction outside the class




 

 