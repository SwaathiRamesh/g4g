#include<stdio.h>
#define ARR_SIZE 12
int A[ARR_SIZE]={ 5, 1, 5, 5,3, 5,90,88, 5, 5, 5,34};
int main()
{
	int cte=A[0], vote=1,i=1;
	for(;i<ARR_SIZE;i++)
	{	
		if(!vote) cte=A[i];
//		printf("\n For iteration %d, candidate is %d and vote is %d", i, cte, vote);
		if(A[i]==cte) { cte = A[i]; vote++; }
		else
			vote--;

	}
	printf("%d\n", cte);

	
}
