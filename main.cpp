#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i<n;i++) {
        cin >> a[i];
    }
    for (int i = 1; i<n;i++) {
        if ((a[i]*a[i-1] > 0) or ((a[i]==0)&&(a[i-1]==0))){
            cout << a[i-1] << " " << a[i];
            break;
        }
    }
    return 0;
}