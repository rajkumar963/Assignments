#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0 ; i<m ; i++){
        cin>>b[i];
    }
    int j=0, k=0;
    vector<int>c(m+n);
    if(n>m){
     for(int i=0 ; i<2*m&&j<n&&k<m ; i+=2){
         if(a[j]>=b[k]){
             c[i]=b[k];
             c[i+1]=a[j];
             j++;
             k++;
         }
         else if(a[j]<=b[k]){
             c[i]=a[j];
             c[i+1]=b[k];
             j++;
             k++;
         }
         
     }
     for(int i=0 ; i<n+m ; i++){
        cout<<c[i]<<' ';
    }
     int j=m;
     for(int i=2*m-1 ; j<n ; i++){
        if(a[j]<=c[i]){
            c.insert(c.begin()+i,a[j]);          
        }
        j++;
     }
    }
    if (m > n) {
        for (int i = 0; i < 2 * m && j < n && k < m; i += 2) {
            if (a[j] >= b[k]) {
                c[i] = b[k];
                c[i + 1] = a[j];
                j++;
                k++;
            } else if (a[j] <= b[k]) {
                c[i] = a[j];
                c[i + 1] = b[k];
                j++;
                k++;
            }
        }
        int j = n;
        for (int i = 2 * n - 1; k < m; i++) {
            if (b[k] <= c[i]) {
                c.insert(c.begin() + i, b[k]);
                k++;
            }
        }
    }
	if(m==n){
        for(int i=0 ; i<2*m&&j<n&&k<m ; i+=2){
         if(a[j]>=b[k]){
             c[i]=b[k];
             c[i+1]=a[j];
             j++;
             k++;
         }
         else if(a[j]<=b[k]){
             c[i]=a[j];
             c[i+1]=b[k];
             j++;
             k++;
         }
         
     }
    }

    for(int i=0 ; i<n+m ; i++){
        cout<<c[i]<<' ';
    }
    return 0;
}