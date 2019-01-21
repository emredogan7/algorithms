// dynamic programming solution to zero-one knapsack problem.
// January 20, 2019
// Emre Dogan

#include <iostream>
using namespace std;

int max(int num1,int num2) {return (num1 > num2)?num1 : num2;}

int knapsack(int numOfGoods, int bagSize, int weights[],int values[])
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
	// Taking the number of elements to be taken.
	int numOfGoods;
	cout<<"\nEnter the number of possible elements to put into knapsack: ";
	cin>>numOfGoods;

	// Taking the capacity of your knapsack.
	int bagSize;
	cout<<"\nEnter the capacity of your knapsack: ";
	cin>>bagSize;

	// Taking the weights and values of these elements.
	int weights[numOfGoods];
	int values[numOfGoods];
	cout<<"\nEnter  the weight and value of each item  seperated by space:\n";	
	for(int i=0; i < numOfGoods; i++)
	{
		cin>>weights[i];
		cin>>values[i];	
	}
	cout << "\nMaximum value of items in the knapsack is equal to " << knapsack(numOfGoods,bagSize,weights,values)<<'\n';

    // int val[] = {60, 100, 120};
    // int wt[] = {10, 20, 30};
    // int  W = 50;
    // int n = sizeof(val)/sizeof(val[0]);
    // std :: cout << knapsack(W, wt, val, n);
    return 0;
}


