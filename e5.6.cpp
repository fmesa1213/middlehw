/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E5.6 - middle(str) function

Wrote a function that returns a string containing the middle character in str if the length of str is odd,
or the two middle characters if the length is even
*/


#include <iostream>
#include <string>

using namespace std;

string middle(string s) {
    if (s.size() % 2 == 0) {
        return s.substr((s.size()-1)/2, 2);
    } else {
        return s.substr(s.size()/2, 1);
    }
}

int main() {
    cout << middle("middle") << endl;
    cout << middle("abcde") << endl;
    return 0;
}
