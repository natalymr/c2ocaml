int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12];
	int i,w;
	scanf("%d",&w);
    
		b[0]=13;
		b[1]=a[0]+13;
		b[2]=a[0]+a[1]+13;
		b[3]=a[0]+a[1]+a[2]+13;
		b[4]=a[0]+a[1]+a[2]+a[3]+13;
		b[5]=a[0]+a[1]+a[2]+a[3]+a[4]+13;
        b[6]=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+13;
		b[7]=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+13;
		b[8]=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+13;
		b[9]=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+13;
		b[10]=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+13;
		b[11]=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10]+13;

	for(i=0;i<12;i++)
	{
		if((b[i]-(8-w))%7==5)
		printf("%d\n",(i+1));
	}

	return 0;
}