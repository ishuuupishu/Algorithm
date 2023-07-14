#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    if (sentence.substr(sentence.length() - 3) == "eh?") {
        std::cout << "Canadian!\n";
    } else {
        std::cout << "Imposter!\n";
    }
    return 0;
}

