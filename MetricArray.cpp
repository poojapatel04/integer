//Programming lab assignment
//Name: Pooja Patel
//Date: 2/20/23
//the metric Array

# include <iostream>
using namespace std;

int main()
{
	//declare variable
	int i,sum,smallest,largest, inputValue[10];
	int total = 10;
	float average;
    // print welcome message
    cout << "Welcome to the Metric Array Analysis Program! " << endl;
    cout << endl;
	// ask user to enter ten integer between 1 to 100
	cout << "Enter ten integer between 1 and 100, and I will tell you the smallest, the largest, and the average number: "<< endl;
	for (int i = 0;i<10; i++)
	{
	cin >> inputValue[i];
	// if user input an integer that is not between  1 to 100 ouput a appropriate message
	while (inputValue[i] < 0 ||inputValue[i] > 100)
	{
	cout << "You have input an integer that is not between 1 to 100. Try Again! ";
	return 0;
    }
    }
    // output the average to input integers
	sum = 0;
	for(i = 0; i < total; i++)
	{
	sum += inputValue[i];
	}
	 // average formula to output the average
	average = (float)sum/total;
	cout << "Average: " << average << endl;
	// output the smallest integer from the user input integer
	smallest = inputValue[i];
	for(i = 0; i < total; i++)
	{
	// smallest integer formual to output the smallest integer
	if(smallest>inputValue[i])
	smallest = inputValue[i];
	}
	cout << "Smallest: " << smallest<< endl;
	// output the largest integer from the user input integer
	for(i = 1; i < total; i++)
	{
	// largest integer formual to output the largest integer
	if(inputValue[0] < inputValue[i])
	inputValue[0] = inputValue[i];
	}
	cout <<"Largest: " << inputValue[0] << endl;
}

