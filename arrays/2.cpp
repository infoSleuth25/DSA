/*
Insert 
I/P : [5,10,20], x= 7 , pos = 2
O/P : [5,7,10,20]
*/

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int x,pos;
    cin >> x >> pos;
    for(int i=n-1;i>=pos-1;i--){ 
        a[i+1] = a[i];
    }
    a[pos-1] = x;
    for(int i=0;i<=n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}