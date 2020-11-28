#include<stdio.h>
#include<limits.h>
int main()
{
  int i,n,x,y,j,value;
  bool found = false;
  int cube[61];
  for(i=0;i<61;i++) cube[i] = i*i*i;
  scanf("%d",&n);
  int mn = INT_MAX;
	for(i=60;i>=0;i--)
	{
		for(j=1;j<61;j++)
			{
					value = cube[i] - cube[j];

					if( value == n && j<mn)
                    {
                        mn = y;
                        x = i;
                        y = j;
                        found = true;
                    }

			}
	}
	 if(found) printf("%d %d\n",x,y);
	else printf("No solution\n");

}
