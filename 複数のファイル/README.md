# 複数ファイルの使い方

## 使用方法

### Code [hello.hpp]

```hpp
#ifndef hello_hpp
#define hello_hpp
//  プロトタイプ宣言
void hello();

#endif /* hello_hpp */
```

### Memo
- #ifndefと#defineと#endifの行でインクルードガードができる。
- インクルードガードがあることで、ソースが同じヘッダを複数回取り込む事がなくなり、 変数や関数の定義が重複することを防げる。
- ヘッダーの中では関数のプロトタイプ宣言を行う。

### Code [hello.cpp]

```cpp
#include <iostream>

void hello(){
    std::cout << "hello" << std::endl;
}
```

### Memo

- ここでは関数の定義を行う。

### Code [main.cpp]
```cpp
#include "hello.hpp"    //  自作ヘッダーの読み込み

int main() {
    //  関数呼び出し
    hello();
    
    return 0;
}
```

### Memo
- ヘッダーを読み込んで関数を使用できるようにする。
