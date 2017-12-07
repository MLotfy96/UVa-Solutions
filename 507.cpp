#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n - 1; i++)
            scanf("%d", &a[i]);
        int l = 0, mx = 0, sum = 0, ansl, ansr;
        for (int i = 0; i < n - 1; i++)
        {
            sum += a[i];
            if (sum > mx || (sum == mx && ansr - ansl < i + 1 - l))
                mx = sum, ansl = l, ansr = i + 1;
            if (sum < 0)
                sum = 0, l = i + 1;
        }
        if (mx > 0)
            printf("The nicest part of route %d is between stops %d and %d\n", tcc, ansl + 1, ansr + 1);
        else
            printf("Route %d has no nice parts\n", tcc);
    }
    return 0;
}
