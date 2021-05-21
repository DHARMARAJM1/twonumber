#include <stdio.h>
#include <math.h>
int main(void) {
	int a,b,n,t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d",&a,&b,&n);
	    if(n%2==0)
	    {
	        a=a;
	        b=b;
	    }
	    else
	    {
	        a=a*2;
	        b=b;
	    }
	    if(a>=b)
	    {
	        printf("%d\n",a/b);
	    }
	    else
	        printf("%d\n",b/a);
	    
	}
	return 0;
}

