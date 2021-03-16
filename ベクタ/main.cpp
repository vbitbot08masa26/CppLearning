#include <iostream>
#include <vector>

int main() {
    //  vectorの宣言
    std::vector<int> a = { 0, 1, 2, 3, 4};
    
    //  vectorの出力
    std::cout << a[2] << std::endl;
    //  サイズの表示
    std::cout << a.size() << std::endl;
    
    //  末尾に要素の追加
    a.emplace_back(5);
    //  サイズの表示
    std::cout << a.size() << std::endl;
    
    return 0;
}
