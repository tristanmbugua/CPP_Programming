/**
 * Program: Detect My Palindrome!
 * File: detectPalindrome.cpp
 * Author: Tristan Mbugua
 **/

#include <iostream>
#include <string>

std::string testString = "Error";
bool loopContinue = true;


int main() {
    std::cout << "Hello. Welcome to Detect My Palindrome!" << std::endl;
    while (loopContinue) {
        std::cout << "Please enter a potential palindrome." << std::endl;
        std::cin >> testString;
        const int stringLength = testString.length() - 1;
        bool notAPalindrome = false;
        for (int i = 0; i < stringLength; i++) {
            if (i <= (testString.length() / 2)) {
                if (!(testString[i] == testString[stringLength - i])) {
                    notAPalindrome = true;
                    break;
                }  
            }
        }
        if (notAPalindrome) {
            std::cout << "This word is not a palindrome." << std::endl;
        } else {
            std::cout << "This word is a palindrome!" << std::endl;
        }
        //Continue loop mechanism.
        std::cout << "Would you like to try again?" << std::endl;
            //Complete this.
    }
    return 0;
}