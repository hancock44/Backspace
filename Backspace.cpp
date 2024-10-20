#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    stack<char> result;
    for (char c : input) {
        if (c == '<') {
            if (!result.empty()) { 
                result.pop();
            }
        } 
        else {
            result.push(c);
        }
    }
    string ans;
    while (!result.empty()) {
        ans = result.top() + ans;
        result.pop();
    }

    cout << ans << endl; // Print the result

    return 0;
}
