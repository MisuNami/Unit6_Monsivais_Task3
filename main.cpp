

#include <iostream>
#include "accounts.h"
using namespace std;

void printArray(int[], int); //prototypes
void sortArrayDesc(int[],int);

int main()
 {
 //bubble sort  ASC method per take 2 of unit 6 assigment
cout << "\nSTART: " << cpuTime() << endl;
sortArrayDesc(accountBalances, maxAccounts);
printArray(accountBalances, maxAccounts);

cout <<"\nEND; " << cpuTime() << endl;


 return 0;
}


//Print the array function
void printArray(int arrayVals[], int size)
{

cout << "\nPrinted Values: " << endl;
 for (int i = 0; i < size; i++)
 {
   cout << arrayVals[i] << ",";
}
}
// Bubble Sort ASC
void sortArrayDesc(int arrayVals[], int size )
{
  int temp=0; //needed for the swap
  for(int left = 0; left < size; left++)
  {
  for (int right = left +1; right < size; right++)
  {
  
  /*the swap magic happens here
  bubble sort: compare the left num to the right num
  swap, if neccessary*/
  
  if ( arrayVals[left] < arrayVals[right] ) // hint < is Desc
{
temp = arrayVals[left];
arrayVals[left] = arrayVals[right];
arrayVals[right]= temp;
}
}
}

}