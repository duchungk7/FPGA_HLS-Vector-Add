#include "VectorAdd.h"
#include <iostream>

using namespace std;
int main()
{
	data_t A[N] = {-4, -3, 0, 1, 2};
	data_t c = 2;
	data_t B[N] = {0};
	data_t RefB[N] = {1, 2, 5, 6, 7};
	unsigned int i = 0;
	unsigned int errcnt = 0;
	
	VectorAdd(A, c, B);
	cout << "Test Pass !" << endl;
	
	return 0;
}
