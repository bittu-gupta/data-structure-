// print the diagonal matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int A[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//          cin>>A[i][j];
//         }  
//     }
// int A[2][2]={{1,2},{3,4}};
//  for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//          cout<<A[i][j];
//         } 
//         cout<<endl;
//     }


// }

// method ist diagonal matrix

// #include<iostream>
// using namespace std;
// class matrix{
// int a[100];
// int n;
// public:
// void setdata(int ,int ,int,int );
// void display();
// };
// void matrix::setdata(int i,int j,int n, int x){
//     this->n=n;
    
//    if(i==j){
//     a[i]=x;
//    }
// }
// void matrix:: display(){
    
    
// for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//             cout<<a[i];
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     class matrix b;
//     int n;
//     cin>>n;
//     b.setdata(0,0,n,2);
//     b.setdata(1,1,n,9);
//     b.setdata(2,2,n,5);
//     b.setdata(3,3,n,7);
//     b.display();
// }

// method 2nd diagonal matrix
// #include<iostream>
// using namespace std;
// class diagonal{
//     int n;
//     int *A;
//     public:
//     diagonal(int n){
//         this->n=n;
//         A=new int[n];

//     }
//     void setdata(int i,int j,int x);
//     int getdata(int ,int);
//     void display();
//     ~diagonal(){
//         delete []A;
//     }
// };
// void diagonal:: setdata(int i,int j,int x){
//     if(i==j){
//         A[i]=x;
//     }
// }
// int diagonal::getdata(int i,int j){
//    if(i==j){
//     return A[i];
//    }
// }
// void diagonal:: display(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//             cout<<A[i];
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }

// }

// int main(){
 
//     diagonal b(4);
    
//     b.setdata(0,0,3);
//     b.setdata(1,1,7);
//     b.setdata(2,2,5);
//     b.setdata(3,3,9);
//     b.display();
    


    

// }


// lower triangular matrix
#include<iostream>
using namespace std;
class diagonal{
    int n;
    int *A;
    public:
    diagonal(int n){
        this->n=n;
        A=new int[n];

    }
    void setdata(int i,int j,int x);
    int getdata(int ,int);
    void display();
    ~diagonal(){
        delete []A;
    }
};
void diagonal:: setdata(int i,int j,int x){
    if(i==j){
        A[i]=x;
    }
}
int diagonal::getdata(int i,int j){
   if(i==j){
    return A[i];
   }
}
void diagonal:: display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
            cout<<A[i];
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }

}

int main(){
 
    diagonal b(4);
    
    b.setdata(0,0,3);
    b.setdata(1,1,7);
    b.setdata(2,2,5);
    b.setdata(3,3,9);
    b.display();
    


    

}
 

