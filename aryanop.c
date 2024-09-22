#include <stdio.h>

int main()



{int a ,b ,c ,d;
printf("1. addition of two number\n");
printf("2. sub of two number\n");
printf("3. multi of two number\n");
printf("4. div of two number\n");
printf(" enter no of operation to perform ");
scanf("%d",&a);
printf("enter two nos");
scanf("%d %d",&b,&c);
if(a==1)
{ d=b+c;
printf("addition of two nos is %d",d);

}
else if (a==2)
{ d=b-c;
printf("sub of two nos is %d",d);

}
else if (a==3)
    { d=b*c;
printf("multi of two nos is %d",d)
;
}
else if (a==4)
    { d=b/c;
printf("div of two nos is %d",d);

}
else printf("not available");

















}

