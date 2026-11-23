#include<iostream>
using namespace std;
int main(){
    double o;
    cin>> o;
    double d;
    cin >>d;
    double g;
    cin >>g;
     
    double offer = o*(d/100.0);
    double offerprice = o - offer;
    cout <<"Discount price " <<offerprice <<endl;

    double gst = offerprice*(g/100.0);
    double final = offerprice + gst;
    cout <<"final price " <<final <<endl; 

}
