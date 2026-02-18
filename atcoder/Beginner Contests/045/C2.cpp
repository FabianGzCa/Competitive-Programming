// Esta es una solución de prueba

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string s;
ll ans = 0;

void dfs(int i, ll cur, ll sum) {
    if (i == (int)s.size()) {
        ans += sum + cur;   // cerrar el último bloque
        return;
    }
    int d = s[i] - '0';

    // Opción 1: concatenar (no poner '+')
    dfs(i + 1, cur * 10 + d, sum);

    // Opción 2: poner '+': cierro cur y comienzo nuevo bloque con d
    dfs(i + 1, d, sum + cur);
}

int main() {
    cin >> s;
    // arrancamos con el primer dígito como bloque actual
    dfs(1, s[0] - '0', 0);
    cout << ans << "\n";
    return 0;
}
