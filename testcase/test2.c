
int give_twice(int x)
{ int y;
  y=2*x;
  return y;
}

int main()
{ 

int i,a;
a=0.4;
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

for (i = 0; i < 10; i=i+1)
{	y[i] = a*x[i]+give_twice( y[i]);
	print_int y[i];
}

return 0;
}
