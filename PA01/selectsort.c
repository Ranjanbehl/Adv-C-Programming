#ifdef SELECTION_SORT
#include "pa01.h"
void selectSort(int * arr, int size)
{

    for(int i = 0; i < size - 1; i++)
    {
       int min_element = i; //setting the min element equal to i
        for (int j = i + 1; j < size; j++)
        {
        if(arr[j] < arr[min_element])
        min_element = j; // setting the min element equal to j
        
       }
	if ( i != min_element)
	swap(&arr[i],&arr[min_element]); // swaping the ith element with the min element
    }

}
#endif
