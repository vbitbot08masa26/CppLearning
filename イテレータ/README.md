# イテレータ

## 使用方法

### Code

```cpp
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
```

### Memo

- 変数名.begin()で開始地点を格納する。
- ++格納した変数で位置を進めることができる。
- 参照するときは*変数名で可能。
- イテレータはarray、vector、map、setなどのコンテナライブラリが使用可能。
