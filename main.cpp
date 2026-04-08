#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long a, b, c, d, e, f;
    if (!(cin >> a >> b >> c >> d >> e >> f)) return 0;
    
    long long current_time = f * b * a + e * a + d;
    long long D = c * b * a;
    
    long long min_s = -1;
    long long max_v = min({a, b, c}) - 1;
    
    for (long long v = 0; v <= max_v; ++v) {
        long long target_time = v * b * a + v * a + v;
        long long s = target_time - current_time;
        if (s < 0) {
            s += D;
        }
        if (min_s == -1 || s < min_s) {
            min_s = s;
        }
    }
    
    cout << min_s << endl;
    
    return 0;
}
