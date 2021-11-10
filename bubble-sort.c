#include <stdio.h>

void bubble_sort(int x[],int n)
{int i,gasit=1,aux;
while(gasit==1)
{
gasit=0;
for(i=0;i<n-1;i++)
	if(x[i]>x[i+1])
	{
		gasit=0;
		aux=x[i+1];
		x[i+1]=x[i];
		x[i]=aux;
	}

}
int main()
{
	int x[100],n,i;
	scanf("%d",&n)
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	bubble_sort(x,n);
	



}
