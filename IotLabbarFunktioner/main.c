#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int Biggest(int a,int b,int c)
{
	int biggest = a;
	if (b > biggest) biggest = b;
	if (c > biggest) biggest = c;
	return biggest;

}

char * Longest(char *n1, char *n2)
{
	if (strlen(n1) > strlen(n2)) return n1;
	return n2;
}

void ToPercentage(float f, char *buffert)
{
	sprintf(buffert, "%.f%%", f*100);
}

bool IsMyndig(int age)
{
	if (age > 17) return true;
	return false;
}

bool CanBuyBeer(int age, char *location)
{
	if (age > 17 && strcmp(location, "krogen") == 0)
		return true;
	if (age > 19 && strcmp(location, "systemet") == 0)
		return true;
	return false;
}

typedef enum
{
	Location_Krogen,
	Location_Systemet
	
} Location;
bool CanBuyBeer2(int age, Location location)
{
	if (age > 17 && location == Location_Krogen)
		return true;
	if (age > 19 && location == Location_Systemet)
		return true;
	return false;
}


int main()
{
	int biggest = Biggest(1, 4, 5);

	char n1[] = "Stefan";
	char n2[] = "Holmberg";
	printf(Longest(n1,n2));

	float f = -1;
	while( f < 0 || f > 1)
	{
		scanf("%f", &f);
	}
	char buffert[100];
	ToPercentage(f, buffert);

	int age;
	scanf("%d", &age);
	if (IsMyndig(age)) printf("myndig");
	else printf("myndig");
	
	
	return 0;
}
