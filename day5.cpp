#include<iostream>
using namespace std;
int main(){
    double withdrwal , accbalnce;
    double transactionfee = 2.0;
    cout <<"withdrawal amount";
    cin >> withdrwal;
    cout <<"acc balance";
    cin >> accbalnce;
      if (withdrwal > 0 && withdrwal == withdrwal && fmod(withdrwal, 100) == 0 &&
        withdrwal + transactionfee <= accbalnce) {
        cout << "Transaction successful";
      } else {
        cout << "Invalid withdrawal or insufficient balance";
      }

}