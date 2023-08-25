#include<iostream>
using namespace std;
int main(){
int t; cin>>t;
while(t--){
int n; cin>>n;
if(n%2==0) cout<<(n*n)/4-n/2<<"\n";
else cout<<((n-1)/2)*((n-3)/2)+(n-1)/2<<"\n";
}
return 0;
}