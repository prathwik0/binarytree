#include <stdio.h>
#include <stdlib.h>

//what i am essentially doing is creating another array that stores the all the unique values and its count resp.

int main(){

    //this is the given array
    int a[7] = {1,2,3,1,2,3,7};
    int i, j;

    //this array stores all unique integers in the given array and their number of occurences
    //all elements are initialized to zero
    int acount[4][2];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 2; j++)
            acount[i][j] = 0;

    //this loops through all the elements in the given array
    //it checks the element with all the stored elements in our count array
    //if the element is found in our array, its count is incremented
    //if the element is not found, then it is added to our array
    int temp = 0, count = 0;
    for (int i = 0; i < 7; i++){
        for (j = 0; j < count; j++)
        {
            //printf("i = %d j = %d ax[j][0] = %d a[i] = %d\n", i, j,acount[j][0], a[i]);
            if (a[i] == acount[j][0]){
                acount[j][1]++;
                temp = 1;
                break;
            } 
        }
        if (temp == 0){
            acount[j][0] = a[i];
            count++;
            printf("j = %d acount[j][0] = %d a[i] = %d count = %d\n",j, acount[j][0], a[i], count);
        }
        temp = 0;
    }

    for (int i = 0; i < 4; i++){
        if(acount[i][1] == 0){
            printf("%d is the number you were looking for!\n", acount[i][0]);
        }
    }

    return 0;
}