#include <iostream>
#include <fstream>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;  // Convert uppercase to lowercase
    }
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    }
    return false;
}

// Function to sort vowel counts in descending order
void sortVowels(char vowels[], int counts[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (counts[j] < counts[j + 1]) {
                // Swap counts
                int tempCount = counts[j];
                counts[j] = counts[j + 1];
                counts[j + 1] = tempCount;

                // Swap corresponding vowels
                char tempVowel = vowels[j];
                vowels[j] = vowels[j + 1];
                vowels[j + 1] = tempVowel;
            }
        }
    }
}

int main() {
    // Variables to count vowels and consonants
    int vowelCount[5] = {0};  // 'a', 'e', 'i', 'o', 'u'
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int consonantCount = 0;
    int totalVowels = 0;

    // Reading from Input.txt
    ifstream inputFile("Input.txt");
    if (!inputFile) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    char ch;
    while (inputFile.get(ch)) {
        // Check if character is an alphabet letter
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (isVowel(ch)) {
                // Increment the corresponding vowel count
                if (ch == 'a' || ch == 'A') vowelCount[0]++;
                else if (ch == 'e' || ch == 'E') vowelCount[1]++;
                else if (ch == 'i' || ch == 'I') vowelCount[2]++;
                else if (ch == 'o' || ch == 'O') vowelCount[3]++;
                else if (ch == 'u' || ch == 'U') vowelCount[4]++;
                totalVowels++;
            } else {
                // It's a consonant
                consonantCount++;
            }
        }
    }

    inputFile.close();  // Close the input file

    // Sort vowels based on their frequency in descending order
    sortVowels(vowels, vowelCount, 5);

    // Writing results to Output.txt
    ofstream outputFile("Output.txt");
    if (!outputFile) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    outputFile << "Total Consonants: " << consonantCount << endl;
    outputFile << "Total Vowels: " << totalVowels << endl;

    // Writing vowel counts in sorted order
    for (int i = 0; i < 5; i++) {
        if (vowelCount[i] > 0) {
            outputFile << "Total '" << vowels[i] << "': " << vowelCount[i] << endl;
        }
    }

    outputFile.close();  // Close the output file

    cout << "Results written to Output.txt." << endl;
    return 0;
}

