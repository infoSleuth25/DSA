/*
Deletion
I/P : [3,8,12,5,6] x = 12
O/P : [3,8,5,6]
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
    int i;
    for(i=0;i<n;i++){
        if(a[i]== key){
            break;
        }
    }
    for(int j=i;j<n-1;j++){
        a[j] = a[j+1];
    }
    n = n -1;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}