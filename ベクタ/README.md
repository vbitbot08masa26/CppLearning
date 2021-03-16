# ベクタ

## ベクタの宣言方法

### Code

```cpp
#include <vector>

int main() {
    //  vectorの宣言
    std::vector<int> a = { 0, 1, 2, 3, 4};
    
    return 0;
}
```

### Memo

- std::vector<型名> 変数名　= {初期化要素}; で宣言する。

## 要素の取り出し

### Code

```cpp
//  vectorの出力
std::cout << a[2] << std::endl;
```

### Output

```
2
```

### Memo

- 要素の取り出しは配列と同様に取り出せる。

## 要素数

### Code

```cpp
//  サイズの表示
std::cout << a.size() << std::endl;

//  末尾に要素の追加
a.emplace_back(5);
//  サイズの表示
std::cout << a.size() << std::endl;
```

### Output

```
5
6
```
### Memo

- サイズの取得はa.size()で可能。
- サイズの追加はa.emplace_back(n);で可能。
