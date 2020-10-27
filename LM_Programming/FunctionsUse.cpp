#include <iostream>
#include <string>

using namespace std;

//Tip: from my experience using this format is the best for ASCII art. cout << R"()", with the art going between ()

int main()
{
	//array and function declaration
	int numbers[10] = { 78, 42, 7, 8, 15, 2, 83, 64, 23, 13 };

	void printForLoop(int numbers[10]);
	void printWhileLoop(int numbers[10]);
	//void printForRangeBasedLoop(int numbers[10]);

	//calling function with array parameter
	printForLoop(numbers);
	printWhileLoop(numbers);

	//printForRangeBasedLoop(numbers[10]);
	//Why unable to call function and use for range based? invalid Begin.

	for (int i : numbers)
	{
		if (i % 2 == 0) {
			std::cout << "\n\n" << " Number is even " << i << std::endl;
		}
		else {
			std::cout << "\n\n" << " Number is odd " << i << std::endl;
		}
	}

}

void printForLoop(int numbers[10]) 
{
	//For to run 10 times, each time if rest iqual to 0 even, else odd.
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] % 2 == 0) {
			std::cout << "\n\n" << " Number is even " << numbers[i] << std::endl;
		}
		else {
			std::cout << "\n\n" << " Number is odd " << numbers[i] << std::endl;
		}
	}
}

void printWhileLoop(int numbers[10]) 
{
	int i = 0;

	while (i < 10)
	{
		if (numbers[i] % 2 == 0) {
			std::cout << "\n\n" << " Number is even " << numbers[i] << std::endl;
		}
		else {
			std::cout << "\n\n" << " Number is odd " << numbers[i] << std::endl;
		}

		i++;
	}

}

//void printForRangeBasedLoop(int numbers[10])
//{
//	//For to run 10 times, each time if rest iqual to 0 even, else odd.
//	for (int i : numbers)
//	{
//		if (i % 2 == 0) {
//			std::cout << "\n\n" << " Number is even " << i << std::endl;
//		}
//		else {
//			std::cout << "\n\n" << " Number is odd " << i << std::endl;
//		}
//	}
//}