#include <stdio.h>
//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ�޶��
//2.ָ�����;����ˣ�ָ����һ�����߶�Զ��������

//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);//����һ������
//	printf("%p\n", pc);
//	printf("%p\n", pc+1); //����һ���ַ�
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	return 0;
//}

//int main()
//{
//	//Ұָ��
//	int* p;//�ֲ�����δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;//�Ƿ������ڴ���
//	return 0;
//}


//Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//ָ��ָ��Ŀռ��ͷ���

//int *test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	printf("%d", );
//	return 0;
//}

//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	int* p = NULL;
//	//��ȷ��ʼ����ֵ
//	int a = 10;
//	int* pa = &a;
//
//
//	//C���Ա����ǲ���������Խ���
//
//	//ָ��ָ��ռ䱻�ͷź�ʹ����ΪNULL
//
//
//	//ָ��ʹ��֮ǰ�����Ч��
//	int* p = NULL;
//
//	if (p != NULL)
//		*p = 10;
//
//
//	return 0;
//}

//ָ������

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//ָ��+-������ָ��Ĺ�ϵ����
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}


//ָ��-ָ��õ���������ָ��֮���Ԫ�ظ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//printf("%d\n", &arr[9] - &arr[0]);
//	char c[5];
//
//	//ָ����ָ�������ǰ����Ϊͬ����ָ��
//	/*printf("%d\n", &arr[9] - c[5]);*/
//
//	return 0;
//}


//#include <string.h>
//
//int mystrlen(char* arr)
//{


	//�ݹ�

	//if (*arr != 0)
	//	return 1 + mystrlen(arr + 1);


	//������



	//int count = 0;
	//while (*arr != '\0')
	//{
	//	count++;
	//	arr++;
	//}
	//return count;


	//ָ�����

	//char* start = arr;
	//while (*arr != 0)
	//{
	//	arr++;
	//}
	//return arr - start;
//}
 
//int main()
//{
//	//strlen(); - ���ַ�������
//	int len = mystrlen("abcdefu");//���ݵ����ַ�����һ���ַ��ĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//�������������Ԫ�صĺ�һλ�Ƚϣ���������ǰ���ǰһλ�Ƚ�
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
// //p���ļ�Ϊ������Ԫ�ص�ַ
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%p <==> %p \n", &arr[i], p + i);
//	}
//	return 0;
//}

//����ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;//paΪָ�������һ��ָ��
//
//	//ppa����һ������ָ�����
//	int** ppa = * pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
//
//	printf("%d\n%d", *pa, **ppa);
//	return 0;
//}



//ָ������ - ����

//int main()
//{
//	int arr[10];//�������� - ������ε�����
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5];//�ַ�ָ�������
//	return 0;
//}



