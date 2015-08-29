#include <vector>
#include <string>
using namespace std;

class LuckyXor {
public:
    bool isLucky(int number) {
	if (number == 0) {
		return false;
	}

	while(number> 0) {
		int rem = number % 10;
		if (rem != 4 && rem != 7) {
			return false;
		}
		number /= 10;
	}
	return true;
    }
	
    int construct(int a) {
	for (int b = a+1; b <= 100; b++) {
		int x = a ^ b;
		if (isLucky(x)) {
			return b;
		}	
	}
	return -1;
    }
};
