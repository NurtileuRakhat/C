#include <iostream>
using namespace std;
int main(){
    int n;cin >> n;
    int a[n][n];
    int v =1;
    for (int i=0;i<n;i++){
        if(i %2 == 0){
            for(int j=0;j<n;j++){
                a[i][j]=v; 
                v++;       
       }
        }else{
            for(int j=n-1;j>=0;j--){
                a[i][j]=v;
                v++;
            }
         }
         
    }
    for(int i=0;i<n;i++){
        for (int j =0;j <n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }   
}