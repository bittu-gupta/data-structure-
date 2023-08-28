// ----------DISPLAY LINKED-LIST----------
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create( node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }
  

//      void display( node *p){
//       while(p){
//         cout<<p->data<<endl;
//         p=p->next;
//       }
    
//      }

  

// };
// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//    node *last;
//    node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   b.display(last);
// }
  
// -------------RECURSIVE LINKED-LIST------------ 
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }
// void display( node *p){
//       if(p){
//         cout<<p->data<<endl;
//         display(p->next);
//       }
    
//      }

  

// };
// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   b.display(last);
// }

// -----------REVERSE LINKED-LIST-----------
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }
// void display( node *p){
//       if(p!=0){
//     display(p->next);
//         cout<<p->data<<endl;
        
//       }
    
//      }

  

//  };
// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   b.display(last);
// }

// ------------COUNTING THE NODES-------------
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }
// void display( node *p){
//   int count=0;
//       while(p){
      
//         count=count+1;
//          p=p->next;
//       }
//       cout<<count<<endl;
//      }

  

// };
// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     // last=first;
//   b.create(last,A,6);
//   b.display(last);
// }

// ------------RECURSIVE THE COUNTING THE NODES-------------
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }
// int count( node *p){
//   if(p==0){
//     return 0;
    
//   }
//   else{
//     return count(p->next)+1;
//   }
// }
// };
// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   cout<<b.count(last)<<endl;
// }

// ---------------SUM OF ALL ELEMENT OF THE LINKED LIST---------------
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }
// int sum( node *p){
//   int s=0;
//   while(p!=0){
//     s=s+p->data;
//     p=p->next;
//   }
//   return s;
// }
// };
// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   cout<<b.sum(last)<<endl;
// }

// -------------SUM OF ALL ELEMENT OF THE LINKED LIST BY RECURSIVE------------------

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }
// int sum( node *p){
//   if(p==0){
//     return 0;
//   }
//   else{
//    return sum(p->next)+p->data;
//   }
// }
// };
// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   cout<<b.sum(last)<<endl;
// }

// ------------MAX_NO------------

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }

//     int max(struct node *p){
//             int max_no=-32276;
//             while(p!=0){
//                 if(max_no < p->data){
//                     max_no=p->data;
//                 }
               

//                 p=p->next;
               
//             }
//          return max_no;

//      }
// };

// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   cout<<b.max(last)<<endl;
// }

// ---------------- recursive MAX NO------------
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }

//     int max(struct node *p){
//            int x=0;
//         if(p==0){
//             return 0;
//         }
//         x=max(p->next);
//         if(x>p->data){
//             return x;
//         }
//         else{
//             return p->data;
//         }
// }
// };

// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   cout<<b.max(last)<<endl;
// }

// ----------------SEARCHING A LINKED_LIST---------- own
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }

//     int serach(struct node *p,int key){
//       while(p){
//       if(key==p->data){
//           return p->data;
//       }
//         p=p->next;
//     }
//          return 0;
//      }

// };


// int main(){
//   class node b;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   int key;
//   cout<<"enter the value of key"<<endl;
//   cin>>key;
  
//   cout<<b.search(last,key)<<endl;
// }


// ----------------second method for searching a linked list-----------------
// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }

//     node* search(struct node *p,int key){
//        while(p){
//             if(key==p->data){
//                 return (p);
//             }
//             p=p->next;
//          }
//          return 0;
//      }
// };


// int main(){
//   class node b,*temp;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   int key;
//   cout<<"enter the value of key"<<endl;
//   cin>>key;
//   temp=b.search(last,key);
//   if(temp){
//     cout<<"key is found "<<temp->data<<endl;
//   }
//   else{
//     cout<<"key is not found"<<endl;
//   }
// }

// -----------------recursive search in linked list-----------------

// #include<iostream>
// using namespace std;
// class node{
//   public:
//   int data;
//   node *next;
//   void create(node *last,int A[],int n){
//     node *t;
   
//     for(int i=1;i<n;i++){
//       t= new node[i];
//       t->data=A[i];
//       t->next=NULL;
//       last->next=t;
//       last=t;
//     }
//   }

//     node* search(struct node *p,int key){
//        if(p==NULL){
//         return NULL;
//        }
//        if(key==p->data){
//         return (p);
//        }
//        else{
//         return search(p->next,key);
//        }
//     }
// };


// int main(){
//    node b,*temp;
//   int A[]={2,3,4,5,6,7};
//   node *last;
//   node *first=new node;
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//   b.create(last,A,6);
//   int key;
//   cout<<"enter the value of key"<<endl;
//   cin>>key;
//   temp=b.search(last,key);
//   if(temp){
//     cout<<"key is found "<<temp->data<<endl;
//   }
//   else{
//     cout<<"key is not found"<<endl;
//   }
// }


// revision linkedlist 23/05/2023
// #include<iostream>
// using namespace std;
// class node{
//     public:
//   int data;
//   node* next;
//   void create(node*,int*,int );
//   void sorted(node*,int*,int);
//   void display(node*);
// };
// void node::create(node* last,int A[],int n){
//     node *t;
    
//     for(int i=1;i<n;i++){
//     t=new node;
//     t->data=A[i];
//     t->next=NULL;
//     last->next=t;
//     last=t;
//     }
// }
// void node::sorted(node* last,int A[],int n){
//     node  *i,*j;
//     for( i=last;i!=NULL;i=i->next){
//         for( j=i->next;j!=NULL;j=j->next){
//             if(i->data>j->data){
//                 int temp;
//                 temp=i->data;
//                 i->data=j->data;
//                 j->data=temp;

//             }
//         }
//     }

// }
// void node::display(node* last){
//     node* t=last;

//     while(t){
//         cout<<t->data<<endl;
//         t=t->next;

//     }
// }
//  int main(){
//     class node b;
//     // int A[]={2,4,3,5,6,7,8};
//     int n;
//     cin>>n;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//     }
//       node* last;
//     node* first=new node;

//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     b.create(last,A,n);
//     b.sorted(last,A,n);
//     b.display(last);
//  }

#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
void create(node*,int*,int n);
void display(node*);
};
void node::create(node*last,int A[],int n){
    node* t;
    for(int i=1;i<n;i++){
        t=new node;
      t->data=A[i];
      t->next=NULL;
      last->next=t;
      last=t;
    }
   
    
}
void node::display(node* p){
    while(p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
    }
}

int main(){
    node b;
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    node* last;
    node* first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    b.create(last,A,n);
    b.display(last);
}




