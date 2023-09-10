#include <iostream>

// Is number a primenumber?
bool checkPrime(int number) {
    
    for (int j = 2; j < number; j++) {

        if (number % j == 0) {
            return false;
        }
        if (j > number / 2) {
            return true;
        }

    }
}

// Get amount of primenumbers from 0 to a given value
int getPrimes(int toNumber) {
    // eq 1 because 2 is Prime

    int result = 1;
    
    for (int i = 3; i < toNumber; i++) {
        if (checkPrime(i) == true) {
            result++;
        }
    }
    return result;
}


int main() {
    int input;
    int result;
    float ratio;

    std::cout << "To which number should Primes be calculated?\n";
    std::cin >> input;

    result = getPrimes(input);
    ratio = ((float)result / (float)input) * 100;
    
    std::cout <<  "There are " << result << " Primes in " << input << "\nThats a " << ratio << "% Ratio.";
    return 0;
}
