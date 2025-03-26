#include <iostream>

using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    do {
        sum += num % 10;
        num /= 10;
    } while (num > 0);
    return sum;
}

int main() {
    int number;
    
    // Asking for user input
    cout << "Enter a positive number: ";
    cin >> number;
    
    // Compute the sum of digits
    int sum = sumOfDigits(number);
    cout << "\nThe sum of the digits is : " << sum << "\n" << endl;
    
    // Check divisibility from 2 to 9 using a do-while loop
    int divisor = 2;
    do {
        if (number % divisor == 0) {
            cout << number << " is divisible by " << divisor << "\n";
        } else {
            cout << number << " is not divisible by " << divisor << "\n";
        }
        divisor++;
    } while (divisor <= 9);
    
    return 0;
}