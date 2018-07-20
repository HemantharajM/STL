#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

int main()
{
        vector<int> v;

        v.push_back(1);
        v.push_back(20);

        cout << v.size() << endl;

        v.clear();
}
