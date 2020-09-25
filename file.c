#include<stdio.h>
typedef struct
{
    char name[10];
    int quantity;
    int rate;
}product;
int main()
{
    product p[3], q[3];
    int i,cost[3];
    FILE* fp=fopen("inventory.dat","wb");
    for(i=0;i<3;i++)
    {
        printf("Enter name, quantity and rate for quantity %d:\n",i+1);
        scanf("%s%d%d",p[i].name,&p[i].quantity,&p[i].rate);

    }
    fwrite(p,sizeof(product),3,fp);
    fclose(fp);

    FILE* f=fopen("inventory.dat","rb");
    FILE* g=fopen("destination.txt","w");
    if(f==NULL)
    {
        printf("file not found!");
        exit(-1);
    }
    fread(q,sizeof(product),3,f);

    fprintf(g,"Name\tQuantity\tRate\tCost\n");
    for(i=0;i<3;i++)
    {
        cost[i]=q[i].rate*q[i].quantity;
        fprintf(g,"%s\t\t%d\t\t%d\t\t%d\n",q[i].name,q[i].quantity,q[i].rate,cost[i]);
    }
    fclose(f);


return 0;
}
