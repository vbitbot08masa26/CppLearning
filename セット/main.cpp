#include <iostream>
#include <string>
#include <set>
#include <unordered_set>

int main() {
    //  集合aの宣言
    std::set<std::string> a = {
        "Bob"
        "Shelly"
    };
    
    //  集合bの宣言
    std::unordered_set<std::string> b = {
        "Bob",
        "Alice"
    };
    
    //  要素の追加と削除
    a.insert("Alice");
    a.erase("Shelly");
    
    return 0;
}
