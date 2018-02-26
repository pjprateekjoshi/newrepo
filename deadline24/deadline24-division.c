#include<stdio.h>

char p[][];
int m,n;

int main()
{
	int t;
	scanf("%d",&t);
	for(;t>0;t--){
		count=0;
		scanf("%d %d",&m,&n);
		scanf("%d",&x);
		scanf("%d",&r);
		for(i=0;i<n;i++){
			scanf("%s", &p[i][m]);
		}
		goright(0,j);
		godown(i,0);
	}
}

void goright(int i, int j)
{
	if(p[i][j]==p[i][j+1] && p[i][j]=='A'){
		count+=1;
	}
	j++;
	godown(i,j);
	goright(i,j);
}

void godown(int i, int j)
{
	if(p[i][j]==p[i+1][j] && p[i][j]=='A'){
		count+=1;
	}
	i++;
	godown(i,j);
	goright(i,j);
}
