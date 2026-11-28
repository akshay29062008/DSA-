#include<iostream>
using namespace std;
int main(){
    int n ;
    cout <<"enetr the number : ";
    cin >>n;
     
       long long first = 0, second = 1;

    std::cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        std::cout << first << " ";

        long long next = first + second;
        first = second;
        second = next;
    }
        
        
     }


