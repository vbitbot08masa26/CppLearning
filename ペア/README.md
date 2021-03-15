# ペア

## ペアの使い方

### Code1

```cpp
#include <iostream>
#include <utility>
#include <string>

int main() {
    //  pairの宣言
    std::pair<std::string, int> a {"Bpb", 20};
    
    //  pair の出力
    std::cout << std::get<0>(a) << std::endl;
    std::cout << std::get<1>(a) << std::endl;
    
    std::string name;
    int age;
    
    //  pair をか各変数に代入
    std::tie(name, age) = a;
    
    //  代入先の出力
    std::cout << name << std::endl;
    std::cout << age << std::endl;
    
    return 0;
}
```

### Output

```
Bob
20
Bob
20
```

### Memo

- ヘッダーが違うだけで、タプルと使用方法は同じである。
- 変数は2つまで格納可能。
