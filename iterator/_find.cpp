#include "_find.h"

#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    vector<int>::iterator it = __::find(vec.begin(), vec.end(), 5);
    if (it == vec.end()) {
        cout << "5 not found" << endl;
    }
    else{
        cout << "5 found" << endl;
    }

}