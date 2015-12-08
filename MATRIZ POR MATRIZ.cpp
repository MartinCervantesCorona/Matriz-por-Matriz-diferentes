#include<stdio.h>
int main()
{
	int CA,FA,FB,CB,i,j,k,a[10][10],b[10][10],c[10][10];
	printf("Cuantas filas tendra la matriz A ");
	scanf("%d", &FA);
	printf("\nCuantas columnas tendra la matriz A ");
	scanf("%d", &CA);
	printf("\nCuantas filas tiene la matriz B ");
	scanf("%d", &FB);
	printf("\nCuantas columnas tendra la matriz B ");
	scanf("%d", &CB);
	if(CA!=FB)
	{
		printf("\n\nEL NUMERO DE COLUMNAS DE LA MATRIZ  A ES DIFERENTE AL NUMERO DE FILAS DE LA MATRIZ B\n");
		printf("\nEL PRODUCTO MATRICIAL NO ES POSIBLE DE REALIZAR\n\n");
		return 0;
	}
	for (i=1;i<=FA;i++)
	{
		for (j=1;j<=CA;j++)
		{
    	printf("\nDame el elemento A(%i,%i)(fila/columna): ", i,j);
    	scanf("%d",&a[i][j]);
   		} 
	}
	for (i=1;i<=FB;i++)
 	{
   		for (j=1;j<=CB;j++)
     	{
     	 	printf("\nDame el elemento B(%i,%i)(fila/columna): ", i,j);
     		scanf("%d",&b[i][j]);
     	} 
	}
	for (i=1;i<=FA;i++)
	{
  		for (j=1;j<=CB;j++)
  		{
    		c[i][j]=0;
      		for(k=0;k<=CA;k++);
      		{
      			c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	printf("\n\nLa matriz resultante de la multiplicacion es: \n");
	for (i=1;i<=CB;i++)
	{
  		printf("\n");
  		for(j=1;j<=FA;j++)
  		{
    		printf(" %d, ",c[i][j]);
		}
	}
}

