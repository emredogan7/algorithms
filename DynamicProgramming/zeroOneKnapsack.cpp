// dynamic programming solution to zero-one knapsack problem.
// January 20, 2019
// Emre Dogan


int max(int num1,int num2) {return (num1 > num2)?num1 : num2;}


int knapsack(int bagSize, int weights[], int numOfGoods)
{
	// creating the table that is sized of (numOfGoods+1, bagSize+1) or (n+1,W+1).
	int c[numOfGoods+1,bagSize+1];

	for (int i = 0; i <= numOfGoods; i++)
	{
		for (int w = 0; w <= bagSize; w++)
		{
			if (i == 0 || w == 0)
				c[i,w] = 0
			else if ()

			else

		}
	}
}


int main()
{

}


