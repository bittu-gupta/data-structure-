// UNDERSTANDING WORK

// #include<iostream>
// using namespace std;
// void countsort(int A[],int n){
//     int k=0;
//     for(int i=0;i<n;i++){
        
//         if(A[i]>k)
//         k=A[i];
//     }
    
//     int B[k+1];
//     for(int i=0;i<n;i++){
//         int d,m,f=1;
//         if(i<=f){
//             for(int j=0;j<i-1;j++){
//                 if(A[j]!=A[i]){
//                     m=0;
//                 }
//                 else{
//                     m-1;
//                 }
//             }
//         }

//         if(A[i]>0){
//             d=A[i];
//             B[d]=m++;
//         }
//     }
//     cout<<B[5]<<endl;
// }

// int main(){
//     int A[]={3,4,5,6,5,8},n=6;
//     countsort(A,n);

// }

// #include<iostream>
// using namespace std;
// void countsort(int*,int);
// void countsort(int A[],int n){
//     int k=0,i,j;
//     for(int i=0;i<n;i++){
//         if(A[i]>k){
//             k=A[i];
//         }

//     }
    
//     int *c;
//     c=new int[k+1];
//       i=0;
//     while(i<k+1){
//         c[i]=0;
//         i++;
//     }
    
//     for(int i=0;i<n;i++){
//         c[A[i]]++;
//     }
    
    
//      i=0;j=0;
//     while(i<k+1){
//     if(c[j]>0){
//         A[i++]=j;
//         c[j]--;
//     }
//     else{
//         j++;
//     }

//     }
    
// }
// int main(){
//     int A[]={2,3,5,4,7,6,3,8,7},n=9;
//     countsort(A,n);
//     for(int i=0;i<n;i++){
//         cout<<A[i]<<endl;
//     }
    
// }


#include<iostream>
// #include<cstring>
using namespace std;
int comb(int ,int);
int fact(int);
int main() {
    int X,N;
    cin>>X>>N;
    int tics=0;
    //number of tickets that can be issued

    while(N--){
        string s;
        cin>>s;
        //input string
        
        int i=0;
        int j=0;
        int n=1;
        //n represents the compartment number in each car
        
        while(n<10){
        //we have total of 9 compartments
            
            string str;
            //stores the arrangement of each compartment
            //for n=1 if str=100101 it means that only 1, 4 and 53 are booked
            
            for(;i<4*n;i++){    //for(i=0;i<4*n;i++)
                str+=s[i];
            }
            //this stores the arrangement of the part of the compartment that has 4 seats
            
            for(;j<2*n;j++){
                str+=s[53-j];
            }
            //stores the arrangement of the part of the compartment that has only two seats
            
            int cnt=0;
            //to count the number of available spaces in each compartment
            
            for(int k=0;k<6;k++){
                if(str[k]=='0')
                    cnt++;
            }
            
            if(cnt>=X)
            //if the available spaces are more than or equal to the required number
                tics+=comb(cnt,X);
                //find the possible number of combinations of selling the tickets and add it to the final tics counter
            
            n++;
            //when the operation for one compartment is completed increment to the next compartment
        }
    }
    cout<<tics<<endl;
    //final answer
    
	return 0;
}

int comb(int a, int b){
    int c;
    c=fact(a)/(fact(b)*fact(a-b));
    return c;
}
int fact(int a){
    int f=1;
    while(a>=1){
        f*=a;
        a--;
    }
    return f;
}


           