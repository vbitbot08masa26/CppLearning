#include <iostream>
#include <string>
#include <map>
#include <unordered_map>


int main() {
    //  mapの宣言1
    std::map<std::string, int> a = {
        {"Bob", 20},
        {"Alice", 18}
    };
    
    //  mapの宣言2
    std::unordered_map<std::string, int> b = {
        {"Bob", 20},
        {"Alice", 18}
    };
    
    //  指定したキーの要素を取り出し
    std::cout << a["Alice"] << std::endl;
    
    //  要素の追加
    a.insert({"Eve", 19});
    //  指定したキーのある要素の削除
    a.erase("Bob");
    
    //  削除されたのかを確認
    std::cout << a["Bob"] << std::endl;
    
    return 0;
}
