// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     int *p;
//     p=new int[n];
//     cout<<"enter the value of arrray"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>p[i];

//     }
//     for(int i=0;i<n ;i++){
//         cout<<p[i]<<endl;
//     }
// }

// -------- merging the two array ---------   
// #include<iostream>
// using namespace std;
// int main(){
//     int k=0;
//     int n;
//     cout<<"size of array"<<endl;
//     cin>>n;

//     int A[n];
//     cout<<"enter the value of of array"<<endl;
//     for(int i=0;i<n ;i++){
//         cin>>A[i];
//     }
//      int m;
//      cout<<"enter the size of array"<<endl;
//      cin>>m;
//      int B[m];
//      cout<<"enter the value of array"<<endl;
//      for(int j=0;j<m;j++){
//         cin>>B[j];

//      }
//      int C[n+m];
//      for(int i=0; i<n;i++){
//         C[k++]=A[i];
        
//      }
//      for(int j=0;j<m;j++) 

//      C[k++]=B[j];

//       cout<<"the value of merging array"<<endl;
//      for(int k=0;k<n+m;k++){
//         cout<<C[k]<<endl;
//      }

    

// }

// #include<iostream>
// using namespace std;
// int main(){
// int i,j,k;
//  i=j=k=0;
// int n;
// cout<<"size of array"<<endl;
// cin>>n;
// int A[n];
// cout<<"enter the value of of array"<<endl;

// for(int i=0;i<n;i++){
//     cin>>A[i];
// }
// int m;
// cout<<"enter the size of array"<<endl;
// cin>>m;
// int B[m];
// cout<<"enter the value of array"<<endl;
// for(int j=0;j<m;j++){
//     cin>>B[j];
// }
// int C[n+m];
// while(i<n && j<m){
   
// // for(int k=0; k<n+m;k++){
//    if(A[i]<B[j]){
//     C[k++]=A[i++];

//    }
//    else{
//     C[k++]=B[j++];
//    }
// // }
// }
// k++;

// for(;k<n+m;k++){
//     C[k]=A[i++];

// }
// for(;k<n+m;k++){
//     C[k]=B[j++];
     
// }
// for(int k=0; k<n+m;k++){
//     cout<<C[k]<<endl;
// }


// }


//   -----fibonacci series ------
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;
//     int arr[n];
// for(int i=0;i<n;i++){
//   if(i==0 || i==1){
//     arr[i]=i;
//   }
//   else{
//     arr[i]=arr[i-1]+arr[i-2];
//   }
// }
// for( int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }

// }

// #include<iostream>
// using namespace std;
// void naive_match(string s1,string s2)
// {
//     int j;
//  int n=s1.length();
//  int m=s2.length();
//  for(int i=0;i<=n-m;i++){
//     for( j=0;j<m;j++){
//         if(s1[i+j]!=s2[j]){
//             break;
//         }
//     }
//     if(j==m){
//         cout<<i<<endl;
//     }
    
//  }
// }
//     int main(){
//     string s1,s2;
//     cout<<"enter your string"<<endl;
//     cin>>s1>>s2;
//     naive_match(s1,s2);
// }
#include<iostream>
using namespace std;
int main(){
    int T,n;
    cout<<"t"<<endl;
    cin>>T;
    for(int i=0;i<T;i++){
        cout<<"n"<<endl;
        cin>>n;
        int task[n];
        for(int i=0;i<n;i++){
            cout<<"task"<<endl;
            cin>>task[i];
        }

        int a;
        //how many task want to you give
        cin>>a;
        int p1=0,p2=0;
        for(int i=0;i<n;i++){
        if(i<a){
            p1=p1+task[i];
        }
        else{
            p2=p2+task[i];
        }

        }
        if(p1>=p2){
            cout<<p1<<endl;
        }
        else{
            cout<<p2<<endl;
        }


    }

}