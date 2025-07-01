#include <iostream> // Task 1
using namespace std;
int factorial(int n) {
    if (n == 0) return 1; 
    return n * factorial(n - 1);
}
int main() {
    int n;
    cin >> n;
    if (n < 0 || n > 12) {
        cout << "Input out of range (0 <= n <= 12)" << endl;
    } else {
        cout << factorial(n) << endl;
    }
    return 0;
}


#include <iostream> // Task 2
using namespace std;
int fibonacci(int n) {
    if (n <= 1) return n; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int n;
    cin >> n;
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
void reverseString(string &s, int start, int end) {
    if (start >= end) return; 
    swap(s[start], s[end]);  
    reverseString(s, start + 1, end - 1); 
}
int main() {
    string s;
    cin >> s;
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
    while (cin.peek() != '\n' && cin >> x) {
        arr.push_back(x);
    }
    cin.clear(); 
    cin >> value; 
    int countValue = count(arr.begin(), arr.end(), value);
    int minValue = *min_element(arr.begin(), arr.end());
    int maxValue = *max_element(arr.begin(), arr.end());
    cout << "Count of " << value << ": " << countValue << endl;
    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;
    return 0;
}


#include <iostream> // Task 5
using namespace std;
int power(int a, int b) {
    if (b == 0) return 1; 
    return a * power(a, b - 1); 
}
int main() {
    int a, b;
    cin >> a >> b;
    if (a < 0 || a > 10 || b < 0 || b > 10) {
        cout << "Input out of range (0 <= a, b <= 10)" << endl;
    } else {
        cout << power(a, b) << endl;
    }
    return 0;
}
