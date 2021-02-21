 #include<stdio.h>

int isPrime(int,int);

int main()
{
 int num,prime;

    printf("Enter a positive number: ");
    scanf("%d",&num);

    prime = isPrime(num,num/2);

   if(prime==1)
        printf("%d is a prime number",num);
   else
      printf("%d is not a prime number",num);

   return 0;
}
