#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        mx = max(mx,a[i]);
    }
    int mx2 = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]!= mx && mx2 < a[i]){
            mx2 = a[i];
        }
    }
    cout << mx << endl;
    cout << mx2 << endl;
    return 0;
}