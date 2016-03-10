#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	int i;

	for (i = 0; i < 100; i++) {
		printf("%d\n", rand());
	}

	return 0;
}