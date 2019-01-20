// Emre Dogan

int max(int num1,int num2) {return (num1 > num2)?num1 : num2;}


int knapsackTable(int bagSize, int weights[], int numOfGoods)
{
    // creating the table that is sized of (numOfGoods+1, bagSize+1).
