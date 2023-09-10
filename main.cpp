#include <iostream>

int getPrimes(int toNumber) {
    // eq 2 because 2 is Prime
    int result = 1;
    
    for (int i = 3; i < toNumber; i++) {
        // std::cout << i << " = i \n\n";
        for (int j = 2; j < i; j++) {
            // std::cout << j << " = j \n";
            if (i % j == 0) {
                // std::cout << "Is not Prime: Break\n";
                break;
            }

            if (j > i / 2) {
                
                // std::cout << "Found Prime: \n" << i << "\n\n";
                // std::cout << "Current result: " << result + 1 << "\n";
                result++;
                break;
            }
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
    
    std::cout <<  "There are " << result << " Primes to " << input << "\nThats a " << ratio << "% Ratio.";
    return 0;
}

