#include <iostream>
#include <vector>

int main() {
    //  vectorの宣言
    std::vector<int> a { 0, 1, 2, 3, 4};
    //  イテレータの初期化
    auto it = a.begin();
    
    //  イテレータを使用して要素を出力
    std::cout << *it << std::endl;
    //  イテレータを一つ進める
    ++it;
    std::cout << *it << std::endl;
    
    return 0;
}
