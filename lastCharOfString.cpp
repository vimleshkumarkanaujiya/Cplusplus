#include <iostream>
#include <string>

int main() {
    std::string str = "1729";
    
    if (!str.empty()) {
        char lastChar = str[str.length() - 1];
        std::cout << "Last character: " << lastChar << std::endl;
    }

    return 0;
}
