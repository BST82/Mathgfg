#include<bits/stdc++.h>
using namespace std;

// check if number is palindrom then return true otherwise return false;
// palindrom means== 1221 . to read from left or right both are same 
// eg 1221 , eg 2222 , 121, 1 , 9, 

bool isPalindrom(int n){
    int result=0;
    int temporary=n;
    while(temporary!=0){
        int temporaraystor=temporary%10;
        result=result*10+temporaraystor;
        temporary=temporary/10;
    }
    return (result==n);

}

int main(){
int n;
cin>>n;
cout<<isPalindrom(n);
}