#include <iostream>
#include <cstring>
using namespace std;

char infix[100], postfix[100], stack[100];
int top = -1;  // Initialize top of stack to -1

void push(char symbol) {
    stack[++top] = symbol;  // Increment top and push symbol
}

char pop() {
    return stack[top--];  // Return top symbol and decrement top
}

int precedence(char symb) {
    switch (symb) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        default: return 0;  // Non-operators
    }
}

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

void infixToPostfix() {
    int pos = 0;  
    for (int i = 0; i < strlen(infix); i++) {
        char symbol = infix[i];
        
        if (isalnum(symbol)) {  // If the symbol is an operand
            postfix[pos++] = symbol;
        } else if (symbol == '(') {
            push(symbol);
        } else if (symbol == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[pos++] = pop();
            }
            pop();  // Pop '(' from stack
        } else if (isOperator(symbol)) {
            while (top != -1 && precedence(stack[top]) >= precedence(symbol)) {
                postfix[pos++] = pop();
            }
            push(symbol);
        }
    }
    
    // Pop all remaining operators from the stack
    while (top != -1) {
        postfix[pos++] = pop();
    }
    postfix[pos] = '\0';  // Null-terminate the postfix expression
}

int main() {
    cout << "Enter an infix expression: ";
    cin >> infix;  // Read the infix expression
    infixToPostfix();
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
