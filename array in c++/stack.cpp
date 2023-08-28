// -------------stack using array--------------

// #include<iostream>
// using namespace std;
// #define MAX_SIZE 5
                              
// class stack{
// public:
//  int size;
//  int top=-1;
//  int s[MAX_SIZE];
//   void push(){
    
//     if(top==MAX_SIZE-1){
//       cout<<"stack overflow"<<endl;
//     }
//     else{
//       int x;
//       cout<<"enter the value "<<endl;
//       cin>>x;
//       top++;
//       s[top]=x;
//     }


//   } 
//   void pop(){
//     if(top==-1){
//       cout<<"stack is empty"<<endl;

//     }
//     else{
//       int x=-1;
//       x=s[top];
//       top--;
//     }
//   }
//   void peek(){
//     if(top==-1){
//       cout<<"stack is empty"<<endl;
//     }
//     else{
//       int x=-1;
//       int pos;
//       cout<<"enter the position"<<endl;
//       cin>>pos;
//       if(top-pos+1<0){
//         cout<<"invalid position"<<endl;
//       }
//       else{
//          x=s[top-pos+1];
         
//       }
//     }
//   }
//   int isempty(){
//     if(top==-1){
//       return 1;
//     }
//     return -1;
    
//   }
//   int isfull(){
//     if(top==MAX_SIZE-1){
//       return 1;

//     }
//     return -1;
//   }
//   int stacktop(){
//     if(!isempty()){
//       cout<<"tscktop"<<endl;
//         return s[top];

//     }
//     else{
//     return -1;
//     }
//   }
//   void display(){
//     for(int i=top;i>=0;i--){
//       cout<<s[i]<<endl;
//     }
//   }

// };
// int main(){
//     stack obj;
//     int choice;
//     // obj.push();
//     // obj.push();
//     // obj.push();
//     // obj.push();
//     // cout<<"pop"<<endl;
//     // obj.pop();
//     // cout<<"stacktop"<<endl;
//     // cout<<obj.stacktop()<<endl;
//     // cout<<"display"<<endl;
//     // obj.display();
//     do{
//       cout<<"stack menu"<<endl;
//       cout<<"1.push\n 2.pop\n 3.peek\n 4.isempty\n 5.isfull\n 6.stacktop\n 7.display\n"<<endl;
//       cout<<"enter your choice"<<endl;
//       cin>>choice;
//       switch(choice){
//         case 1: obj.push();
//         break;
//         case 2: obj.pop();
//         break;
//         case 3: obj.peek();
//         break;
//         case 4: obj.isempty();
//         break;
//         case 5: obj.isfull();
//         break;
//         case 6: obj.stacktop();
//         break;
//         case 7: obj.display();
//         break;
//         default: cout<<"invalid choice"<<endl;
        
//       }

//     }while(choice!=0);

// }

// ---------------stack using linked list-----------------
#include<iostream>
using namespace std;
class node{
  private:
  int data;
  node *next;
  public:
  void push(int x);
  int pop();
  int peek(int pos);
  int isfull();
  int isempty();
  int stacktop();
  void display();
  
  // void push(int x){
  //   node *t;
  //   t=new node;
  //   if(t==NULL){
  //     cout<<"stack is overflow"<<endl;
  //   }
  //   else{
  //     t->data=x;
  //     t->next=top;
  //     top=t;

  //   }


  // }
  // void display(){
  //   while(top){
  //     cout<<top->data<<endl;
  //     top=top->next;
  //   }
  // }

}*top=NULL;
 void node:: push(int x){
    node *t;
    t=new node;
    if(t==NULL){
      cout<<"stack is overflow"<<endl;
    }
    else{
      t->data=x;
      t->next=top;
      top=t;

    }


  }
   int node::pop(){
    int x=-1;
    node *p=top;
    if(top==NULL){
      return -1;
    }
    else{
      // p=top;
      x=p->data;
      top=top->next;
      delete[]p;
    }
     return x;
  }

  int node::peek( int pos){
    node *t=top;
    for(int i=1;t!=NULL && i<pos-1;i++){
      t=t->next;
    }
    if(t!=NULL){
      return t->data;
    }
    else{
      return -1;
    }
  }
  void node::display(){
    while(top){
      cout<<top->data<<endl;
      top=top->next;
    }
  }
  int node::isfull(){ 
    node *t;
    t=new node;
    if(t==NULL){
      return 1;
    }
    else{
      return -1;
    }
  }
  int node:: isempty(){
    if(top){          //if(top!=NULL)
    return 1;
   }
   else{
    return -1;
   }
  }
  int node:: stacktop(){
     
    if(top!=NULL){
      
       return top->data;
    }
     else{
      return -1;
     } 
    }
  

int main(){
  node *top=NULL;
  node *b;
  b->push(2);
  b->push(3);
  b->push(4);
  b->push(5);
  b->push(6);
  cout<<"pop"<<endl;
  cout<<b->pop()<<endl;
  cout<<"peek"<<endl;
  cout<<b->peek(4)<<endl;
  cout<<"isfull"<<endl;
  cout<<b->isfull()<<endl;
  cout<<"isempty"<<endl;
  cout<<b->isempty()<<endl;
  cout<<b->stacktop()<<endl;
  cout<<"display"<<endl;
  b->display();
}
   

