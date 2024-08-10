#include <iostream>

using namespace std;

bool isprime(int x){
 for(int i =2;i<x;i++){
    if(x%i == 0){
        return false;
    }
 }
 return true;
}

void primenumbers(int n){
    for(int i =2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    primenumbers(n);
    return 0;
}
