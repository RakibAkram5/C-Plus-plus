#include <iostream>
#include <string>
using namespace std;

string capitalize_first_letter(string text) {
    for (int i = 0; i < text.length(); i++) {
        // Check if the character is the first character of the string or follows a space
        if (i == 0 || text[i - 1] == ' ') {
            // If the character is a lowercase letter (ASCII range 97 to 122), convert it to uppercase
            if (text[i] >= 'a' && text[i] <= 'z') {
                text[i] = text[i] - 32; // Subtract 32 from the ASCII code to get the uppercase letter
            }
        }
    }
    return text;
}

int main() {
    string sentence = "hello world, this is a test.";
    cout << "Original: " << sentence << endl;
    cout << "Modified: " << capitalize_first_letter(sentence) << endl;
    return 0;
}

