#include <iostream>
using namespace std;

// Function to calculate (a^b % m)
int calculateModuloPower(int a, int b, int m) {
    if (b == 0)
        return 1;
    long long int result = 1;
    long long int base = a % m;
    while (b > 0) {
       
        if (b % 2 == 1)
            result = (result * base) % m;
            b /= 2;
             base = (base * base) % m;
    }
    return (int)result;
}

int main() {
    int a, b, m;
     cout<< "Enter the values of a, b, and m: ";
      cin>> a >> b >> m;

    int result = calculateModuloPower(a, b, m);

    cout << "Result of (" << a << "^" << b << " % " << m << ") is: " << result << std::endl;

    return 0;
}









// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b , m,c;
//     cin>>a>>b>>m;
//     c=pow(a,b);
//     cout<<c%m<<endl;
//     return 0;
// }