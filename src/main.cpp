#include <iostream>
#include <algorithm>
#include <functional>
#include <limits>

int main() {
    double uno, dos, tres;
    int ltgogtl;

    double inputs[3];
    for (int i = 0; i < 3; ++i) {
        while (true) {
            std::cout << "Choose number " << (i + 1) << ": ";
            if (std::cin >> inputs[i]) {
                break;
            } else {
                std::cout << "Invalid input! Use decimals like 4.32.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }

    double* arr = inputs;
    int n = 3;

    std::cout << "\nSort Least to Greatest or Greatest to Least?\n";
    std::cout << "1. Least to Greatest\n2. Greatest to Least\nChoice: ";
    
    while (!(std::cin >> ltgogtl)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter 1 or 2: ";
    }

    if (ltgogtl == 1) {
        std::sort(arr, arr + n, std::less<double>());
        std::cout << "Sorted Least to Greatest: ";
    }
    else if (ltgogtl == 2) {
        std::sort(arr, arr + n, std::greater<double>());
        std::cout << "Sorted Greatest to Least: ";
    }
    else {
        std::cout << "Invalid selection.";
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}