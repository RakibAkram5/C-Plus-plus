#include <iostream>
using namespace std;

int main() {
    char arr[50];
    char find, replace;
    
    cout << "Enter the Sentence: ";
    cin.getline(arr, 50);  // Reading up to 49 characters plus '\0'
    
    cout << "\nSentence: " << arr << endl;
    
    cout << "Enter character to be Found: ";
    cin >> find;
    
    cout << "Character to be replaced by: ";
    cin >> replace;
    
    // Replace all occurrences of 'find' with 'replace'
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == find) {
            arr[i] = replace;
        }
    }
    
    cout << "After Change: " << arr << endl;
    
    return 0;
}

