#include <bits/stdc++.h>

using namespace std;

/*
    -*- coding: utf-8 -*-
    @Author  : wheat
    @Time    : 2023/01/31 15:26
*/



int main() {

    const int N = 1010;

    int n, m;
    int v[N], w[N];
    int f[N];

    int main() {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];

        for (int i = 1; i <= n; i++)
            for (int j = v[i]; j <= m; j++)
                f[j] = max(f[j], f[j - v[i]] + w[i]);

        cout << f[m] << endl;

        return 0;
    }
}
