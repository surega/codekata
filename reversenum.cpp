#include <iostream>
using namespace std;

int main()
{
    int n, reversenum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        reversenum = reversenum*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversenum;

    return 0;
}
