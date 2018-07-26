#include <iostream>
#include <memory>
#include <ostream>
#include <utility>

using namespace std;

int main()
{
        shared_ptr<int> sp(new int(129));

        //shared ptr sp and sp2 point to same 129
        shared_ptr<int> sp2(sp);

        cout << *sp << endl;
        cout << *sp2 << endl;

}
