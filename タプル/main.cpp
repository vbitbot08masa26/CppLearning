#include <iostream>
#include <tuple>
#include <string>

int main() {
    //  tuple 宣言方法1
    std::tuple<std::string, int, std::string> a {"Bob", 20, "USA"};
    //  tuple 宣言方法2
    std::tuple<std::string, int, std::string> b = std::make_tuple( "Bob", 20, "USA");
    
    //  要素の取り出し
    std::cout << std::get<0>(a) << std::endl;
    std::cout << std::get<1>(a) << std::endl;
    std::cout << std::get<2>(a) << std::endl;
    
    std::string name;
    int age;
    std::string country;
    
    //  tupleの要素を他の変数に代入
    std::tie(name, age, country) = a;
    
    //  代入結果のOutput
    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << country << std::endl;
    
    return 0;
}
