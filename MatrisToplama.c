#include<stdio.h>
#include<conio.h>

int main(){
	
	int satir,sutun,i,j;

	printf("satir sayisi: ");
	scanf("%d",&satir);
	
	printf("sutun sayisi: ");
	scanf("%d",&sutun);
	
	int matris1[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n [%d][%d]==> ",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
	}
	
	printf("\n");
	printf("Birinci Matris\n");
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf(" %d ",matris1[i][j]);			
		}
		
		printf("\n");
	}
	
	printf("\n");
	
	
	
	int satir2,sutun2,k,l;
	
	printf("2. satir sayisi: ");
	scanf("%d",&satir2);
	
	printf("2. sutun sayisi: ");
	scanf("%d",&sutun2);
	
	int matris2[satir2][sutun2];
	
	for(k=0;k<satir2;k++)
	{
		for(l=0;l<sutun2;l++)
		{
			printf("\n [%d][%d]==> ",k+1,l+1);
			scanf("%d",&matris2[k][l]);
		}
	}
	
	printf("\n");
	printf("Ýkinci Matris\n");
	
	for(k=0;k<satir2;k++)
	{
		for(l=0;l<sutun2;l++)
		{	
		printf(" %d ",matris2[k][l]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	if(satir!=satir2 && sutun!=sutun2)
	{
		printf("iki matrisin boyutu esit olmalidir!\n");
	}
	
	else
	{
	printf("\nMatrislerin Topami\n");
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf(" %d ",matris1[i][j] +matris2[i][j]);
			
		}
		printf("\n");
	}
    }

	
	

	
	
	
	
	
	
	
	getch();
	return 0;
}
