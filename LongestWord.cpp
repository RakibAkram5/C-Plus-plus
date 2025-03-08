#include <iostream>
#include <string>
using namespace std;

int main(){
    string input = "C++ is a general-purpose programming language.";
    string longestword = "";
    string currentword = "";
    
    for (int i = 0; i < input.length(); i++){
        char c = input[i];
        // Corrected condition for checking letters
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
            currentword = currentword + c;
        }
        else {
            if (currentword.length() > longestword.length()){
                longestword = currentword;
            }
            currentword = "";
        }
    }
    // Final check in case the string ends with a letter
    if (currentword.length() > longestword.length()){
        longestword = currentword;
    }
    
    cout << "Longest Word: " << longestword << endl;
    return 0;
}

