#include <iostream>
using namespace std;
int sum(int n,int k){
    int m=(n-1)/k;
    return k*m*(m+1)/2;
}
int main(){
    int n;
    cin>>n;
    int kq=sum(n,5)+sum(n,7)-sum(n,35);
    cout<<kq;
    return 0;
}