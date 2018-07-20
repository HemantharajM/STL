#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

int main()
{
        int arr[5] = {55,11,39,22,3};

        int *p_begin = &arr[0];
        int *p_end = &arr[0] + 5;


        sort(p_begin, p_end);

        for(int *p = p_begin ; p != p_end; ++p) {
                cout << *p << endl;
        }

}

