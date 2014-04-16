// in, out are m x n images (integer data)
// K is the kernel size (KxK) - currently needs to be an odd number, e.g. 3
// coeffs[K][K] is a 2D array of integer coefficients
// scale is a scaling factor to normalise the filter gain

#include<stdio.h>

int main()
{


int m=5,n=5,K=5;
int imag[m][n];
int kernel[K][K];
int i,ii,jj,j;
int out[m][n];
int scale=2;
int coeffs[m][n];
for (i = K / 2; i < m - K / 2; ++i) // iterate through image
{
  for (j = K / 2; j < n - K / 2; ++j)
  {
    int sum = 0; // sum will be the sum of input data * coeff terms

    for (ii = - K / 2; ii <= K / 2; ++ii) // iterate over kernel
    {
      for (jj = - K / 2; jj <= K / 2; ++jj)
      {
        int data = in[i + ii][j +jj];
        int coeff = coeffs[ii + K / 2][jj + K / 2];

        sum = sum + data * coeff;
      }
    }
    out[i][j] = sum / scale; // scale sum of convolution products and store in output
  }
}

return 0;

}
