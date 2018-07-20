#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>
#include <stddef.h>
#include <vector>

using namespace std;

int main()
{
        vector<int> v;

        v.push_back(11);
        v.push_back(22);
        v.push_back(33);
        v.push_back(44);
        v.push_back(55);

        for(auto i = v.begin(); i != v.end(); ++i) {
                cout << *i << endl;
        }
        
        cout << endl;
        cout << "After erase odd number\n";
        cout << endl;
        //remove move linear in array to split array into element need and
        //element don't need give location separate
        
        v.erase(remove_if(v.begin(), v.end(), [] (int e) { return e % 2 == 1; }), v.end());

        for(auto i = v.begin(); i != v.end(); ++i) {
                cout << *i << endl;
        }

}
