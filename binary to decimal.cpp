#include <iostream>
#include <string>
using namespace std;

int main(){
    string binary;
    cout << "Enter a Binary Number: ";
    cin >> binary;
    
    int decimal = 0;
    for(char digit : binary){
        if(digit != '1' && digit != '0'){
            cout << "Invalid Binary Number. Please enter only '0' and '1'." << endl;
            return 1;
        }
        decimal = decimal * 2 + (digit - '0');
    }
    
    cout << binary << " represented in Decimal is: " << decimal << endl;
    return 0;
}

