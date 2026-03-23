#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void nhap(int &n){
    cin>>n;
}
int tong(int n){
    if(n==0) return 0;
    int k=(n-1)/3;
    return 3*k*(k+1)/2;
}
int main(){
    int n;
    nhap(n);
    tong(n);
    int kq=tong(n);
    cout<<kq;
    
    return 0;
}
