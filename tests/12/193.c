/*  ??2?15???????????????????????????????????????????? 
????1 4 3 2 9 7 18 22???????3???2?1????4?2????18?9????
 
???? 
??????????????????????2?15????????100??????????????0??????????????????2?15??????????????????????-1,???????????????????
 
???? 
????????????????????????????????????
 
???? 
1 4 3 2 9 7 18 22 0
2 4 8 10 0
7 5 11 13 1 3 0
-1
 
???? 
3
2
0            */
 
int main()
{
	int num[100][150],i,j,g,h[100],k,m;
	for(j=0;;j++)
	{
		for(i=0;;i++)
		{
			scanf("%d",&num[j][i]);
			if(num[j][0]==-1)
				break;
			if(num[j][i]==0)
				break;
		}
		if(num[j][0]==-1)
			break;
		h[j]=i;
	}
	g=j;
	int count[100]={0};
	for(j=0;j<g;j++)
	{
		for(i=0;i<h[j];i++)
		{
			k=i;
			for(m=k;m<h[j];m++)
			{
				if(((num[j][m]%num[j][k]==0)&&(num[j][m]/num[j][k]==2))||((num[j][k]/num[j][m]==2)&&(num[j][k]%num[j][m]==0)))
					count[j]++;
			}
		}
		
				printf("%d\n",count[j]);			
	}
	return 1;
}

