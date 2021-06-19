#include <iostream>
#include <string>

using namespace std;

void func(string str, int k) {

    if (k > 0) for (const auto& ch1 : str) {
        if (k > 1) for (const auto& ch2 : str) {
            if (k > 2) for (const auto& ch3 : str) {
                if (k > 3) for (const auto& ch4 : str) {
                    cout << ch1 << ch2 << ch3 << ch4 << endl;
                }
                else cout << ch1 << ch2 << ch3 << endl;
            }
            else cout << ch1 << ch2 << endl;
        }
        else cout << ch1 << endl;
    }
    cout << endl;
}

int main() {
    string str; 
    cin >> str;
    int k;
    cin >> k;

    func(str,k);

    return 0;
}