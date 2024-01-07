#include <stdio.h>
#include <stdlib.h>

void pri(int a,int b,int c,char matris[][3])

{
	system("cls");	
	
	char choo[]={'X','O','0'};
	int i,j;
	
	matris[a][b]=choo[c];
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				printf(" %c  ",matris[i][j]);
			}
			printf("\n\n");
	}
}

int main() {	
char matris[3][3]={{'0','0','0'},{'0','0','0'},{'0','0','0'}};
int a,b,c,pl=1;
pri(0,0,2,matris);
while(1){
	if(1)
	{
	printf("%d.Oyunucu: \n",pl);
	scanf("%d %d",&a,&b);
	printf("X or O: ");
	scanf("%d",&c);	
    pri(a,b,c,matris);
    
    if(matris[0][0]==matris[1][1] && matris[1][1]==matris[2][2])
    {
    	printf("%d. oyuncu kazandi",pl);
    	break;
	}
    if(matris[0][1]==matris[1][1] && matris[1][1]==matris[2][1])
    {
    	printf("%d. oyuncu kazandi",pl);
    	break;
	}
    if(matris[0][2]==matris[1][1] && matris[1][1]==matris[2][0])
    {
    	printf("%d. oyuncu kazandi",pl);
    	break;
	}
    if(matris[1][2]==matris[1][1] && matris[1][1]==matris[1][0])
    {
    	printf("%d. oyuncu kazandi",pl);
    	break;
	}
    if(matris[0][0]==matris[0][1] && matris[0][1]==matris[0][2])
    {
    	printf("%d. oyuncu kazandi",pl);
    	break;
	}
    if(matris[0][0]==matris[1][0] && matris[1][0]==matris[2][0])
    {
    	printf("%d. oyuncu kazandi",pl);
    	break;
	}
    if(matris[0][2]==matris[2][1] && matris[2][1]==matris[2][2])
    {
    	printf("%d. oyuncu kazandi",pl);
    	break;
	}
    if(matris[0][2]==matris[1][2] && matris[1][2]==matris[2][2])
    {
    	printf("%d. oyuncu kazandi",pl);
    	break;
	}

    if(pl==1)
    {
    	pl=2;
	}
	else
	{
		pl=1;
	}
	}
}



	return 0;
}
