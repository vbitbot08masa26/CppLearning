# マップ
## mapの宣言

### Cod( 1 )

```cpp
#include <map>

int main() {
    //  mapの宣言1
    std::map<std::string, int> a = {
        {"Bob", 20},
        {"Alice", 18}
    };
    
    return 0;
}
```

### Memo1

- 設定したキーでソートしている。
- 配列では何番目と指定していたが、mapはキーで指定する。

### Code( 2 )

```cpp
#include <unordered_map>


int main() {
    //  mapの宣言2
    std::unordered_map<std::string, int> b = {
        {"Bob", 20},
        {"Alice", 18}
    };
    
    return 0;
}
```

### Memo2

- キーから計算されるハッシュでソートされている。
- キーの順を保持したい場合を除き、パフォーマンスは優れている...らしい。

## 参照方法

### Code

```cpp
#include <iostream>

//  指定したキーの要素を取り出し
std::cout << a["Alice"] << std::endl;
```

### Output

```
18
```

### Memo

- 配列の要素位置を渡す位置にキーを渡すと参照できる。
- 渡すものはキーの位置で使用している型でなければならない。

## 要素の追加と削除

### Code

```cpp
//  要素の追加
a.insert({"Eve", 19});
//  指定したキーのある要素の削除
a.erase("Bob");

//  削除されたのかを確認
std::cout << a["Bob"] << std::endl;
```

### Output

```
0
```

### Memo

- 要素がないため0と出力される。
