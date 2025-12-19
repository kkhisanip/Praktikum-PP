#include <iostream>
using namespace std;

int main() {
    
    int i = 3;
    int a = 11;
    do
    {
        for (int j = 0; j < a; ++j) {
            if (j == 4) break;
            cout << i + j << " ";
        }
        cout << endl;
        i++;
    }while (i < 3);
    
    return 0;
}