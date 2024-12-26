//palindrome or not using recursion
#include<stdio.h>
int palindrome (int, int, int);

int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	if(palindrome(num,num,0)
	{
	printf("It's a palindrome number\n");
	}
	else
	{
	printf("It's not a palindrome \n");
}

int palindrome(int num, int original, int rev)
{
	if(num ==0)
{
	return rev == original;
}
else{
	rev = rev*10 + (num%10);
	return ((num/10),original,rev);
}
//reverse the string using recursion
#include<stdio.h>
#include<string.h>

void reverse(char[], int , int);

int main()
{
	char str[100];
	
	printf("Enter the string\n");
	scanf("%s",str);
	int length = strlen(str);
	reverse(str,0,length-1);
	printf("reversed string is:%s",str);	
}
void reverse (char str[], int start, int end)
{
	if(start >= end)
	{
return;
}
	else {
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;

	return reverse(str,start+1,end-1);
}
}
//sum of digits using recursion
#include<stdio.h>
int sumofdigit(int,int);

int main()
{
	int num;
	printf("Enter the two digit number\n");
	scanf("%d",&num);
	int result = sumofdigit(num);
	printf("sum of digit :%d\n",result);	
	}
int sumofdigit(int num)
{
	if(num ==0)
	{
	return 0;
}
	else{
	// MISTAKE I DID --> return sumofdigit((num%10) + (num/10));
	//Corrected:
	return (num%10) + sumofdigit(num/10);
}
//float binary char pointer
#include<stdio.h>
void floatbinary(int);

int main()
{
	float n;
	printf("Enter the float number\n");
	scanf("%f",n);
	floatbinary(n);
	}
void floatbinary(float n)
{
	int i,j;
	char *p = (char*)&n;
	for(i = 3; i >=0; i--){
		for(j = 7; j>= 0; j--){
			printf("%d\n",(p[i]>>j)&1));
	}
		}
	printf("\n");
}
//Double Binary using char pointer
void doublebinary(double);

int main()
{
	double n;
	printf("Enter the double value\n");
	scanf("%lf",&n);
	printf("Double binary representation:\n");
	doublebinary(n);
}

void doublebinary(double n)
{
	int i,j;
	char *p = (char *)&n;
	
	for(i = 7; i >= 0; i--){
		for ( j = 7; j>=0; j--){
			printf("%d",(p[i]>>j)&1);
	}

}
	printf("\n");
}
0100000000101000000000000000000000000000000000000000000000000000
0100000000101000000000000000000000000000000000000000000000000000
  //prime numbers 1 to 1000
#include<stdio.h>
 int main()
{
	int i,j,count;
	printf("Prime number between 1 to 1000\n");
	for ( i = 1; i <= 1000; i++)
	{
		count = 0; //reinitialize

		for(j = 1; j <= i; j++)
		{
			if( i % j ==0)
			{
				count ++;
			}
		}
	if(count == 2)
	{
		printf("%d",i);
	}
}
	printf("\n");
}
//move command using files concept
#include<stdio.h>
int main()
{
	FILE *fs = fopen("data.txt","r");
	if(fs == NULL){
	printf("File doesn't exist\n");
	return 0;
	}
	FILE *fd = fopen("new.txt","w");
	char ch;
while((ch = fgetc(fs)) != EOF)
	{
		fputc(ch, fd);
	}
	printf("File successfully moved\n");
	remove("data.txt");
	}

//copy command using files concept
same as this move command just add extra:
if(fs != NULL)
{
	while((ch = fgetc(fs)) != EOF)
	{
		fputc(ch,fd);
	}
	printf("file is successfully copied!\n");
}
else
{
	printf("No source file\n");
}
//Strong numbers between 1 to 1000
#include<stdio.h>
int fact(int num)
{
	int i;
	int fact = 1;

	for ( i= 1; i<= num ; i++)
	{
		fact = fact *i;
	}
	return fact;
}
int strong(int n)
{
	int temp;
	int digit,sum=0;
		
	temp = n;
	while (temp > 0)
	{
		digit = temp % 10;
 		sum = sum + fact(digit);
		temp = temp/10; 
	}
	return sum == n;
}
int main()
{
	int i;
	printf("strong numbers 1 to 1000:\n");
	for (i = 1; i<1000; i++)
	{
		if(strong(i))
		{
			printf("%d\n",i);
	}
}
printf("\n");
}
		//insert a data in an array
#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the number of element you want to insert:");
	scanf("%d"&n);
	
	int a[n];
	printf("Enter %d elements:\n",n);
	for(i = 0; i < n; i++)
		{
			printf("Element %d", i + 1);
			scanf("%d",&a[i]);
	}
	i = 0;
	while(i<n)
	{
		printf("%d",a[i]);
		i++;	
	}
	printf("\n");
}

	//Repeated Elements in an array
#include<stdio.h>
int main()
{
	int i,j,n,c;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	
	printf("Enter the %d elements",n);
	for(i = 0; i < n; i ++)
	{
		printf("Elements %d",n);
		scanf("%d",&a[i]);
	}
	
	printf("repeated elements in the array are:\n");
	for(i = 0; i < n ; i++)
	{
	c = 1; //initialize count value for each element
	for (j = 0 ; j < i; j++)
	{
		if(a[i] == a[j])
		{

		c++;
		}
	}
	if(c>1)
{
	printf("%d repeated %d:\n",a[i],c);
}
}
printf("\n");
return 0;
}

//for non-repeated elements 
printf("Non-repeated elements are \n");
for(i = 0 ; i < n; i++)
{
c =1; 
for ( j = 0; j < i ; j++)
{
if( i != j && a[i] == a[j])
{
c++; break;
}
}
	if(c ==1){
	printf("%d",a[i]);
}
}
printf("\n");
return 0;
}
//Remove All and consecutive spaces in a string

#include<stdio.h>
#include<string.h>

void removespace(char *);
int main()
{
 	char str[100];
	

	printf("Enter the string\n");
	scanf("%[^\n]",str);
	
	removespace(str);
	printf("Modified string : %s",str);
}

void removespace(char *str)
{
	int i,j=0;
	int length = strlen(str);	
	for(i = 0 ; i < length; i ++)
	{
		if(str[i] != ' ') //for consecutive spaces 
	//if(str[i] != ' ' || (i > 0 && str[i -1] != ' '))
		{
			str[j++] = str[i];
		}
	}
str[j] = '/0';
} 
//Reverse the bits from an given integer
#include<stdio.h>

void reversebit(int);

int main()
{
	int x,y,p1,p2,num;
	
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("binary representation of the number\n");
	reversebit(num);
	for(p2 = 31, p1 = 0; p2>p1; p2--,p1++)
		{
			x = (num>>p1)&1;
			y = (num>p2)&1;
			if(x != y)
			{
			num = num^(1<<p1);
			num = num^(1<<p2);
}
}
	reversebit(num);

}

void reversebit(int n)
{
	int i;
	for(i=31; i >= 0; i--)
	{
		printf("%d",(n>>i)&1);
	}
	printf("\n");
}

	




