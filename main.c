#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

int main()
{
    int choice, num;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Array operations\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5){
            printf("Exiting program. Goodbye!\n");
            break;
        }

        if(choice>=1 && choice<=3){
            printf("Enter a number: ");
            scanf("%d", &num);
        }

        switch(choice){
            case 1:
                if (isArmstrong(num)){
                    printf("%d is an Armstrong number.\n", num);
                }else{
                    printf("%d is NOT an Armstrong number.\n", num);
                }
                break;
            case 2:
                if (isAdams(num)){
                    printf("%d is an Adams number.\n", num);
                }else{
                    printf("%d is NOT an Adams number.\n", num);
                }
                break;
            case 3:
                if (isPrimePalindrome(num)){
                    printf("%d is a Prime Palindrome number.\n", num);
                }else{
                    printf("%d is NOT a Prime Palindrome number.\n", num);
                }
                break;
            case 4:
            {
                int choice, val, size;

                printf("Enter array size ");
                scanf("%d", &size);

                int arr[size], dup[size], dup1[size];
                printf("Enter %d elements: ", size);

                for(int i=0; i<size; i++){
                    scanf("%d", &arr[i]);
                }
                for(int j=0; j<size; j++){
                    dup[j]=arr[j];
                    dup1[j]=arr[j];
                }

                do{

                    printf("\n=====Array Menu=====\n");
                    printf("1. Find average of elements\n");
                    printf("2. Find index of Max element\n");
                    printf("3. Find index of Min element\n");
                    printf("4. Get reversed array\n");
                    printf("5. Get sorted array\n");
                    printf("6. Find particular element's index\n");
                    printf("7. Exit\n");

                    printf("Enter your choice: ");
                    scanf("%d", &choice);

                    if(choice==7){
                        printf("Exiting Array Menu....\n");
                        break;
                    }

                    printf("\nOriginal");
                    displayArray(arr, size);
                    switch (choice)
                    {
                    case 1:
                    {
                        printf("Average = %.2f\n", findAverage(arr, size));
                        printf("\n");
                        break;
                    }
                    case 2:
                    {
                        printf("Max at index = %d\n", findMaxIndex(arr, size));
                        printf("\n");
                        break;
                    }
                    case 3:
                    {
                        printf("Min at index = %d\n", findMinIndex(arr, size));
                        printf("\n");
                        break;
                    }
                    case 4:
                    {
                        reverseArray(dup, size);
                        printf("Reversed ");
                        displayArray(dup, size);
                        printf("\n");
                        break;
                    }
                    case 5:
                    {
                        sortArray(dup1, size);
                        printf("Sorted ");
                        displayArray(dup1, size);
                        printf("\n");
                        break;
                    }
                    case 6:
                    {
                        printf("Enter value to search = ");
                        scanf("%d", &val);
                        int pos = linearSearch(arr, size, val);
                        if (pos != -1)
                        {
                            printf("%d found at index %d\n", val, pos);
                        }
                        else
                        {
                            printf("%d not found in array\n", val);
                        }
                        printf("\n");
                        break;
                    }
                    default:
                    {
                        printf("Invalid choice ! Please select between 1-6\n");
                        printf("\n");
                        break;
                    }
                    }

                }while(choice != 7);
            	break;
			}
            default:
            {
                printf("Invalid choice! Please select between 1-4.\n");
                break;
            }        
        }
    }while (choice != 5);

    return 0;
}
