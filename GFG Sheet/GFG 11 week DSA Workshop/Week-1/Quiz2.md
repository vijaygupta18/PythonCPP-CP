Q-1 Which of the following is true about arrays in C
a-For every type T, there can be an array of T.
B-For every type T except void and function type, there can be an array of T.
C-When an array is passed to a function, C compiler creates a copy of array.
D-2D arrays are stored in column major form
Ans-B


Q2-In a C file (say sourcefile1.c), an array is defined as follows. Here, we don’t need to mention arrary arr size explicitly in [] because the size would be determined by the number of elements used in the initialization.
 
int arr[] = {1,2,3,4,5};
In another C file (say sourcefile2.c), the same array is declared for usage as follows:
 
extern int arr[];
In sourcefile2.c, we can use sizeof() on arr to find out the actual size of arr.

Ans-False

Q3-In C, 1D array of int can be defined as follows and both are correct.
 
int array1D[4] = {1,2,3,4};
int array1D[] = {1,2,3,4};
But given the following definitions (along-with initialization) of 2D arrays
 
int array2D[2][4] = {1,2,3,4,5,6,7,8}; /* (i) */
int array2D[][4] = {1,2,3,4,5,6,7,8}; /* (ii) */
int array2D[2][] = {1,2,3,4,5,6,7,8}; /* (iii) */
int array2D[][] = {1,2,3,4,5,6,7,8}; /* (iv) */

Ans-I II are correct

Q4-An array A consists of n integers in locations A[0], A[1] ....A[n-1]. It is required to shift the elements of the array cyclically to the left by k places, where 1 <= k <= (n-1). An incomplete algorithm for doing this in linear time, without using another array is given below. Complete the algorithm by filling in the blanks. Assume alt the variables are suitably declared.
min = n; i = 0;

while (___________) {	

     temp = A[i]; j = i;

     while (________) {

     A[j] = ________	

Ans-i < min; j!= (n+i-k)mod n; A[(j + k)mod n]; temp; i + 1;

Q5-Output of following Java program?
 
import java.util.Arrays;
class Test
{
    public static void main (String[] args) 
    {
        int arr1[] = {1, 2, 3};
        int arr2[] = {1, 2, 3};
        if (Arrays.equals(arr1, arr2))
            System.out.println("Same");
        else
            System.out.println("Not same");
    }
}

Ans-Same
