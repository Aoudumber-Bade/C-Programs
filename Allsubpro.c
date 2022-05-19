// All Subjects Assignments In One Program

#include<stdio.h>
#include<math.h>
#define ESP 0.0001
#define F(x)x*x-25 
#define err 0.0010
#define f(x)(2*x)-3
#define MAX 6
float frac (float a)
{
    float f1;
    f1=a*a-3*a+2;
    return f1;
}
void main()
{
    
    float x0,x1,x2,f0,f1,f2,e;
    int a[2][2],b[2][2],c[2][2],i,j;
    int arry[2][2],determinant=0;
    int ar[10][10],rw,cl;
    float f=0,er,d;
    int row,col;
    int step=1;
    int chr;
    char ch;

    int choice;
    int x,y,z,peri_T,area_T,s;
    int len,brath,area_R,peri_R;
    int n1,n2,n3;
    int ln, r, res;
    int count,num;
    int rev=0,rem,onum;
    int sum,org_num;
    int next,limit;
    int nbr[5],n;
    int table[5][5];
    int arr[5],temp;
    n1=0;
    n2=1;
    sum=0;
    count=0;

    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int bs[100],itemm,loc,lb=0;
    int stack[MAX]={1,2,3,4,5};
    int top=4;
    int beg,end,nr,mid;
    int brr[]={23,2,22,12,11};
    int LA[]={1,3,5,7,8};
    int item=10,k=3;
    int stk[5]={1,2,3,4,5};
    int cr[5];
    int m;
    

    printf("\n***********************************************************\n");
    printf("\n ------------------All Subjects Assignments----------------\n");
    printf("\n***********************************************************");

    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n A - Numerical Computational Methods");
    printf("\n B - C - Programming - I");
    printf("\n C - Data Structure\n");
    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");
    
    printf("\n-----------------------------------------------------------\n");
    printf("\n Enter The Assignment Number Which You Want To perform:\t");
    scanf("%c",&ch);
    printf("\n-----------------------------------------------------------\n");

    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");

    switch(ch)
    {
        case 'A':

    printf("\n***********************************************************\n");
    printf("\n --------------------All NM Assignments--------------------\n");
    printf("\n***********************************************************");

    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n 1 - Program for Bisection method Equation");
    printf("\n 2 - False position mathod by vol of x0=2 & x1=7");
    printf("\n 3 - Arithematic Operations On Matrix");
    printf("\n 4 - Program to perform Newton Rapson Method");
    printf("\n 5 - Program to Find Determinant Of Matrix");
    printf("\n 6 - Program To print Transpose of Matrix\n");
    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");
    
    printf("\n-----------------------------------------------------------\n");
    printf("\n Enter The Assignment Number Which You Want To perform:\t");
    scanf("%d",&chr);
    printf("\n-----------------------------------------------------------\n");

    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");
    switch(chr)
    {
        case 1:
                    
    up:
    printf("Enter two initial Guesses:\t");
    scanf("%f%f",&x0,&x1);

    printf("\nEnter Tolerable Errors:\t");
    scanf("%f",&e);

    f0=F(x0);
    f1=F(x1);

    if(f0*f1>0.0)
    {
        printf("\nIncorrect Initial Guesses");
        goto up;
    }

    printf("\nstep\t\t x0\t\t x1\t\t x2\t\t f(x2\n");
    do
    {
        x2=(x0+x1)/2;
        f2=F(x2);
        printf("%d\t\t %f\t %f\t %f\t %f\n",step,x0,x1,x2,f2);

        if(f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }

        else
        {
            x0=x2;
            f0=f2;
        }
        step=step+1;
    }

    while(fabs(f2)>e);
    {
        printf("\n Root Is : %f",x2);
    }
    break;

    case 2:
                   
    do
    {
        printf("Enter The Value of X0:\t");
        scanf("%f",&x0);
    }while(F(x0)>0);

    do
    {
        printf("\nEnter The Value of X1:\t");
        scanf("%f",&x1);
    }while(F(x1)<0);

    printf("\n-----------------------------------------------------------------------------------------------");
    printf("\n x0\t\t x1\t\t x2\t\t f0\t\t f1\t\t f2\n");
    printf("\n-----------------------------------------------------------------------------------------------");

    do
    {
        f0=F(x0);
        f1=F(x1);
        x2=x0-((f0*(x1-x0))/(f1-f0));
        f2=F(x2);

        printf("\n %f\t %f\t %f\t %f\t %\f\t %f\n",x0,x1,x2,f0,f1,f2);

        if(f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }

        else
        {
            x0=x2;
            f0=f2;
        }
    }while(fabs(f2)>ESP);
    printf("\n-----------------------------------------------------------------------------------------------");

    printf("\n App Root Is: %f",x2); 

    break;

    case 3:
                
    printf("Enter the First matrix:\t");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n Enter The Elements Of Second Matrix:\t");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
          scanf("%d",&b[i][j]);
        }  
    }

     printf("\n***********************************************************");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\n Addition Of Matrix\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    printf("\n***********************************************************");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("\n Substraction Of Matrix\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\n***********************************************************");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }

    printf("\n Multiplication Of Matrix\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\n***********************************************************");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j]=a[i][j]/b[i][j];
        }
    }

    printf("\n Division Of Matrix\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    break;

    case 4:
          
    printf("f(x) = x^2-3x+2\n\n ");

    printf("\n Eeter The Value of X1:\t");
    scanf("%f",&x1);

    printf("\n X1 = %f",x1);

    printf("\n-----------------------------------------------------------------------------");
    printf("\n x1\t\t x2\t\t f1\t\t f'1\t\t (x2-x1)/x2\n");
    printf("\n-----------------------------------------------------------------------------\n");

    do
    {
        f1=frac(x1);
        d=f(x1);
        x2=x1-(f1/d);
        er=fabs((x2-x1)/x2);

        printf("%f\t %f\t %f\t %f\t %f\n",x1,x2,f1,d,er);

        x1=x2;
    }

    while(er>e);
    printf("\n-----------------------------------------------------------------------------");
    printf("\n Root Of The Equation is: %f",x2);
    break;

    case 5:
                  
    printf("Enter The 2*2 Matrix Elements:\t");
    for(row=0; row<2; row++)
    {
        for(col=0; col<2; col++)
        {
            scanf("%d",&arry[row][col]);
        }
    }

    determinant= arry[0][0]*arry[0][1]- arry[1][0]*arry[1][1];

    printf("\n The Determinant of Matrix is: %d",determinant);
    break;

    case 6:
            
    printf("Enter The Row & Column Size:\t");
    scanf("%d%d",&rw,&cl);

    printf("\n Enter The Matrix Elements:\t");
    for(i=0; i<rw; i++)
    {
        for(j=0; j<cl; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    printf("\n The Entered Matrix\n");
    for(i=0; i<rw; i++)
    {
        for(j=0; j<cl; j++)
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }

    printf("\n Transpose of Matrix\n");
    for(i=0; i<rw; i++)
    {
        for(j=0; j<cl; j++)
        {
            printf("%d\t",ar[j][i]);
        }
        printf("\n");
    }
    break;

    }
    break;

    case 'B':
           
    printf("\n***********************************************************");
    printf("\n\t\tTerm-I: Prog C-I  Assignments List");
    printf("\n***********************************************************");

    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");

    printf(" 1  - Find Area & And Primenter Of  Trangle & Rectangle");
    printf("\n 2  - Find maximum among 3 numbers using else....if ladder");
    printf("\n 3  - WAP to perform Arithmetic Operation");
    printf("\n 6  - Prime number program"); 
    printf("\n 7  - Reverse Program");
    printf("\n 8  - Armstrong Number Program");
    printf("\n 9  - Program to print Fabnacci Series");
    printf("\n 12 - Program for searching an element in an array");
    printf("\n 13 - Program to print transpose of matrix");
    printf("\n 15 - Sorting of An Array");
   
    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");

    printf("\n-----------------------------------------------------------\n");
    printf("\n Enter The Assignment No. Which You Want To Perform:\t");
    scanf("%d",&choice);
    printf("\n------------------------------------------------------------\n");

    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");

    switch(choice)
    {
      case 1:
        printf("Enter the value of 3 sides trangle : \n ");
        scanf("%d %d %d",&x,&y,&z);
        peri_T=x+y+z;

        s= peri_T/2;
        area_T=(s*(s-x)*(s-y)*(s-z));
        //printf("\n The perimeter of trangle :%d",area_T);
        printf("\n perimeter of trangle is :%d",peri_T);

        printf("\n Enter the value of length and breath of rectrangle ");
        scanf("%d %d",&len,&brath);
        area_R=len*brath;
        peri_R=2*(len+brath);
        printf("Area of rectrangle is : %d",area_R);
        printf("perimeter od rectrangle is : %d",peri_R);
        break;

      case 2:
        printf("Enter Three Numbers:\t");
        scanf("%d%d%d",&n1,&n2,&n3);

        if(n1>n2 && n1>n3)
        printf("\n %d is maximum number",n1);

        else if(n2>n3 && n2>n1)
        printf("\n %d is maximum number",n2);

        else
        printf("\n %d is maximum number",n3);
        break;

      case 3:
       
	    printf("Press 1 for addition:");
	    printf("\nPress 2 for substraction:");
	    printf("\nPress 3 for multipliacation:");
	    printf("\nPress 4 for division:");
	
	    printf("\nEnter your choice:");
	    scanf("%d",&chr);
	    printf("\nEnter Two Number:");
	    scanf("%d %d",&ln, &r);
	
	    switch(chr)
	    {
	
	    case 1:
	    res= ln+r;
	    printf("%d is the result",res);
	    break;
	
	    case 2:
	    res= ln-r;
	    printf("%d is the result",res);
	    break;

	    case 3:
	    res= ln*r;
	    printf("%d is the result",res);
	    break;
	
	    case 4:
	    res= ln/r;
	    printf("%d is the result",res);
	    break;
	
	    default:
	    printf("\nWrong Choice");
	
        }
        break;

        case 6:

        i=2;
        printf("\n Enter The Number:\t");
        scanf("%d",&num);

        while(i<=num/2)
        {
            if(num%i==0)
            {
                count=1;
                break;
            }
            i++;
        }

        if(count==0)
        printf("%d is prime number",num);

        else
        printf("%d is not prime number",num);
        break;

     case 7:

        printf("Enter The Number:\t");
        scanf("%d",&num);
        onum=num;

        while(num!=0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }

        printf("\n The Reverse number of %d is %d",onum,rev);
        break;

    case 8:

        printf("\n Enter The Number:\t");
        scanf("%d",&num);

        while(org_num!=0)
        {
            rem=org_num%10;
            sum+=(rem*rem*rem);
            org_num=org_num/10;
        }

        if(sum==num)
        printf("\n %d is an Armstrong Number",num);

        else    
        printf("\n %d is not Armstrong Number",num);
        break;

    case 9:

        i=3;
        printf("\n Enter The Limit:\t");
        scanf("%d",&limit);

        printf("\n Fabnacci Series: %d\t %d\t",n1,n2);

        while(i<=limit)
        {
            next=n1+n2;
            printf("%d\t",next);
            n1=n2;
            n2=next;
            i=i+1;
        }

        break;

    case 12:

        printf("\n Enter The Array Elements:\t");
        for(i=0; i<5; i++)
        {
            scanf("%d",&nbr[i]);
        }

        printf("\n Enter The Element to be Search in an Array:\t");
        scanf("%d",&n);
        for(i=0; i<5; i++)
        {
            if(n==nbr[i])
            {
                printf("\n %d Is Present in an Array",n);
            }
        }
        break;

    case 13:

        printf("Enter The Array Elements:\t");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                scanf("%d",&table[i][j]);
            }
        }

        printf("\n Array Elements Are:\n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d\t",table[i][j]);
            }
            printf("\n");
        }
        printf("\n Transpose Of Matrix:\n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("%d\t",table[j][i]);
             }
           printf("\n");
        }
        break;

    case 15:

        printf("Enter The Array Elements:\t");
        for(i=0; i<5; i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=0; i<5; i++)
        {
            for(j=0; j<5-i-1; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp= arr[j];
                    arr[j]= arr[j+1];
                   arr[j+1]= temp;
                }
            }
        }    

           printf("\n The Sorted Array Is:");
        for(i=0; i<5; i++)
            {
                printf("\n %d\t",arr[i]);
            }
            break;

    }
    break;
    
    case 'C':
    
    printf("\n***********************************************************\n");
    printf("\n --------------------All DS Assignments--------------------\n");
    printf("\n***********************************************************");

    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n 1 - WAP to traverse Array Elements");
    printf("\n 2 - WAP to insert element in an Array");
    printf("\n 3 - Program to delete specific element from array");
    printf("\n 4 - WAP to search element in an Array");
    printf("\n 5 - Search an element in an Array using binary serach");
    printf("\n 6 - WAP for bubble sort algorithm");
    printf("\n 7 - WAP to pushing new element into the stack");
    printf("\n 8 - WAP to poping element from stack\n");
    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");
    
    printf("\n-----------------------------------------------------------\n");
    printf("\n Enter The Assignment Number Which You Want To perform:\t");
    scanf("%d",&chr);
    printf("\n-----------------------------------------------------------\n");

    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");
    switch(chr)
    {
        case 1:
                 
        printf("\n Enter The Array Elements:\t\n");
        for(i=0; i<10; i++)
        {
            scanf("%d",&array[i]);
        }         
        printf("\n Enter The Array Elements:\t\n");
        for(i=0; i<10; i++)
        {
            printf("Array[%d]= %d\n",i,array[i]);
        }         
    break;

    case 2:
    n=5;
    j=n;              
    printf("The original Array Elements Are:\n");
    for(i=0; i<n; i++)
    {
        printf("LA[%d]= %d\n",i,LA[i]);
    }
    n=n+1;

    while(i<=k)
    {
        LA[j+1]=LA[i];
        j=j-1;
    }

    LA[k]=item;

    printf("\nThe Array Elements After Insertion\n");
    for(i=0; i<n; i++)
    {
        printf("LA[%d]=%d\n",i,LA[i]);
    }
    break;

    case 3:

    j=n;               
    printf("The Origianal Array Elements Are:\n");
    for(i=0; i<n; i++)
    {
        printf("LA[%d]=%d\n",i,LA[i]);
    }
     n=n-1;

    while(i<=n)
    {
        LA[j-1]=LA[i];
        j=j+1;
    }
   

    printf("The Array Elements After Deletion\n");
    for(i=0; i<n; i++)
    {
        printf("LA[%d]=%d\n",i,LA[i]);
    }
    break;

    case 4:  

    printf("Enter The Element to be Search:\t");
    scanf("%d",&m);

    for(i=0; i<m; i++)
    {
        if(brr[i]==m)
        {
            j=1;
            break;
        }
    }
    if(j==1)
    printf("\nSearch Found");
    else
    printf("\n Search is not found");
    break;

    case 5:
                 
    printf("Enter The Size Of An Array:\t");
    scanf("%d",&nr);

    printf("\nEnter The Array Elements:\t");
    for(i=0; i<nr; i++)
    {
        scanf("%d",&bs[i]);
    }

    printf("\n Enter the Element to be Search:\t");
    scanf("%d",&itemm);

    beg=lb;
    end=nr-1;
    mid=((beg+end)/2);

    while(beg=(end&&bs[mid]!=itemm))
    {
        if(itemm<bs[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }

    if(bs[mid]==itemm)
    {
        loc=mid;

        printf("\n Search Is Successful");
        printf("\n item is found at location on %d",loc);
    }
    else
    printf("\n Search is not seccessful");
    break;

    case 6:

    printf("Enter The Array Elements:\t");
    for(i=0; i<5; i++)
    {
        scanf("%d",&cr[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(cr[j]<cr[j+1])
            {
                temp=cr[j];
                cr[j]=cr[j+1];
                cr[j+1]=temp;
            }
        }
    }

    printf("\n Sorted Array is:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n",cr[i]);
    }
    break;

    case 7:

    printf("Stack Before Pushing\n");
    for(i=top; i>=0; i--)
    {
        printf("%d\n",stack[i]);
    }

    printf("\n Enter The new element to be insert into the Stack:\t");
    scanf("%d",&num);

    if(top==+MAX)
    {
        printf("\n The Stack Is Full");
    }
    else
        top=top+1;
        stack[top]=num;

    printf("\n Stack After Pushing\n");
    for(i=top; i>=0; i--)
    {
        printf("%d\n",stack[i]);
    }
    break;

    case 8:

    printf("Stack before Poping");
    for(i=0; i<5; i++)
    {
        printf("\n %d\t",stk[i]);
    }

    if(top==-1)
    {
        printf("\n Stack is Empty");
    }
    else
    top=top-1;

    printf("\n Stack After Poping ");
    for(i=0; i<=top; i++)
    {
        printf("\n%d\t",stk[i]);
    }
   


    }


    }
    printf("\n =-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-\n");

}