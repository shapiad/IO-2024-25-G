#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n < 0) {
        cout << "Negative number is not allowed!" << endl;
        return 0; 
    }
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Fibonacci number: " << fibonacci(number) << endl;
    return 0;
}



