#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int mx=-2e9;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==mx){
            cnt++;
        }
    }
    cout << cnt;
}