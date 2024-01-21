#include<bits/stdc++.h>
using namespace std;

    bool checkArmstrong(int n) {
    // Handle single-digit numbers
    if (n >= 0 && n <= 9) {
        return true;
    }
    
    int originalNumber = n;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits in the original number
    while (n > 0) {
        n = n / 10;
        numDigits++;
    }

    // Reset n to the original value
    n = originalNumber;

    while (n > 0) {
        int last_digit = n % 10;
        sum = sum + pow(last_digit,numDigits);
        n = n / 10;
    }

    return (sum == originalNumber);
}

int main(){
     return checkArmstrong(1674);
    
}