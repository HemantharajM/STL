#include <iostream>
#include <memory>
#include <ostream>
#include <utility>

using namespace std;

int main()
{
        unique_ptr<int> up(new int(1729));

        cout << *up << endl;
        
        //move content from up to up2 and delete up pointer
        unique_ptr<int> up2 = move(up);

        if(up) {
                cout << "uh oh" << endl;
        } else {
                cout << "yay" << endl;
        }

        cout << *up2 << endl;

}
