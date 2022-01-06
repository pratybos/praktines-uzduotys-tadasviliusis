#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 1};
    int a= v1.size();
    for (int i = 0; i < a; i++) {
        v1.insert(v1.end(), v1[i]);


    }
    for (int i = 0; i < v1.size(); i++) {
        cout << "Nums: " << v1[i] << endl;
    }

    return 0;
}
