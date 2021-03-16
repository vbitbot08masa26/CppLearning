#include <iostream>
#include <string>
#include <map>
#include <unordered_map>


int main() {
    std::map<std::string, int> a = {
        {"Bob", 20},
        {"Alice", 18}
    };
    
    std::unordered_map<std::string, int> b = {
        {"Bob", 20},
        {"Alice", 18}
    };
    
    std::cout << a["Alice"] << std::endl;
    
    a.insert({"Eve", 19});
    a.erase("Bob");
    
    std::cout << a["Bob"] << std::endl;
    
    return 0;
}
