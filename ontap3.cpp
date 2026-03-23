#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum;
    return 0;

}