// in, out are m x n images (integer data)
// K is the kernel size (KxK) - currently needs to be an odd number, e.g. 3
// coeffs[K][K] is a 2D array of integer coefficients
// scale is a scaling factor to normalise the filter gain

#include<stdio.h>

int main()
{


int m,n,K;
m=5,n=5,K=5;
int imag[5][5];
int kernal[5][5];
int i,ii,jj,j;
int out[5][5];
int in[5][5];
int scale;
scale=2;
int coeffs[5][5];
int a1,a2,a1minus;
int b1,b2;

for(i=0;i<m;i=i+1)
{	for(j=0;j<m;j=j+1)
	{

		imag[i][j]=kernal[i][j]=coeffs[i][j]=i*j;

	}	
}
a1=K/2;
a2=m-a1;
b1=n-a1;
a1minus=-a1;
int temp1,temp2,temp3,temp4;

for (i = a1; i < a2; i=i+1) // iterate through image
{
  for (j = a1; j < b1; j=j+1)
  {
    int sum;
    sum = 0; // sum will be the sum of input data * coeff terms

    for (ii = a1minus; ii <= a1; ii=ii+1) // iterate over kernel
    {
      for (jj = a1minus; jj <= a1; jj=jj+1)
      { 
        temp1=i + ii;
	    temp2=j +jj;
		temp3=ii + a1;
		temp4=jj + a1;
        int data; 
        data= in[temp1][temp2];
        int coeff;
        coeff = coeffs[temp3][temp4];

        sum = sum + data * coeff;
      }
    }
    out[i][j] = sum / scale; // scale sum of convolution products and store in output
  }
}

for(i=0;i<m;i=i+1)
{	for(j=0;j<m;j=j+1)
	{

		print_int out[i][j];

	}
}
	return 0;

}
