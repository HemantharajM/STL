#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
        vector<string> v;

        v.push_back("cat");
        v.push_back("antelope");
        v.push_back("puppy");
        v.push_back("bear");
        

        // sort the eleement in reverse order
        sort(v.begin(), v.end(), greater<string>());

        for(auto i = v.begin(); i != v.end(); ++i) {
                cout << *i << endl;
        }

}
