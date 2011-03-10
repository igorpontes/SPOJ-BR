#include <iostream>

using namespace std;

int main() {
    int n;
    //cin >> n;
    scanf("%i", &n);
    while (n != 0) {
        if (n >= 101) {
            //cout << "f91(" << n << ") = " << n - 10 << "\n";
            printf("f91(%i) = %i\n",n,n-10);
        } else {
            //cout << "f91(" << n << ") = 91\n";
            printf("f91(%i) = 91\n",n);
        }
        //cin >> n;
        scanf("%i", &n);
    }
    return 0;
}
