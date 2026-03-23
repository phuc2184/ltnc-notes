#include <iostream>
#include <vector>
using namespace std;
void nhap(int &n,vector<long long> &a){
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void tim_max_min(vector<long long> &a,int n){
    int l,r;
    l=n/2;
    r=n;
    long long maxl=a[0];
    long long minl=a[0];
    for(int i=0;i<l;i++){
        if(a[i] > maxl) maxl=a[i];
        if(a[i] < minl) minl=a[i];
    }
    long long maxr=a[l];
    long long minr=a[l];
    for(int i=l;i<r;i++){
        if(a[i] > maxr) maxr=a[i];
        if(a[i] < minr) minr=a[i];
    }
    if(maxl < maxr) maxl=maxr;
    if(minl > minr) minl=minr;
    cout<<maxl<<endl;
    cout<<minl<<endl;
}
int main(){
    int n;
    vector<long long>a;

    nhap(n,a);
    tim_max_min(a,n);
    return 0;
}