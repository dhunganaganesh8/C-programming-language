#include<stdio.h>

struct employee { int empid; char name[20]; int salary; };
int main()
 { int n=-1,i,j;
 FILE *fp;
 struct employee e[48],temp;
 fp=fopen("employee.txt","rb");
 while(!feof(fp))
 { fread(&e[++n],sizeof(struct employee),1,fp);
  }
   printf("The employee record is given below:\n");
    printf("Name \t ID \t Salary \n");
    for(i=0;i<n;i++)
    { printf("%s\t%d\t%d\n",e[i].name,e[i].empid,e[i].salary); }
    fclose(fp);
    return 0;
     }
