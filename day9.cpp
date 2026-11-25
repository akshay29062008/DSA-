#include<iostream>
using namespace std;
int main(){
    double weight , height;
    cout <<"";
    cin >> weight;
    cout <<"";
    cin >> height;
    if (height<=0 || weight <=0){
        cout <<"";
    }
     double bmi = weight/(height* weight)
       string category;

    // Nested conditional logic to classify BMI
    if (bmi < 18.5) {
         string category = "Underweight";
    } else {
        if (bmi < 25.0) {
             string category = "Normal weight";
        } else {
            if (bmi < 30.0) {
               string  category = "Overweight";
            } else {
                string  category = "Obese";
            }
        }
    }

    
    return 0;
}


