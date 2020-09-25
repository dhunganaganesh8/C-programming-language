#include<stdio.h>

struct employee { int empid; char name[20]; int salary; };

int main()
{ int n,i,j;
 FILE *fp;
 struct employee e[48];
 fp=fopen("employee.txt","wb");
  printf("Enter number of employees:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { printf("Enter name:");
  scanf("%s",e[i].name);
  printf("Enter employee id:");
  scanf("%d",&e[i].empid);
  printf("Enter employee salary:");
  scanf("%d",&e[i].salary);
  fwrite(&e[i],sizeof(struct employee),1,fp);
  }
  printf("File Written!\n");
  fclose(fp);
  return 0;
  }
