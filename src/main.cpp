#include <iostream>
#include <algorithm>
#include <functional>

int main() {
    int uno;
    int dos;
    int tres;
    int ltgogtl;

    do {
        std::cout << "Choose a number: ";
        if (!(std::cin >> uno)) {
            std::cout << "Invalid input type! ";
            std::cin.clear();
            continue;
        }
    } while (uno < 0);

    do {
        std::cout << "Choose a number: ";
        if (!(std::cin >> dos)) {
            std::cout << "Invalid input type! ";
            std::cin.clear();
            continue;
        }
    } while (dos < 0);

    do {
        std::cout << "Choose a number: ";
        if (!(std::cin >> tres)) {
            std::cout << "Invalid input type! \n";
            std::cin.clear();
            continue;
        }
    } while (tres < 0);

    int arr[] = {uno, dos, tres};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Sort Least to Greatest or Greatest to Least?\n";
    std::cout << "1. Least to Greatest\n";
    std::cout << "2. Greatest to Least\n";
    std::cin >> ltgogtl;
    //std::cout << ltgogtl << std::endl;

    if (ltgogtl == 1) {
        std::sort(arr, arr + n, std::less<int>());

        std::cout << "Sorted Least to Greatest: ";
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
    }
    else if (ltgogtl == 2) {
        std::sort(arr, arr + n, std::greater<int>());

        std::cout << "Sorted Greatest to Least: ";
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
    }
    else {
        std::cout << "Invalid input type! \n";
        std::cin.clear();
    }


    return 0;
}