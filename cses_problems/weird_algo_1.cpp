//This problem is collatz conjecture basically
//what collatz conjecture says is  The conjecture posits that if you repeat two simple arithmetic operations, you will eventually end up transforming every positive integer into the number one. 

//The proof for it is not created yet
//basically what it says is if odd , 3n+1 , even then n/2 . 


#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    while(true){
        if(n==1) return 9;
        if(n%2==0) n=n/2;
        else n =3*n+1;
        cout<<n<<" ";
    }
}

//code is this , but idea here is 
//we have to declare long long as sometimes we need to go beyond the normal int field as odd gets multiplied bu 3 and grows rapidly .

