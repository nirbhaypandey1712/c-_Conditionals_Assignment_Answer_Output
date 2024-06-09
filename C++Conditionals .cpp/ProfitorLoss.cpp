/*Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.*/

#include<iostream>
using namespace std;
int main() {
    float cp, sp, profit, loss;
    cout << "Enter Cost Price (c.p): ";
    cin >> cp;
    cout << "Enter Selling Price (s.p): ";
    cin >> sp;
    if(sp > cp) {
        profit = sp - cp;
        cout << "Profit: " << profit << endl;
    }
    else if(sp < cp) {
        loss = cp - sp;
        cout << "Loss: " << loss << endl;
    }
    else{
        cout << "No Profit No Loss" << endl;
    }
    return 0;
}