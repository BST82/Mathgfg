#include<bits/stdc++.h>
using namespace std;
// trailing zero means find the zero's which present in last and it right side of zero's come any non
// zero digit then stop to find other side zero's
int countTrailingZero(int n){
    int count =0;
    for(int i=5;i<=n;i=i*5){
        count = count + n/i;

    }
    return count;
}

int main(){
 int n;
 cin>>n;
 cout<<countTrailingZero(n);
}