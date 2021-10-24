/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#define R(i,a,b) for(int i=a;i<b;i++)
using std::cin;
using std::cout;
using std::endl;

int kadang(int n, int array[]){
    int best=0,sum=0;
    R(i,0,n){
        sum=(array[i]>sum+array[i])?array[i]:sum+array[i];
        best=(sum>best)?sum:best;
    }
    return best;
}



int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    R(i,0,n){
        cin>>array[i];
    }
    cout<<"the maximum sum is: "<<kadang(n,array)<<endl;
    return 0;
}


