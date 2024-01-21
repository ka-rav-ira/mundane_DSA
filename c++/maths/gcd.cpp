#include <bits/stdc++.h>
using namespace std;

// int gcd(int n1, int n2){
//     for(int i = min(n1,n2);i>=1;i--){
//         if(n1%i==0 && n2%i==0){
//             cout<<i<<endl;
//             break;
//         }
//     }
//     return 0;
// }

//Optimized approach complexity in terms of O(log(min(n1,n2)))

int gcd(int n,int m){
    while(n>0 && m>0){
        if(n>m) n=n%m;
        else m=m%n;
    }
    if(n==0) return m;
    else return n;
}

int main(){
    cout << gcd(9, 12) << endl;
    return 0;
}