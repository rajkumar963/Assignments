#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n*n,0);

    for(int i=2 ; i<n*n ; i++){
        for(int j=i*i ; j<n*n; j+=i){
            if(v[j]==0){
                v[j]=1;
            }
        }
    }
    vector<int>prime;
    int k=0;
    for(int i=2 ; i<n*n ; i++){
        if(v[i]==0){
            prime.push_back(i);
            k++;
        }
    }
    for(int i=0 ; i<n; i+=2){
        cout<<prime[i]<<' ';
    }
    return 0;
}