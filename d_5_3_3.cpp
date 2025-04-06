#include"bits/stdc++.h"

using namespace std;

int evaluatePostfix(const string& expression) {
    stack<int> s;
    stringstream ss(expression);
    string token;
    
    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            
            if (token == "+") {
                s.push(operand1 + operand2);
            } else if (token == "-") {
                s.push(operand1 - operand2);
            } else if (token == "*") {
                s.push(operand1 * operand2);
            } else if (token == "/") {
                s.push(operand1 / operand2);
            }
        } else {
            int operand = stoi(token);
            s.push(operand);
        }
    }
    
    return s.top();
}

int main() {
    string expression;
    cout << "Enter a postfix expression:" << endl;
    getline(cin, expression);
    
    cout << "Postfix expression: " << expression << endl;
    cout << "Evaluated result: " << evaluatePostfix(expression) << endl;
    
    return 0;
}