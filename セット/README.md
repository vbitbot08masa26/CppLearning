# セット

## 宣言方法

### Code1

```cpp
#include <set>

int main() {
    //  集合aの宣言
    std::set<std::string> a = {
        "Bob"
        "Shelly"
    };
    
    return 0;
}
```

### Code2

```cpp
#include <unordered_set>

int main() {
    //  集合bの宣言
    std::unordered_set<std::string> b = {
        "Bob",
        "Alice"
    };
    
    return 0;
}
```

### Memo

- mapと同様にキーでソートするものとハッシュでソートするものがある。

## 要素の追加と削除

### Code

```cpp
//  要素の追加と削除
a.insert("Alice");
a.erase("Shelly");
```
