
int i;
int give_twice(int x)
{ int y;
  y=2*x;
  i=i+1;
  print_int x;
  if(x!=0) {
   return give_twice(x-1);
}
  
  return y;
}

int main()
{ 
i=0;
int i,a;
a=4;
int x[10],y[10];
/*printf("Enter length of the vector\n");scanf("%d",&n);
int *x=(int *)malloc(n*sizeof(int));
int *y=(int *)malloc(n*sizeof(int));
printf("Enter array 1\n");
for (i = 0; i < n; i=i+1)
scanf("%d",&x[i]);
printf("Enter array 2\n");
for (i = 0; i < n; i=i+1)
scanf("%d",&y[i]);
printf("Enter the value of alpha\n");
scanf("%d",&a);
for (i = 0; i < n; i=i+1)
      y[i] = a*x[i] + y[i];
printf("\n");
for (i = 0; i < n; i=i+1)
printf("%d\t",y[i]);  */

for (i = 0; i < 1; i=i+1)
{
	int j;
	j=i+1;
	x[i]=2;
	y[i] = a*x[i]+give_twice(50);
}

return 0;
}
