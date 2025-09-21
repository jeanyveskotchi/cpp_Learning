#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    string answer = "yes";  // initialize answer

    while(answer != "no") {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter an operator (+,-,*,/): ";
        cin >> operation;

        // validate operator
        while(operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            cout << "Enter a valid operator (+,-,*,/): ";
            cin >> operation;
        }

        cout << "Enter second number: ";
        cin >> num2;

        switch(operation) {
            case '+':
                cout << "The result is: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "The result is: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "The result is: " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 != 0)
                    cout << "The result is: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
        }

        cout << "Do you want to continue (yes/no)? ";
        cin >> answer;
        cout << endl;
    }

    cout << "Bye!" << endl;

    return 0;
}
