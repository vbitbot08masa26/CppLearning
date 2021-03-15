#include<iostream>
#include<string>

int main(){
    std::string s = "HelloWorld";

    //  output
    std::cout << s << std::endl;
    std::cout << s[1] << std::endl;
    std::cout << s[5] << std::endl;
    std::cout << s.size() << std::endl;

    return 0;
}