#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Size = 0;
    int i = 0;              // Loop Counter
    float * Marks = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&Size);
    
    // Dynamic Memory Allocation
    Marks = (float *)malloc(Size * sizeof(float));      // Allocate the memory
    
    printf("Enter your Marks : \n");

    // Iteration                                        // Use the memory

    //    1       2      3
    for(i = 0 ; i < Size ; i++)
    {
        scanf("%f",&Marks[i]);  // 4
    }

    printf("Entered Marks Are : \n");

    //    1       2      3
    for(i = 0 ; i < Size ; i++)
    {
        printf("%f\n",Marks[i]);  // 4
    }
    
    free(Marks);                                        // Deallocate the memory

    return 0;
}