#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"enetr an inteager: ";
    cin >> num;
    if(num<0){
        cout << num <<"is not palindrome";
    }
    int original = num;
    long long reversed = 0;
    while (num>0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num/10;

    }
    if(original == reversed){
        cout <<"number is palindrome" <<endl;

    }else{
        cout <<"is not palindrome" <<endl;
    }


}
