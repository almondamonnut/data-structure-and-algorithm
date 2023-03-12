// map in c++ standard template library (STL)
// each element has a key value & map value
// 2 values cannot have the same key

#include <bits/stdc++.h>
using namespace std;

int main() {
    // struture: map<type1, type2> name_of_map;
    map<string, int> map_a;

    // Insert values into the map;
    map_a["one"] = 1;
    map_a["two"] = 2;
    map_a["three"] = 3;

    // get an iterator pointing to the first element in the map
    map<string, int>::iterator it = map_a.begin();

    while (it != map_a.end())
    {
        cout << "key: " << it->first << ", value: " << it->second << endl;
        ++it;
    }
    // In case of map,we need to use arrow operator to point to
    // first and second, where first is the key and second is the value
}
