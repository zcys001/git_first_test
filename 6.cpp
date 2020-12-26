#include <iostream>
using namespace std;

int main() {
#if 1
	int psum = 0, sump = 0;
	for (int i = 1; i <= 100; i++) {
		psum += i * i;
		sump += i;
	}
	sump *= sump;
	cout << sump - psum  << endl;
	
#endif

    return 0;
}
