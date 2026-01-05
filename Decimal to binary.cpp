#include <iostream>
using namespace std;

int main(){
    int num;
    char binary[33];
    binary[32] = '\0';  // Null terminator
    int index = 31;
    
    cout << "Enter any decimal number: ";
    cin >> num;
    
    // Special case for zero.
    if(num == 0){
        cout << "Binary representation: 0" << endl;
        return 0;
    }
    
    // Store original value (optional, if you want to display it later).
    int original = num;
    
    // Build the binary representation in the character array.
    while(num > 0){
        int rem = num % 2;
        if(rem == 1){
            binary[index] = '1';
        }
        else{
            binary[index] = '0';
        }
        num /= 2;
        index--;
    }
    
    // Print the binary representation starting from the first valid digit.
    cout << "Binary representation of " << original << " is: " 
         << (binary + index + 1) << endl;
    
    return 0;
}

