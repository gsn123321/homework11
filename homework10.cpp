#include <iostream>

int myStrcmp(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        ++i;
    }

    return str1[i] - str2[i];
}

int main()
{
    //char str1[100];
    //char str2[100];

    //std::cout << "Enter first string: ";
    //std::cin >> str1;

    //std::cout << "Enter second string: ";
    //std::cin >> str2;

    //int result = myStrcmp(str1, str2);

    //if (result == 0) {
    //    std::cout << '=';
    //}
    //else if (result < 0) {
    //    std::cout << '<';
    //}
    //else {
    //    std::cout << '>';
    //}

    //2

    char str[100];
    std::cin >> str;

    int size = strlen(str);
    bool palindrome = true;

    for (int i = 0; i < size / 2; ++i) {
        if (str[i] != str[size - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome) {
        std::cout << "Palindrome";
    }
    else {
        std::cout << "Not palindrome";
    }


    //3


    char str[100];
    std::cin.getline(str, 100);

    int count = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            ++count;
        }
    }

    std::cout << "Count of words: " << count;
}

