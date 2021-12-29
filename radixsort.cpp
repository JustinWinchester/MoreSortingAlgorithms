#include <iostream>
#include <stdlib.h>
#include <queue>
#include <time.h>
#include <math.h> 

#define SIZE 25000

using namespace std; 

void radix_sort(int [],int, int); 
//radiz sort function it takes three arguments: 
// int [] data list 
//int dat size
//int list size 


int main()
{
	int arr[SIZE], i; 
	
	srand(time(NULL)); 

	for ( i = 0; i < SIZE; i++)// fill the array
	{
		arr[i] = rand()% 1000 + 1000; //4 digit number
		cout<<arr[i]<<""; 
	}
	
	cout << endl << endl; 
	
	radix_sort(arr, 4, SIZE); // call radix sort function 

	for( i = 0; i < SIZE; i++)//print the sorted array 
	{
		cout<<arr[i]<<" "; 
	}
	cout<<endl<<endl;
 	
	return 0; 
}

void radix_sort(int arr[], int d, int n)
{
	int j, i, k; 
	
	for( j= d; j >= 1; j--)
	{
		queue <int> groups[10]; //declare 10 queues 

		for(i = 0; i < n; i ++)// grouping 
		{
			int pos = j; 
		
			k = (arr[i]/(int)pow(10.00, (double)(d-j))) % 10; 
		
			switch(k)
			{
			case 0: groups[0].push(arr[i]);
				break;
			case 1: groups[1].push(arr[i]);
				break;
		        case 2: groups[2].push(arr[i]);
				break;
			case 3: groups[3].push(arr[i]);
				break;
			case 4: groups[4].push(arr[i]);
				break;
			case 5: groups[5].push(arr[i]);
				break;
			case 6: groups[6].push(arr[i]);
				break;
			case 7: groups[7].push(arr[i]);
				break;                
			case 8: groups[8].push(arr[i]);
				break;
			case 9: groups[9].push(arr[i]);
				break;
			}
	}
	
	k = 0; 
		
	for(i = 0; i < 10; i++)//collecting
	{
		while(!groups[i].empty())
		{
			arr[k++] = groups[i].front();
			groups[i].pop(); 
		}
	}//end of the i loop
}//end of the j loop
}//end of radix sort
