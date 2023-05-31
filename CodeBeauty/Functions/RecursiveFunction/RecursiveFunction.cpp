
#include <iostream>
using namespace std;


int recursiveSum(int m, int n) {
    // base case
    if (m == n) {
        return m;
    }
    return m + recursiveSum(m + 1, n);
}

int main()
{
    // sum number between n and m
    int m = 1, n = 100;

    // iterative method
    /*int sum = 0;
    if (n > m) {
        for (int i = m; i <= n; i++) {
            sum += i;
        }
    }
    cout << "Sum = " << sum << endl;*/

    // using recursion
    cout << "Sum = " << recursiveSum(m, n);



    system("pause>0");
    return 0;


}
