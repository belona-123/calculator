#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
int add();
int sub();
int mul();
int divide();
int sqr();
int sqrt1();
void exit();

int main()
{
	int operation;
	do
	{
		printf("CALCULATOR");
		printf("\n1. 1 for addition"
		"\n2. 2 for sutraction"
		"\n3. 3 for multiplication"
		"\n4. 4 for division"
		"\n5. 4 for square"
		"\n6. 6 for sqare root"
		"\n7. 7 for exit"
		"\n8. 8 for please make a choice");
		printf("\nEnter your choice:");
		scanf("%d",&operation);
		switch(operation)
		{
			case 1:
				add();
				break;
				case 2:
					sub();
					break;
					case 3:
						mul();
						break;
						case 4:
							divide();
							break;
							case 5:
								sqr();
								break;
								case 6:
									sqrt1();
									break;
									case 7:
										exit(0);
										break;
										default:
											printf("something is wrong");
											break;
		}
		printf("\n\n----------------------------------\n");
	}
	while(operation!=7);
	return 0;
	
}
int add()
{
	int i,sum=0,num1,num2;
	printf("enter the total number:");
	scanf("%d",&num1);
	printf("Enter the numbers:\n");
	for(i=1;i<=num1;i++)
	{
		scanf("%d",&num2);
		sum=sum+num2;
	}
	printf("Total sum is %d",sum);
	return 0;
}
int sub()
{
	int num1,num2,subt;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	subt=num1-num2;
	printf("\nThe subtraction of two numbers is %d",subt);
	
}
int mul()
{
	int num1,num2,mult;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	mult=num1*num2;
	printf("\n The multiplication of two given numbers is %d",mult);
}
int divide()
{
	int num1,num2,divi;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	if(num2==0)
	{
		printf("\n DIvisor cannot be zero so plz enter another number");
		scanf("%d",&num2);
		
	}
	divi=num1/num2;
	printf("\nThe division of two number is %d",divi);
}
int sqr()
{
	int num,sqa;
	printf("Enter the number:");
	scanf("%d",&num);
	sqa=num*num;
	printf("\n The square of the given number is %d",sqa);
}
int sqrt1()
{
	float sqrtt;
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	sqrtt=sqr(num);
	printf("\n The square root of given number is %f",sqrtt);
}
