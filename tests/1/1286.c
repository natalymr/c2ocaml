int ge,s,w;//ge??????????? 
void fen(int h,int a);//fen???s?????????? 
int main()
{
    int n=0,k=0;//n????????   k?????????  s????????????? 
    cin>>n;
    for(k=1;k<=n;k++)
    {
       cin>>s;
       ge=0;
       fen(s,2);
       cout<<ge<<endl;                 
    }
return 0;    
}
void fen(int h,int a)
{
    for(int i=2;i<=h;i++)
    {
        if((h%i==0)&&(i>=a))
        {
            if(h/i!=1)
            {fen(h/i,i);}
            else
            {ge++;}           
        }
    }     
}
