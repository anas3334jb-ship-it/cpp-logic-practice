#include<iostream>
using namespace std;

int decTobinary(int n){
    long long rem ,pow = 1, binary = 0;
    while(n>0){
        rem = n%2;
        n = n/2;
        binary+= rem * pow;
        pow*= 10;
    }
    return binary;
}

int main(){
     int n ;
    cin>>n;
    cout<<decTobinary(n);
    return 0;
}
