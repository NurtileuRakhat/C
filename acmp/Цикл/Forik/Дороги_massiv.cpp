#include <iostream>
using namespace std;
int main(){
    int n;
    int a[n][n];
    cin >> n;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                cnt++;
            }
        }
    }
    cout<< cnt/2;
}