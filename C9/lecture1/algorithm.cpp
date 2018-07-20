#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

int main()
{
        vector<int> v;

        v.push_back(10);
        v.push_back(4);
        v.push_back(24);
        v.push_back(1);
        v.push_back(17);

        sort(v.begin(), v.end());

        for(auto i = v.begin(); i != v.end(); ++i) {
                cout << *i << endl;
        }

}
