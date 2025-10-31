#include <iostream>
#include <string>

int main()
{
    // // This is a comment
    // /* This is a
    //  Multiline comment */

    // std::cout << "Hello World!\n";

    // int a = 2;
    // a = 1;
    // std::cout << a << std::endl;
    // double b{5.46578};
    // std::cout << b << std::endl;
    // int c{b};
    // std::cout << c << std::endl;

    // const double d = 2;
    // std::cout << d << std::endl;

    // // const int e = 5;
    // // e = 4;

    // std::string msg{"Hello"};
    // std:: cout << msg << std::endl;

    // double e = 10.5;
    // int f = 3;
    // std::cout << e * f << std::endl;

    // std::cout << 2.6 / 3 << std::endl;
    // std::cout << 10 / 3 << std::endl;

    // std::string s("Birmingham");
    // char g = s[3];
    // std::cout << g << std::endl;

    char in_char{'x'};
    std::string out_str{""};
    // Take each letter from user input and in each case:
    while (std::cin >> in_char) {
        // - Convert to upper case
        if (std::isalpha(in_char)) {
            out_str += std::toupper(in_char);
            continue;
        }
        // - Change numbers to words
        switch (in_char) {
            case '1':
                out_str += "ONE";
                break;
            case '2':
                out_str += "TWO";
                break;
            case '3':
                out_str += "THREE";
                break;
            case '4':
                out_str += "FOUR";
                break;
            case '5':
                out_str += "FIVE";
                break;
            case '6':
                out_str += "SIX";
                break;
            case '7':
                out_str += "SEVEN";
                break;
            case '8':
                out_str += "EIGHT";
                break;
            case '9':
                out_str += "NINE";
                break;
            case '0':
                out_str += "ZERO";
                break;
            default :
                // Do nothing
                break;
        }
        // - Ignore any other (non-alpha) characters
        // - In each case, add result to a string variable

    }
    // print out the new string
    std::cout << out_str << std::endl;
}
