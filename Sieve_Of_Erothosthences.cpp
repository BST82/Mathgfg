// we are going to find all prime number till given range
// eg :- I/O = 10 , O/P =2,3,5,7

#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<bool>isPrime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isPrime[i]==true) {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
}

int main(){
int n;
cin>>n;
sieve(n);
}