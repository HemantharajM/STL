#include <iostream>
#include <memory>
#include <ostream>
#include <utility>

using namespace std;

int main()
{
        auto sp = make_shared<int>(1729);
        
        
        cout << *sp << endl;

}
