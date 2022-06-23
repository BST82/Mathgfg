#include<bits/stdc++.h>
using namespace std;


/// find the all divisors of any given number 

void printDivisor(int n){
int i;
for(i=1;i*i<=n;i++)
  if(n%i==0) cout<<i<<" ";

for( ; i>=1;i--)
if(n%i==0) cout<<(n/i)<<" ";
}
int main(){
    int n;
    cin>>n;
    printDivisor(n);

}