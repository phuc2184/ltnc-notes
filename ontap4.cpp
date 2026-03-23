#include <iostream>
using namespace std;
void nhap(int &n,int &k){
    cin>>n>>k;
}
long long sum(int n,int k){
    long long m=(n-1)/k;
    return 1LL*k*m*(m+1)/2;
}
int main(){
    int n,k;
    long long kq;
    nhap(n,k);
    kq=sum(n,k);
    cout<<kq;
    return 0;

}