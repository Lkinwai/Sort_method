//QT 1147323184 90247100ljw###
#include <stdio.h>
//´óµÄ¿¿Ç°
#define RowLength	7
void quick_sort(int*p ,int length)
{
	int index,i;
    for(index = 0;index < length-1;index++)
    {
        int Setmaxindex = index;
        for(i = index+1;i<length;i++){
            if(p[i]>p[Setmaxindex])
            {
                Setmaxindex = i;
            }
        }
        int changetemp = p[Setmaxindex];
        p[Setmaxindex]= p[index];
        p[index] = changetemp;

    }
}





int main()
{
    int a[RowLength] = {7,2,1,4,3,9,5,6};
    quick_sort(a,RowLength);
    int b = 0;
    for(;b<=RowLength-1;b++){
        printf("a[%d] = %d\n",b,a[b]);
    }

    printf("Hello World!\n");
    return 0;
}



