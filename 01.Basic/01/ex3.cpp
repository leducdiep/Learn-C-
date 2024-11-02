#include <iostream>

namespace greet {
    void sayGoodMorning(){
        std::cout << "Good morning!"<<std::endl;
    }
}

int main()
{
    greet::sayGoodMorning();

    using namespace greet;
    sayGoodMorning();
    return 0;
}