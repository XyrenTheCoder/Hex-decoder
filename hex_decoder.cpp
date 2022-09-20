#include <iostream>
#include <fstream>

int main()
{
    std::cout << "input hex value: ";
    std::string hex;
    std::cin >> hex;
    int len = hex.length();
    std::string o;
    for(int i=0; i< len; i+=2)
    {
        std::string byte = hex.substr(i,2);
        char chr = (char) (int)strtol(byte.c_str(), 0, 16);
        o.push_back(chr);
    }
    //std::cout << "output:" << std::endl;
    //std::cout << o;
    std::ofstream file("output.txt");
    file << o;
    file.close();
    std::cout << "Convert success! Read output.txt for actual output." << std::endl;
    return 0;
}
