#include <iostream>
#include <map>
#include <ostream>
#include <string>

using namespace std;

void foo(map<int, string> & m)
{
        map<int, string>::const_iterator i = m.find(3);

        if(i == m.end()) {
                cout <<"not fount " << endl;
        } else {
                cout << "(" << i->first << "," << i->second << ")" << endl;
        }

}

int main()
{
        map<int, string> m;

        m[1] = "one";
        m[3] = "three";
        m[2] = "two";
        m[4] = "four";
        
        //because its binary tree lookup had to check it point to null or
        //actual key
        foo(m);

}
