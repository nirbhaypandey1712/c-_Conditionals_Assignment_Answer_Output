/*Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.*/

#include<iostream>
using namespace std;
int main() {
    int choice;
    float num1, num2, result;
    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch(choice){
        case 1:
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;
        case 2:
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;
        case 3: 
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;
        case 4:
        if(num2 != 0){
            result = num1 / num2;
            cout << "Result: " << result << endl;
      }
      else{
        cout << "Error! Division by zero is not allowed." << endl;
      }
      break;
      default:
      cout << "Invalid choice." << endl;
    }
    return 0;
}