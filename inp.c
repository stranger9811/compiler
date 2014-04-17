int main()
{
	int x,a,b[10][20],c[30][10];
	x = 2;
	c[2][2] = 4;
	b[4][3] = x+3;
	a = b[4][3] + c[2][2];
	print_int a;
	return 0;
}
