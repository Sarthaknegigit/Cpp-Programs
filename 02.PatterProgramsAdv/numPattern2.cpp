// 1
// 21
// 321
// 4321
// 54321
#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        k=i;
        for(int j=1; j<=i; j++){
            cout<<k;
            k--;
            
        }
        cout<<endl;
    }
}