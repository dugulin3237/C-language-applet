/*
 *The author:Dugu Lin3237
 *Completion Date:2018/5/4
 *Introduction:Bubble algorithm C language ascending order
 *����:������3237
 *�������:2018/5/4
 *���:ð���㷨C��������ʵ��
 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int one[6] = { 3,5,2,7,1,9 };
	int i,j,a,b;
	b = 0;

	a = sizeof(one);//����sizeof�����������one����;Using the sizeof function to detect an array length
	a /= 4;//int�ֳ�Ϊ4�ֽڣ���4�������one����±�;The int word length is 4 bytes, except for 4 to get the array one largest index;

	for (i = 0; i < a; i++)//����forѭ����if�ж϶��������ݽ��бȽ�;Use the for loop to compare the array data with if
	{
		for (j = a - 1; j > 0; j--)/*����C����������Ԫ���±��Ǵ�0��ʼ��,����one����±�ʵ��ӦΪ5,���Դ˴�a-1��Ϊ���������oneʵ������±꣬���丳�����j,ѭ���������ʽ����Ϊj--,���������һλ���бȽ�;
								   Since the index of the array element in the C language starts from 0, the maximum index of the array one should be 5, so here a-1 is to get the actual maximum index of the array one, assign it to the variable j, and express the loop condition. Set to j--, comparing from the last bit in the array*/
		{
			if (one[j - 1] > one[j])//one[j-1],ÿ�Ƚ�һ���±궼���һ,������������ͬ���±���бȽ�;one[j-1] will be decremented by one every time a subscript is compared, avoiding the comparison of two identical subscripts
			{
				b = one[j - 1];//�������ݽ���,��one[j-1]�е����ݸ������b;Perform data exchange and assign data in one [J-1] to variable b
				one[j - 1] = one[j];//�������ݽ���,��one[j-1]�е����ݸ���one[j],���������(����)�洢���������Ŀռ���;Performing data exchange, assigning data in one [J-1] to one [j], storing large data (bubbles) in the space behind the array
				one[j] = b;//�������ݽ���,������b��ֵ����one[j],ʵ��С������(����)�洢������ǰ��Ŀռ���ȥ;Data exchange, when the value of variable b is assigned to a [j], small data (bubbles) are stored in the space in front of the array
			}
		}
	}

	for (i = 0; i < a; i++)//������õ��������;Will sort the array output
	{
		printf("%d ", one[i]);
	}
	printf("\n");

	system("pause");
	return 0;//English annotation is machine translation, if there is deviation, please forgive.
}