#include <iostream>
#include <map>
#include <ostream>
#include <string>

using namespace std;

int main()
{
        map<int, string> m;

        m[1] = "one";
        m[2] = "two";
        m[4] = "four";
        m[3] = "three";

        m[2] = "Two!";

        for(auto i = m.begin(); i != m.end(); ++i) {
                cout << "{" << i->first << ", " << i->second << "}" << endl;
        }

}
