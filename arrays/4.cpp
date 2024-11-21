/*
Largest element in an array
I/P : [10,5,20,8]
O/P : 20
*/

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
    cout << mx << endl;
    return 0;
}