#include<bits/stdc++.h>
using namespace std;

int gcd(int a,  int b){
// if(a%b==0) return b;
if(b==0) return a;
else
return gcd(b,a%b);
}

int lcm(int a ,int b){
return (a*b)/gcd(a,b);
}
int main(){
int a, b,c;
cin>>a>>b>>c;
cout<<gcd(a,b)<<endl;
cout<<__gcd(a,b)<<endl; // pre build function same TC as gcd function
cout<<__gcd(__gcd(a,b),c)<<endl;
cout<<lcm(a,b);


}