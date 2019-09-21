. int a[6]={10,20,30,10,30,20};
    int i,j,count=0;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    }printf("%d",count);
