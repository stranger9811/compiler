int Fibonacci(int n)
{
	if ( n == 0 ) {
		return 0;
	}
	
	if ( n == 1 ) {
		return 1;
	}
		int a,b,c;
		a = Fibonacci(n-1);
		b = Fibonacci(n-2);
		c = a+b;
		return c;
	

}


int main()
{
int n, i, c;
i=0;
int k;
//scanf("%d",&n);
//printf("Fibonacci series\n");

k=Fibonacci(1);
print_int k;



return 0;
}

