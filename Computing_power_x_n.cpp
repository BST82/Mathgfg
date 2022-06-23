
#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
     if(n==0) return 1;

     int temporary=power(x,n/2);
    // temporary=temporary*temporary;
     if(n%2==1) return temporary*temporary*x;
     return temporary*temporary;
}

int main(){
int x , n;
cin>>x>>n;
cout<<power(x,n);
}