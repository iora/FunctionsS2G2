#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);	//clear
int getSumOfSquares(int myArray[]); //clear
void printAsChars(int myArray[]);
double getAverage(int myArray[]);	//clear
int subtractAllValues(int myArray[]); //clear
float invertAllValues(int myArray[] ); //clear
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

//get invert all values
float invertAllValues( int myArray[]){
    for (int i = 0 ; i < 500 ; ++i){
        myArray[i] = myArray[i] * (-1);
                                   }
    return 0 ;
                                     }

// get the sum of all the index array with square of each (by multiple with it's own)
int getSumOfSquares(int myArray[]) {
	int sumSquares = 0;
	for (int i = 0; i < 500; i++) {
		sumSquares += myArray[i] * myArray[i];
	}
	return sumSqaures;
}

// substract each value in array by its index
float subtractAllValues(int myArray[]) {
	for (int i = 0; i < 500; i++) {
		myArray[i] = myArray[i] - i;
	}
	return myArray[];
}

void printGroupMemberNames() {
	printf("Anggoro Rahardiyawan\n ");
	printf("Prohim Tam\n ");
	printf("Piseth Soun\n ");
	printf("name4\n");
	printf("That's it!\n");
}

