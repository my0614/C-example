#include <stdio.h>

int main()
{

	int nData = 15;
	int *pnData = &nData;
	int* *ppnData = &pnData;
	printf("%d\n",nData);
	printf("%d\n",**ppnData);

return 0;
}
