// Odd Even File Handling Program ❤
#include<stdio.h>
void main()
{
    FILE *fp1,*fp2,*fp;
    int n,i,p;
    fp1=fopen("Odd.txt","w");
    fp2=fopen("Even.txt","w");
    fp=fopen("Data.txt","w");

    printf("Enter Elements:\t");
    for(i=0; i<10; i++)
    {
        scanf("%d",&n);
        putw(n,fp);
    }
    fclose(fp);

    fp=fopen("Data.txt","r");
    while((p=getw(fp))!=EOF)
    {
        if(p % 2 == 0)
        putw(p,fp2);

        else
        putw(p,fp1);
    }
    fclose(fp1);
    fclose(fp2);

    printf("\n Odd File Data:");
    fp1=fopen("Odd.txt","r");

    while((p=getw(fp1))!=EOF)
    printf("%4d",p);
    fclose(fp1);

    printf("\n Even File Data:");
    fp2=fopen("Even.txt","r");
    
    while((p=getw(fp2))!=EOF)
    printf("%4d",p);
    fclose(fp2);
}