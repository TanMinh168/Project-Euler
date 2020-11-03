#include <iostream>
using namespace std;
int main() {
	int cnt = 0;
	long long tmp;
	int ans, i;
	int maximum = -1;
	for (i = 1; i < 1000000 ; i++) {
		tmp = i;
		cnt = 0;
		while (tmp > 1) {
			if (tmp % 2 == 0) {
                		tmp /= 2;
                		cnt++;
			} else {
                		tmp = ((3 * tmp) + 1) >> 1;
                		cnt += 2;
			}
		}
		if (cnt > maximum) {
            		ans = i;
            		maximum = cnt;
		}
	}
	cout << ans << " " << maximum;
}
