#include <iostream>
#include <sstream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    string result;
    for (char c : input) {
        if (c == '<') {
            if (!result.empty()) { 
                result.pop_back();
            }
        } 
        else {
            result.push_back(c);
        }
    }

    cout << result << endl;

    return 0;
}

