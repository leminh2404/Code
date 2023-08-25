#include "iostream"
#include "cmath"
using namespace std;
int main(){
    int n;
    cout << " Nhap n: ";
    cin >> n;
    float T=0;
    for(int i=0;i<n;i++){
        T += sqrt(2+sqrt(2));
    }
    cout << " " << T;
}
