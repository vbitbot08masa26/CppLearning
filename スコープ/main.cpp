#include <iostream>
//
namespace A {   //  namespace Aの宣言
    int count = 10;
    
    int GetCount(){
        return count;
    }
}

namespace B {   //  namespace Bの宣言
    int count = 20;
}

namespace C {
    int cCount = 30;
    namespace D {
        int dCount = 40;
        
        int GetCount(){
            return  cCount;
        }
    }
}

int main() {
    //  Aのcountを表示
    std::cout << A::GetCount() << std::endl;
    //  Bのcountを表示
    std::cout << B::count << std::endl;
    //  Dの親のcountを表示
    std::cout << C::D::GetCount() << std::endl;
    
    return 0;
}
