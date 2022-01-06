#include <iostream>
#include <string>

bool isPalindrome(std::string word) {
    size_t i;
    size_t j;

    for (i = 0, j = word.length() - 1; i < word.length(), j != 0; i++, j--) {
        if (word[i] == word[j]) {
            continue;
        }
        else
            return false;
    }
    return true;
}

void prompt() {
    std::string token;
    std::cout << "Enter a word to check if it's a palindrome: ";
    std::cin >> token;

    bool check = isPalindrome(token);

    if (check)
        std::cout << token << " is a palindrome!" << std::endl;
    else if (!check)
        std::cout << token << " is NOT a palindrome!" << std::endl;

    std::cout << "Would you like to enter a another word? (Enter Y or N): ";
    std::cin >> token; // re-using token variable as user input for choice

    if (token == "Y")
        prompt();
    if (token == "N")
        return;
}

int main()
{   
    prompt();
    
    std::cout << "End of program! Thank you for using :)" << std::endl;
    
    return 0;   
}