#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    k%=n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i=n-k;
    for(;i!=(n-k-1);i=(i+1)%n){
        cout << arr[i] << " ";
    }
    cout << arr[i];
}