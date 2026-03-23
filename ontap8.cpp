#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nhap(vector<long long> &a, int &n){
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void locso(vector<long long> &a,int n){
    cout<<"da loc"<<endl;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    sort(a.begin(),a.end(),greater<>());
    cout<<"cac so da sap xep theo thu tu giam dan"<<endl;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<a[i]<<" ";
        }
    }
    
}

int main(){
    int n;
    vector<long long> a;
    nhap(a,n);
    locso(a,n);
    return 0;
}