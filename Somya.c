#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int A[N+1];
	
	for (int i = 0; i < N+1; ++i)
	 {
	 	A[i] = i;
	 }

	 int p = 2;

	 for (p = 2; p <= N*N ; ++p)
	  {
	  	if (A[p] != 0)
	  	{
	  		for (int i = p*2; i <= N; i+= p)
	  		{
	  			A[i] = 0;
	  		}
	  	}
	  }

	  int sum = 5;
	  int count = 0;

	  for (int j = 5; j <= N; j+=2)
	  {
	   	if ( (A[j] != 0 && A[j] == sum) || A[j] == -1)
	   	{
	   		count = count + 1;
	   	}

	   	if (A[j] != 0 || A[j] == -1)
	   	{
	   		sum = sum + j;
	   		 if ( A[sum] != 0)
	   		 {
	   		 	A[sum] = -1;
	   		 }
	   	}

	  }

	  printf("%d\n", count); 
	return 0;
}
