/*
 *The author:Dugu Lin3237
 *Completion Date:2018/5/4
 *Introduction:Bubble algorithm C language ascending order
 *作者:独孤麟3237
 *完成日期:2018/5/4
 *简介:冒泡算法C语言升序实现
 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int one[6] = { 3,5,2,7,1,9 };
	int i,j,a,b;
	b = 0;

	a = sizeof(one);//利用sizeof函数检测数组one长度;Using the sizeof function to detect an array length
	a /= 4;//int字长为4字节，除4求得数组one最大下标;The int word length is 4 bytes, except for 4 to get the array one largest index;

	for (i = 0; i < a; i++)//利用for循环与if判断对数组数据进行比较;Use the for loop to compare the array data with if
	{
		for (j = a - 1; j > 0; j--)/*由于C语言中数组元素下标是从0开始的,数组one最大下标实际应为5,所以此处a-1是为了求得数组one实际最大下标，将其赋予变量j,循环条件表达式设置为j--,从数组最后一位进行比较;
								   Since the index of the array element in the C language starts from 0, the maximum index of the array one should be 5, so here a-1 is to get the actual maximum index of the array one, assign it to the variable j, and express the loop condition. Set to j--, comparing from the last bit in the array*/
		{
			if (one[j - 1] > one[j])//one[j-1],每比较一次下标都会减一,避免了两个相同的下标进行比较;one[j-1] will be decremented by one every time a subscript is compared, avoiding the comparison of two identical subscripts
			{
				b = one[j - 1];//进行数据交换,将one[j-1]中的数据赋予变量b;Perform data exchange and assign data in one [J-1] to variable b
				one[j - 1] = one[j];//进行数据交换,将one[j-1]中的数据赋予one[j],将大的数据(泡泡)存储至数组后面的空间中;Performing data exchange, assigning data in one [J-1] to one [j], storing large data (bubbles) in the space behind the array
				one[j] = b;//进行数据交换,将变量b的值赋予one[j],实现小的数据(泡泡)存储至数组前面的空间中去;Data exchange, when the value of variable b is assigned to a [j], small data (bubbles) are stored in the space in front of the array
			}
		}
	}

	for (i = 0; i < a; i++)//将排序好的数组输出;Will sort the array output
	{
		printf("%d ", one[i]);
	}
	printf("\n");

	system("pause");
	return 0;//English annotation is machine translation, if there is deviation, please forgive.
}