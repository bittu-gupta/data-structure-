// #include<iostream>
// using namespace std;
// class node{
//     public:
//  class node *lchild;
//  int data ;
//  class node *rchild;
 
// };

// class stack{
//     private:
//     int size;
//     int top;
//     node **s;
//     public:
//     void create(int);
//     void push(node* );
//     node* pop();
//     int isstackempty();
//     void preoder_iterative(node*);
//     void inoder_iterative(node*);
//     void display();

// };
// void stack:: create(int size){
//     top=-1;
//     this->size=size;
//     s=new node*[size];
// }
// void stack::push(node* x){
//     if(top==size-1){
//         cout<<"stack is full"<<endl;

//     }
//     else{
//         top++;
//         s[top]=x;
//     }

// }
// node* stack::pop(){
//     node* x=NULL;
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//     }
//     else{
//      x=s[top];
//      top--;
//     }
//     return x;
// }

// int stack::isstackempty(){
    
//     if(top==-1){
//         return true;
        
//     }
//     return false;
// }

// // this queue used for making the tree
// class queue{
// private:
// int size;
// int front ;
// int rear;
//  class node **Q;
 
// public:
// queue(int );
// void enqueue(node *x);
// node* dequeue( );

// int isEmpty();
// void Tcreate();

// };

// queue::queue(int size){
//    this->size=size;
//     front=-1;
//     rear=-1;
//     Q=new node*[size];
    
// }
// void queue::enqueue(node *x){
    
// if(rear==size-1){
//     cout<<"queue is full"<<endl;

// }

// else{
//     rear++;
//     Q[rear]=x;
// }
// }
// node* queue:: dequeue(){
    
//     node* x=NULL;
//     if(front==rear){
//        cout<<"queue is empty"<<endl;
//     }
//     else{
//          front++;
//         x=Q[front];

//     }
//     return x;
    
// }

// int queue::isEmpty() {
//     if (front == rear){
//         return true;
//     }
//     return false;
// }

// // this queue used for display levelorder traversal tree 
// class queue1{
// private:
// int size1;
// int front1 ;
// int rear1;
//  class node **Q1;
 
// public:
// void queue1_create(int );
// void enqueue1(node *x);
// node* dequeue1( );
// void leveloder(node*);

// int isEmpty1();


// };

//  void queue1::queue1_create(int size){
//    this->size1=size;
//     front1=-1;
//     rear1=-1;
//     Q1=new node*[size1];
    
// }
// void queue1::enqueue1(node *x){
    
// if(rear1==size1-1){
//     cout<<"queue is full"<<endl;

// }

// else{
//     rear1++;
//     Q1[rear1]=x;
// }
// }
// node* queue1:: dequeue1(){
    
//     node* x=NULL;
//     if(front1==rear1){
//        cout<<"queue is empty"<<endl;
//     }
//     else{
//          front1++;
//         x=Q1[front1];

//     }
//     return x;
    
// }

// int queue1::isEmpty1() {
//     if (front1 == rear1){
//         return true;
//     }
//     return false;
// }

// node *root=new node;

// void createTree(){
    
//     node* p;
//     node* t;
//     int x;
//     queue q(100);
 
//     cout << "Enter root value: " << flush;
//     cin >> x;
//     root->data = x;
//     root->lchild = nullptr;
//     root->rchild = nullptr;
//     q.enqueue(root);
 
//     while (!q.isEmpty()){
//         p = q.dequeue();
 
//         cout << "Enter left child value of " << p->data << ": " << flush;
//         cin >> x;
//         if (x != -1){
//             t = new node;
//             t->data = x;
//             t->lchild = nullptr;
//             t->rchild = nullptr;
//             p->lchild = t;
//             q.enqueue(t);
//         }
 
//         cout << "Enter right child value of " << p->data << ": " << flush;
//         cin >> x;
//         if (x != -1){
//             t = new node;
//             t->data = x;
//             t->lchild = nullptr;
//             t->rchild = nullptr;
//             p->rchild = t;
//             q.enqueue(t);
//         }
//     }
// }

// // PREODER ITERATIVE APPROACH

// void stack:: preoder_iterative(node *p){
    
//     while(p!=NULL||!isstackempty()){
//        if(p!=NULL){
//         cout<<p->data<<endl;
//         push(p);
//         p=p->lchild;
//        }
//        else{
//           p=pop();
//           p=p->rchild;
//        }
//     }


// }

// // PREODER RECURSIVE ORDER

// // void preoder(node *p){
// //     if(p){
// //     cout<<p->data<<endl;
// //     preoder(p->lchild);
// //     preoder(p->rchild);
// //     }
// // }


// //INODER ITERATIVE APPROACH
// // void stack ::inoder_iterative(node* p){
// //     while(p || !isstackempty()){
// //         if(p){
// //             push(p);
// //             p=p->lchild;
            
// //         }
// //         else{
// //             p=pop();
// //             cout<<p->data<<endl;
// //             p=p->rchild;


// //         }
// //     }

// // } 

// // INODER RECURSIVE APPROACH

// // void recursive_inoder(node *p){
// //     if(p){
// //         recursive_inoder(p->lchild);
// //         cout<<p->data<<endl;
// //         recursive_inoder(p->rchild);
// //     }
// // }

// // LEVEL ODER TRAVERSAL
// // void queue1:: leveloder(node *p){
    
// //     cout<<p->data<<endl;
// //     enqueue1(p);
// //     while(!isEmpty1()){
// //         p=dequeue1();
// //         if(p->lchild){
// //             cout<<p->lchild->data<<endl;
// //             enqueue1(p->lchild);

// //         }
// //         if(p->rchild){
// //             cout<<p->rchild->data<<endl;
// //             enqueue1(p->rchild);
         
// //         }    
// //         }



// // }

// // counting the nodes
// int count_node(node *p){
//     int x,y;
//     if(p){
//       x=count_node(p->lchild);
//       y=count_node(p->rchild);
//       return x+y+1;
//     }
//     return 0;
// }


// // sum of all data in a tree
// int  sum(node*p){
//     int x,y;
//     if(p){
//         x=sum(p->lchild);
//         y=sum(p->rchild);
//         return x+y+p->data;
//     } 
//     return 0;
// }   

// // height of the tree
// int height(node* p){
//     int x,y;
//     if(p){
//         x=height(p->lchild);
//         y=height(p->rchild);
//         if(x>y){
//             return x+1;
//         }
//         else{
//             return y+1;
//         }
//     }
//     return 0;
// }


 

// int main(){

//   class  stack b;
// //   class queue1 c;
//   b.create(100);
// createTree();
//  b.preoder_iterative(root);  
// // b.inoder_iterative(root);
// // recursive_inoder(root);
// // c.queue1_create(100);
// // c.leveloder(root);
// // cout<<"how many node present in tree"<<endl;
// // cout<<count_node(root)<<endl;


// // sum of all data in tree
// // cout<<sum(root)<<endl;


// // counting the height of the tree
// cout<<height(root)<<endl;



// }


// REVISION TREE ON DATE 14/08/23
// #include<iostream>
// using namespace std;
// class node{
//     public:
//  class node* lchild;
//  int data;
//  class node* rchild;

// };

// class queue{
//     private:
//     int size;
//     int front;
//     int rear;
//     node** Q;
//     public:
//      queue(int size){
//     this->size=size;
//      Q=new node*[size];
//      front=-1;
//      rear=-1;
// }
//    void enqueue(node* x);
//    node* dequeue();
//    int isempty();
//    void createTREE();
// };
// void queue:: enqueue(node* x){
//    if(rear==size-1){
//     cout<<"queue is full"<<endl;
//    } 
//    else{
//     rear++;
//     Q[rear]=x;
//    }  
// }
// node* queue::dequeue(){
//     node* x=NULL;
//     if(rear==front){
//         cout<<"queue is empty"<<endl;
//     }
//     else{
//         front++;
//         x=Q[front];

//     }
//     return x;
// }
// int queue::isempty(){
//     if(front==rear){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// node* root=new node;
//  void createTREE(){
//     node* p;
//     node* t;
//     queue q(100);
//     int x;
//     cout<<"enter the value of root"<<endl;
//     cin>>x;
//     root->data=x;
//     root->lchild=root->rchild=NULL;
//     q.enqueue(root);
//     while(!q.isempty()){
//         p=q.dequeue();
//         cout<<"enter the value of left child"<<endl;
//         cin>>x;
//         if(x!=-1){
//             t=new node;
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->lchild=t;
//             q.enqueue(t);
//         }
//         cout<<"enter the value of right child"<<endl;
//         cin>>x;
//         if(x!=-1){
//             t=new node;
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->rchild=t;
//             q.enqueue(t); 

//         }

//     }

    
//  }
//  int main(){
//     createTREE();
//  }


// other method to print the binary tree 
#include<iostream>
using namespace std;
class node{
    public:
 class node* lchild;
 int data;
 class node* rchild;

};


class queue{
    private:
    int size;
    int front;
    int rear;
    node** Q;
    public:
    queue(int n){
        this->size=size;
        Q=new node*[size];
        front=-1;
        rear=-1;
    }
void enqueue(node*);
node* dequeue();
int  isempty();
};
void queue:: enqueue(node* x){
   if(rear==size-1){
    cout<<"queue is full"<<endl;
   } 
   else{
    rear++;
    Q[rear]=x;
   }  
}
node* queue::dequeue(){
    node* x=NULL;
    if(rear==front){
        cout<<"queue is empty"<<endl;
    }
    else{
        front++;
        x=Q[front];

    }
    return x;
}
int queue::isempty(){
    if(front==rear){
        return true;
    }
    else{
        return false;
    }
}
node* root=new node;



void createTree(int A[],int n){
    node* p;
    node* t;
    queue q(n);
    
    
    root->data=A[0];
    root->lchild=root->rchild=NULL;
    q.enqueue(root);
    
        
    int i= 1;
    while(i<n){
         p=q.dequeue();
        if(A[i]!=0){
             t=new node;
            t->data=A[i];
            t->lchild=t->rchild=NULL;
            p->lchild=t;
           q.enqueue(t);

        i++;
        }
        
        
        if(A[i]!=0){
            
             t=new node;
            t->data=A[i];
            t->lchild=t->rchild=NULL;
            p->rchild=t;
           q.enqueue(t);

        i++;
        }
        
    
    }


    
}
void inorder(node *p){
    
      if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<endl;
        inorder(p->rchild);
      }
}
int main(){
    
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
    cout<<A[i]<<endl;
    }
     createTree(A,n);
     inorder(root);
}

  