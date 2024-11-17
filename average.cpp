#include <iostream>
#include "average.h"
using namespace std;

void average::data(){
    average s[5]; // Correct array size for 5 numbers
    for(int i = 0; i < 5; i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> s[i].no; // Store input in s[i].no
    }

    int sum = 0;
    float avg = 0.0;

    for(int i = 0; i < 5; i++){
        sum += s[i].no; // Add s[i].no to sum
    }

    avg = static_cast<float>(sum) / 5; // Float division to calculate average
    cout << "Average: " << avg << endl;
}

