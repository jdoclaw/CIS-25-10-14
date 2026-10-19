#include <iostream>
using namespace std;

int addElements(int * arr, int count) {
    // base
    if (count == 0) {
        return 0;
    }
    // recursive
    return arr[0] + addElements(arr + 1, count -1);
}

int factorial(int number) {
    // base
    if (number == 0) {
        return 1;
    }
    // recursive
    return number * factorial(number - 1);
}

void countdown(int n) {
    if (n <= 1) {
        return;
    }
    cout << n << "\n";
    countdown(n - 1);
}

int main() {
    cout << factorial(3) << "\n";
    return 0;
    
    
}