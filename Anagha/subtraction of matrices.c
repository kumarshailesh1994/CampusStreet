 int i,j;
    int a1[3][3],a2[3][3];
    printf("input the elts for a1 ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("input the elts for a2 ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a1[i][j]-a2[i][j]);
        }printf("\n");
    }
