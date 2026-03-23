#include <iostream>
#include <vector>
using namespace std;

void nhap(int &n, vector<long long> &a){
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void tim_chan_le(vector<long long> &a, int n){
    int demchan = 0, demle = 0;

    cout << "cac so chan: ";
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
            demchan++;
        }
    }
    cout << endl;

    cout << "cac so le: ";
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            cout << a[i] << " ";
            demle++;
        }
    }
    cout << endl;

    cout << "so luong chan: " << demchan << endl;
    cout << "so luong le: " << demle << endl;
}

int main(){
    int n;
    vector<long long> a;

    nhap(n, a);
    tim_chan_le(a, n);

    return 0;
}