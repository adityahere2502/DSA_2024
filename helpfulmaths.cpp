#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    stringstream ss(str);
    int numbers[100]; // Assuming a maximum of 100 numbers
    char plus; // To store the '+' character
    int count = 0;

    while (ss >> numbers[count]) {
        ss >> plus; // Read the '+' character
        ++count;
    }

    sort(numbers, numbers + count);

    for (int i = 0; i < count; ++i) {
        cout << numbers[i];
        if (i != count - 1) {
            cout << "+";
        }
    }

    return 0;
}
