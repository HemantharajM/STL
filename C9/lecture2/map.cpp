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
        m[3] = "three";
        m[4] = "four";

        cout << m[2] << endl;

}
