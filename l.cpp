#include <iostream>

int main() {
    string hex = "";


    int len = hex.length();
    std::string newString;
    for(int i=0; i< len; i+=2) {
        std::string byte = hex.substr(i,2);
        char chr = (char) (int)strtol(byte.c_str(), null, 16);
        newString.push_back(chr);
    }
}
