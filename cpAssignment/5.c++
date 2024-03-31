#include<bits/stdc++.h>
using namespace std;
 int lowerbound(vector<int>v,int x){
    int upper=v.size()-1, lower=0, mid=(upper+lower)/2;
    while(upper>=lower){
        if(upper==lower+1){
            return v[upper];
        }
        else if(x==v[mid]){
            return v[mid+1];
            break;
        }
        else if(x>v[mid]){
            lower=mid;
            mid=(upper+lower)/2;
        }
        else if(x<v[mid]){
            upper=mid;
            mid=(upper+lower)/2;
        }
    }
 }
 int upperbound(vector<int>v,int x){
    int upper=v.size()-1, lower=0, mid=(upper+lower)/2;
    while(upper>=lower){
        if(upper==lower+1){
            return v[upper];
        }
        else if(x==v[mid]){
            return v[mid+1];
            break;
        }
        else if(x>v[mid]){
            lower=mid;
            mid=(upper+lower)/2;
        }
        else if(x<v[mid]){
            upper=mid;
            mid=(upper+lower)/2;
        }
    }
 }
 int ispresent(vector<int>v,int x){
    int upper=v.size()-1, lower=0, mid=(upper+lower)/2;
    while(upper>=lower){
        if(upper==lower+1){
            if(upper==x||lower==x){
            return true;
            }
            else{
                return false;
            }
        }
        else if(x==v[mid]){
            return true;
            break;
        }
        else if(x>v[mid]){
            lower=mid;
            mid=(upper+lower)/2;
        }
        else if(x<v[mid]){
            upper=mid;
            mid=(upper+lower)/2;
        } else{
            return false;
        }
    }
 }
 
 
 int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    sort(v.begin(),v.end());
    cout<<lowerbound(v,x)<<endl;
    cout<<upperbound(v,x)<<endl;
    if(ispresent(v,x)){
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
   
    return 0;
 }