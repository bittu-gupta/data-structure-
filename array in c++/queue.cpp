// #include<iostream>
// using namespace std;
// class queue{
// private:
// int size;
// int front ;
// int rear;
// int *Q;
// public:
// void create( int );
// void enqueue(int x);
// int dequeue( );
// void display();

// };
// void queue::create(int size){
//     this->size=size;
//     front=-1;
//     rear=-1;
//     Q=new int[size];



    
// }
// void queue::enqueue(int x){
    
// if(rear==size-1){
//     cout<<"queue is full"<<endl;

// }

// else{
//     rear++;
//     Q[rear]=x;
// }
// }
// int queue:: dequeue(){
    
//     int x=-1;
//     if(front==rear){
//        cout<<"queue is empty"<<endl;
//     }
//     else{
//          front++;
//         x=Q[front];

//     }
//     return x;
    
// }
// void queue::display(){
//     for(int i=front+1;i<=rear;i++){
//         cout<<Q[i]<<endl;
//     }

// }
// int main(){
//     queue b;
//     b.create(5);
//     b.enqueue(10);
//     b.enqueue(20);
//     b.enqueue(30);
//     b.enqueue(40);
//     cout<<"before dequeue display"<<endl;
//     b.display();
//     cout<<"after dequeue display"<<endl;
//     b.dequeue();
//     b.display();


    
// }



// CIRCULAR QUEUE
// #include<iostream>
// using namespace std;
// class circular_queue{
//     private:
//     int size;
//     int front ;
//     int rear;
//     int *Q;
//     public:
//  void create( int );
//  void enqueue(int x);
//  int dequeue( );
//  void display();


// };
// void circular_queue::create(int size){
//     this->size=size;
//     front=0;
//     rear=0;
//     Q=new int[size];
// }
// void circular_queue::enqueue(int x){
//     if((rear+1)%size==rear){
//         cout<<"queue is full"<<endl;
//     }
//     else{
//         rear=(rear+1)%size;
//         Q[rear]=x;

//     }
// }
// int circular_queue::dequeue(){
//     int x=-1;
//     if(front==rear){
//         cout<<"queue is empty"<<endl;
//     }
//     else{
//         front=(front+1)%size;
//         x=Q[front];
//     }
//     return x;
// }
// void circular_queue::display(){
//     int i=front+1;

//  do
//  {

//  cout<<Q[i]<<endl;
//  i=(i+1)%size;
//  }while(i!=(rear+1)%size);



// }


// int main(){
//     circular_queue b;
//     b.create(5);
//     b.enqueue(10);
//     b.enqueue(10);
//     b.enqueue(10);
//     b.enqueue(10);
//     b.display();
// }


// queue using linked list
#include<iostream>
using namespace std;
class node{
    
    int data;
    node *next;
    public:
    
    
    
    void enqueue(int );
    int dequeue();
    void display();

}*front=NULL,*rear=NULL;
void node::enqueue(int x){
    node *t=new node;
    if(t==NULL){
        cout<<"queue is full"<<endl;
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            rear=front=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}
int node:: dequeue(){
    int x=-1;
    node *p=front;
    if(front==NULL){
        cout<<"queue is empty"<<endl;
    }
    else{
      x=p->data;
      front=front->next;
      delete[]p;
    }
    return x;
    
}
void node::display(){
    node *p=front;
    while(p){
        cout<<p->data<<endl;
        p=p->next;
    }

}
int main(){
    node *b;
    b->enqueue(10);
    b->enqueue(20);
    b->enqueue(30);
    b->enqueue(40);
    b->enqueue(50);
    b->display();
    cout<<"dequeue element"<<endl;
    cout<<b->dequeue()<<endl;;
   cout<< b->dequeue()<<endl;;
    cout<<"after the dequeue element"<<endl;
    b->display();
}

