#include "iostream"

void bubbleSort(int array[], int col){                    
        int temp=0;                              
        for (int i=1;  i<col  ;  i++){            
                for (int j=0;  j<col-i;  j++){     
                        if (array [j]>array [j+1]){     
                                temp=array[j];           
                                array [j]=array [j+1];    
                                array [j+1]=temp;
                        }
                }
        }
}