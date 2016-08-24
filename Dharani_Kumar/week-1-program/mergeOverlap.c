#include <stdio.h>
struct set{
    int num1,num2,pos;
}val[1000],temp;
int main(){
    int n,i,j;
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        scanf("%i",&val[i].num1);
        scanf("%i",&val[i].num2);
        val[i].pos=1;
    }
    for(i=0;i<n;i++){
        {
            for(j=0;j<n;j++)
            {
                if(val[i].num1<val[j].num1)
                {
                    temp=val[i];
                    val[i]=val[j];
                    val[j]=temp;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((i!=j)&&(val[j].pos)){
                if(val[i].num2>=val[j].num1)
                {
                    int value=val[i].num2>val[j].num2?val[i].num2:val[j].num2;
                    int value1=val[i].num1<val[j].num1?val[i].num1:val[j].num1;
                    val[i].num2=value;
                    val[i].num1=value1;
                    val[j].pos=0;
                    j=i+1;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(val[i].pos)
        {
            printf("%i %i\n",val[i].num1,val[i].num2);
        }
    }
    return 0;
}
