# 関数

## Code1

### HelloWorld関数
```cpp
void HelloWorld(int n){
    for(int i = 0; i < n; i++){
        std::cout<<"HelloWorld Function is active" << std::endl;
    }
}
```

### main関数
```cpp
int main(){
    HelloWorld(10);

    return 0;
}
```

## Output Code1
- 関数はmain関数の後で記述するとERRORを起こす。
- 関数は　型名　関数名(引数){処理内容;} で宣言される。
- 使用時は 関数名(引数); で使用できる。
- 引数を使用しない場合は引数の場所を空白にして宣言できる。

## Code2

```cpp
//  前宣言
void HelloWorld(int n);

//  main
int main(void){
    HelloWorld(10);

    return 0;
}

//  function
void HelloWorld(int n){
    for(int i = 0;i < n; i++){
        std::cout << "HelloWorld" << std::endl;
    }
}
```

## Output Code2

- Code1では関数をmainより前に記述できいないと言ったが、前宣言ができる。
- 前宣言は型名　変数名(引数); で記述可能。
- 処理はmainより上に記述する必要がある。

## Code4
```cpp
void Print(int x){
    std::cout << "int :" << x << std::endl;
}

void Print(double x){
    std::cout << "double :" << x << std::endl;
}

//  main
int main(){
    Print(10);
    Print(10.5);

    return 0;
}
```

## Output

- 引数に渡される値の型によって呼び出す関数を判断できる。
- これをオーバーライドと言う。
