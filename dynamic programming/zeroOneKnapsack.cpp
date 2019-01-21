// dynamic programming solution to zero-one knapsack problem.
// January 20, 2019
// Emre Dogan

#include<bits/stdc++.h>

int max(int num1,int num2) {return (num1 > num2)?num1 : num2;}


int knapsack(int bagSize, int weights[],int values[], int numOfGoods)
{
	// creating the table that is sized of (numOfGoods+1, bagSize+1) or (n+1,W+1).
	int c[numOfGoods+1][bagSize+1];

	for (int i = 0; i <= numOfGoods; i++)
	{
		for (int w = 0; w <= bagSize; w++)
		{
			if (i == 0 || w == 0)
				c[i][w] = 0;
			else if (weights[i]<=w)
				c[i][w] = max(c[i-1][w], values[i] + c[i-1][w-weights[i]]);
			else
				c[i][w] = c[i-1][w];

		}
	}
	return c[numOfGoods][bagSize];
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout << knapsack(W, wt, val, n);
    return 0;
}


