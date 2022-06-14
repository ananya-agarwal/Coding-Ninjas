#include <iostream>
using namespace std;
int main()
{
    int n,i=1,x=1;
    cin >> n;
    while (i <= n)
    {
        int k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k++;
        }
        int j = 0;
        while (j != x)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
        x+=2;
    }
}
