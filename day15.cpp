#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isprime = (n >= 2);
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }

    if(isprime)
        cout << n << " is prime";
    else
        cout << n << " is not prime";

    return 0;
}