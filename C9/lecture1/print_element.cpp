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
        

        for(size_t i = 0; i < v.size(); ++i) {
                cout << v[i] << endl;
        } 
        
        v.clear();
}
