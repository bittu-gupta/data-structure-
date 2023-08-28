
//creating and binary search in a tree 

// #include<iostream>
// using namespace std;
// class node{
// public:
//     node *lchild;
//     int data;
//     node *rchild;
    
//      node* insert(node* ,int);
//      node* binary_search(node* ,int);
//     }*root=NULL;
//     node* node::insert(node* p,int key){
//         node *t=NULL;
//         node* r;
//         if(p==NULL){
//             p=new node;
//             p->data=key;
//             p->lchild=p->rchild=0;
            
            
//         }

//         while(p){
//             t=p;
             
//             if(key<p->data){
                
//                 p=p->lchild;
//             }
//             else if(key>p->data){
                
//                 p=p->rchild;
//             }
//             else{
//                 return p;
//             }
//         }
//         r=new node;
//         r->data=key;
//         r->lchild=r->rchild=0;
//         if(r->data<t->data){
//             t->lchild=r;
//         }
//         else{
//             t->rchild=r;
//         }


//     }
    
//  void preoder(node *p){
//     if(p){
//     cout<<p->data<<endl;
//     preoder(p->lchild);
//     preoder(p->rchild);
//     }
// }

  
// //   binary search in a tree
// node* node::binary_search(node* p,int key){
//     node *t;
//     while(p){
//         if(p->data==key){
//             return p;
//         }
//         else if(p->data<key){
//             p=p->rchild;
//         }
//         else{
//             p=p->lchild;
//         }
//     }
//     return NULL;
// }

    

//     int main(){
//         node b;
//         node* t;
       
    
//      root=b.insert(root,8);
//      b.insert(root,9);
//      b.insert(root,6);
//      b.insert(root,5);
//      b.insert(root,4);
//      b.insert(root,12);
//      b.insert(root,11);
//      b.insert(root,13);
//      b.insert(root,7);
//     t =b.binary_search(root,14);
    
//     if(t==NULL){
//         cout<<"key is not present"<<endl;
//     }
//     else{
//         cout<<t->data<<endl;
//     }
//     cout<<"dispaly the tree"<<endl;
//      preoder(root);





    

//     }

// Generating the BST from preorder
// #include <iostream>
// using namespace std;

// class node {
// public:
//     node* lchild;
//     int data;
//     node* rchild;
    
//     void create_preorder(int*, int);
//     void preoder(node*);
    
// }*root=NULL;

// class Stack {
// private:
//     int size;
//     int top;
//     node** s;
// public:
//     Stack() {
//         size = 10;
//         top = -1;
//         s = new node*[size];
//     }
//     Stack(int size) {
//         this->size = size;
//         top = -1;
//         s = new node*[size];
//     }
//     void push(node*);
//     node* pop();
//     int is_empty();
//     node* stack_top();
// };

// void Stack::push(node* x) {
//     if (top == size - 1) {
//         cout << "Stack overflow" << endl;
//     }
//     else {
//         top++;
//         s[top] = x;
//     }
    
// }

// node* Stack::pop() {
//     node* x = NULL;
//     if (top == -1) {
//         cout << "Stack underflow" << endl;
//     }
//     else {
//         x = s[top];
//         top--;
//     }
    
//     return x;
// }

// int Stack::is_empty() {
//  return -1;
//  return 1;
// }

// node* Stack::stack_top() {
//     if (!is_empty()) {
//         return s[top];
//     }
//     else {
//         return NULL;
//     }
// }

// void node::create_preorder(int pre[], int n) {
//     int i = 0;
//     root = new node;
//     root->data = pre[i++];
//     root->lchild = root->rchild = NULL;
//     node* t = root;
//     Stack stk(10);

//     while (i < n) {
//         if (pre[i] < t->data) {
//             node* p = new node;
//             p->data = pre[i++];
//             p->lchild = p->rchild = NULL;
//             t->lchild = p;
//             stk.push(t);
//             t = p;
//         }
//         else {
//             if (pre[i] > t->data && (stk.is_empty() || pre[i] < stk.stack_top()->data)) {
//                 node* p = new node;
//                 p->data = pre[i++];
//                 p->lchild = p->rchild = NULL;
//                 t->rchild = p;
//                 t = p;
//             }
//             else {
//                 t = stk.pop();
//             }
//         }
//     }
    
// }
//  void node:: preoder(node *p){
    
    
    
//     if(p){
        
//     cout<<p->data<<endl;
//     preoder(p->lchild);
//     preoder(p->rchild);
//     }
    
// }

// int main() {    
     
//     node bst;
//     int pre[] = { 30, 20, 10, 15, 25, 40, 50, 45 };
//     int n = sizeof(pre) / sizeof(pre[0]);

//     bst.create_preorder(pre, n);
//     bst.preoder(root);
    

//     return 0;
// }


//REVISION BINARY SEARCH TREEE ON DATE 18/08/23 

#include<iostream>
using namespace std;
class node{
    public:
 class node* lchild;
 int data;
 class node* rchild;

};
node* root=NULL;
   void insert( int key){
    node *t,*p,*r;
    t=root;
    if(root==NULL){
    root= new node;
    root->data=key;
    root->lchild=root->rchild=NULL;
    return;
    }
    while(t!=NULL){
        if(key==t->data){
            return ;
        }
        else if(key<t->data){
            r=t;
            t=t->lchild;

        }
        else{
            r=t;
            t=t->rchild;
        }
    }
    p=new node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(key<r->data){
        r->lchild=p;

    }
    else{
        r->rchild=p;
    }

        
   }
  node* search(int key){
    node* t=root;
   while(t!=NULL){
    if(key==t->data){
        return t ;
    }
    else if(key<t->data){
        t=t->lchild;
    }
    else{
        t=t->rchild;
    }
    
   }
   return NULL;

   }
   void Inorder(node* p){
    if(p){
        Inorder(p->lchild);
        cout<<p->data<<endl;
        Inorder(p->rchild);
    }
   }
   int main(){
     
    insert(30);
    insert(10);
    // insert(30);
    insert(20);
    Inorder(root);
    node* temp=NULL;
    temp=search(20);
    if(temp!=NULL){
        cout<<"element is found "<< temp->data<<endl;

    }
    return 0;

    
   }




    