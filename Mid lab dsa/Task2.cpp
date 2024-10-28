#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 80;
    char elements[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(char ch) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack overflow." << endl;
            return;
        }
        elements[++top] = ch;
    }

    char pop() {
        if (top < 0) {
            cout << "Stack underflow." << endl;
            return '\0';
        }
        return elements[top--];
    }

    bool isEmpty() const {
        return top == -1;
    }
};

bool isPalindrome(const string& str) {
    Stack stack;
    int i = 0;

    while (str[i] != '.' && i < str.length()) {
        if (isalpha(str[i])) { 
            stack.push(tolower(str[i]));
        }
        i++;
    }

    i = 0;
    while (str[i] != '.' && i < str.length()) {
        if (isalpha(str[i])) {
            char topChar = stack.pop();
            if (tolower(str[i]) != topChar) {
                return false; 
            }
        }
        i++;
    }

    return true; 
}

int main() {
    string input;
    cout << "Enter a string terminated by a '.' to check if it's a palindrome: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
