#include <stddef.h>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

int main()
{
        vector<int> v;

        v.push_back(11);
        v.push_back(22);
        v.push_back(33);

        for(vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
                cout << *i << endl;
        } 

}
