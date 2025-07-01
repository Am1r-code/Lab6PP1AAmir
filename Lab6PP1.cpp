#include <iostream> // Task 1
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) return 1; // base case
    return n * factorial(n - 1); // recursive call
}

int main() {
    int n;
    cin >> n;

    // Input validation
    if (n < 0 || n > 12) {
        cout << "Input out of range (0 <= n <= 12)" << endl;
    } else {
        cout << factorial(n) << endl;
    }

    return 0;
}


#include <iostream> // Task 2
using namespace std;

// Recursive function to return the n-th Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n; // base cases: fib(0)=0, fib(1)=1
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
}

int main() {
    int n;
    cin >> n;

    // Input validation
    if (n < 0 || n > 20) {
        cout << "Input out of range (0 <= n <= 20)" << endl;
    } else {
        cout << fibonacci(n) << endl;
    }

    return 0;
}


#include <iostream> // Task 3
#include <string>
using namespace std;

// Recursive function to reverse the string in-place
void reverseString(string &s, int start, int end) {
    if (start >= end) return; // base case
    swap(s[start], s[end]);   // swap characters
    reverseString(s, start + 1, end - 1); // recursive call
}

int main() {
    string s;
    cin >> s;

    // Input validation
    if (s.length() > 50) {
        cout << "Input string too long (max 50 characters)" << endl;
    } else {
        reverseString(s, 0, s.length() - 1);
        cout << s << endl;
    }

    return 0;
}


#include <iostream> // Task 4
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    int x, value;

    // Reading input
    while (cin.peek() != '\n' && cin >> x) {
        arr.push_back(x);
    }

    cin.clear(); // clear newline from stream
    cin >> value; // value to find frequency of

    // Using <algorithm> functions
    int countValue = count(arr.begin(), arr.end(), value);
    int minValue = *min_element(arr.begin(), arr.end());
    int maxValue = *max_element(arr.begin(), arr.end());

    // Output
    cout << "Count of " << value << ": " << countValue << endl;
    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;

    return 0;
}


#include <iostream> // Task 5
using namespace std;

// Recursive function to compute a^b
int power(int a, int b) {
    if (b == 0) return 1; // base case: a^0 = 1
    return a * power(a, b - 1); // recursive step
}

int main() {
    int a, b;
    cin >> a >> b;

    // Input validation
    if (a < 0 || a > 10 || b < 0 || b > 10) {
        cout << "Input out of range (0 <= a, b <= 10)" << endl;
    } else {
        cout << power(a, b) << endl;
    }

    return 0;
}