/*
Linear Search on an array
I/P : [20,7,5,25] key = 5
O/P : 2
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
    int key;
    cin >> key;
    for(int i=0;i<n;i++){
        if(a[i] == key){
            cout << i << endl;
            break;
        }
    }
    return 0;
}