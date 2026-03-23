#include <iostream>
using namespace std;
void nhap(int &n,int &a,int &b){
    cin>>n>>a>>b;
}
long long gcd(int a,int b){
    while(b!=0){
        long long r=a%b;
        a=b;
        b=r;
    }return a;
}
long long tong_so_chia_het(int n,int k){
    long long m=(n-1)/k;
    return 1LL*k*m*(m+1)/2;
}
int main(){
    int n,a,b;
    nhap(n,a,b);
    gcd(a,b);
    long long lcm=1LL*a*b/gcd(a,b);
    long long ketqua=tong_so_chia_het(n,a)+tong_so_chia_het(n,b)-tong_so_chia_het(n,lcm);
    cout<<ketqua;

    return 0;
}