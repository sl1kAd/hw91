#include<iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> one;

    int num, bum;

    cout << "Enter count:" << endl;

    cout << "==> ";

    cin >> num;

    while (num != 0)
    {
        one.push(num % 2);

        num = num / 2;


    }

    while (one.size() != 0)
    {
        bum = one.top();

        one.pop();

        cout << bum;
    }

    return 0;
}