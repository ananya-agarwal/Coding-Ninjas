#include<cmath>
int getAllWays(int remainingSum, int power, int base)
{
    int result = pow(base, power);
    if(remainingSum == result)
        return 1;
    if(remainingSum < result)
        return 0;
    int x = getAllWays(remainingSum-result, power, base+1);
    int y = getAllWays(remainingSum, power, base+1);
    return x+y;  
}
int getAllWays(int sum, int power) 
{
	return getAllWays(sum,power,1);
}
