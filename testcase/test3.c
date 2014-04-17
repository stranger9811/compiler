int main()
{
int m,n,K;
m=5;
n=5;
K=5;
int imag[5][5];
int Kernal[5][5];
int i,ii,jj,j;
int out[5][5];
int in[5][5];
int scale;
scale = 2;
int coeffs[5][5];

for(i=0;i<m;i=i+1) {
for(j=0;j<m;j=j+1)
{

in[i][j]=imag[i][j]=Kernal[i][j]=coeffs[i][j]=i*j;

}
}
for (i = K / 2; i < m - K / 2; i=i+1) // iterate through image
{
  for (j = K / 2; j < n - K / 2; j=j+1)
  {
    int sum; // sum will be the sum of input data * coeff terms
    sum = 0;
    for (ii =  K / 2; ii <= K / 2; ii=ii+1) // iterate over kernel
    {
      ii = -ii;
      for (jj =  K / 2; jj <= K / 2; jj=jj+1)
      {
        jj = -jj;
        int data = in[i + ii][j +jj];
        int coeff = coeffs[ii + K / 2][jj + K / 2];

        sum = sum + data * coeff;
      }
    }
    out[i][j] = sum / scale; // scale sum of convolution products and store in output
  }
}

for(i=0;i<m;i=i+1) {
  for(j=0;j<m;j=j+1)
  {

  printf("%d\t",out[i][j]);

  }
}
return 0;

}
