#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <string>

using namespace std;

int main()
{
        // sort integer in maximum to minimum
        map<int, string, greater<int>> m;

        m[1] = "one";
        m[2] = "two";
        m[4] = "four";
        m[3] = "three";

        m[2] = "Two!";

        for(auto i = m.begin(); i != m.end(); ++i) {
                cout << "(" << i->first << ", " << i->second << ")" << endl;
        }

}
