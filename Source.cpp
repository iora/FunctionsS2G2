#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);	//clear
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);	//clear
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	int sum = getSum(row);
	printf("Sum: %i\n", sum);

	printf("Average: %.3f\n", getAverage(row));
	
	return 1;
}

//get the sum of all the numbers in an array with size of 500
int getSum(int myArray[]){
	int sum = 0;
	for(int i = 0; i < 500; i++){
		//add the value from the first index to the last
		sum += myArray[i];
	}
	return sum;
}

//get the average of an array of size 500
double getAverage(int myArray[]){
	//get the sum
	double sum = getSum(myArray);
	//return the average
	return sum / 500;
}

void printGroupMemberNames() {
	printf("Anggoro Rahardiyawan\n ");
	printf("Name2\n ");
	printf("Name3\n ");
	printf("That's it!\n");
}

