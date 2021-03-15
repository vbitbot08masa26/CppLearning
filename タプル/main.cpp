#include <iostream>
#include <tuple>
#include <string>

int main() {
    std::tuple<std::string, int, std::string> a {"Bob", 20, "USA"};
    std::tuple<std::string, int, std::string> b = std::make_tuple( "Bob", 20, "USA");
    std::cout << std::get<0>(a) << std::endl;
    std::cout << std::get<1>(a) << std::endl;
    std::cout << std::get<2>(a) << std::endl;
    
    return 0;
}
