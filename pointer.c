#include <stdio.h>
//指针类型的意义
//1.指针类型决定了：指针解引用的权限多大
//2.指针类型决定了：指针走一步，走多远（步长）

//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);//跳过一个整形
//	printf("%p\n", pc);
//	printf("%p\n", pc+1); //跳过一个字符
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	return 0;
//}

//int main()
//{
//	//野指针
//	int* p;//局部变量未初始化，默认为随机值
//	*p = 20;//非法访问内存了
//	return 0;
//}


//越界访问
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

//指针指向的空间释放了

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
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	int* p = NULL;
//	//明确初始化的值
//	int a = 10;
//	int* pa = &a;
//
//
//	//C语言本身是不会检查数组越界的
//
//	//指针指向空间被释放后使其置为NULL
//
//
//	//指针使用之前检查有效性
//	int* p = NULL;
//
//	if (p != NULL)
//		*p = 10;
//
//
//	return 0;
//}

//指针运算

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数：指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}


//指针-指针得到的是两个指针之间的元素个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//printf("%d\n", &arr[9] - &arr[0]);
//	char c[5];
//
//	//指针与指针相减的前提是为同类型指针
//	/*printf("%d\n", &arr[9] - c[5]);*/
//
//	return 0;
//}


//#include <string.h>
//
//int mystrlen(char* arr)
//{


	//递归

	//if (*arr != 0)
	//	return 1 + mystrlen(arr + 1);


	//计数器



	//int count = 0;
	//while (*arr != '\0')
	//{
	//	count++;
	//	arr++;
	//}
	//return count;


	//指针相减

	//char* start = arr;
	//while (*arr != 0)
	//{
	//	arr++;
	//}
	//return arr - start;
//}
 
//int main()
//{
//	//strlen(); - 求字符串长度
//	int len = mystrlen("abcdefu");//传递的是字符串第一个字符的地址
//	printf("%d\n", len);
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//可以与数组最后元素的后一位比较，不能与最前面的前一位比较
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
// //p里存的即为数组首元素地址
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%p <==> %p \n", &arr[i], p + i);
//	}
//	return 0;
//}

//二级指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa为指针变量，一级指针
//
//	//ppa就是一个二级指针变量
//	int** ppa = * pa;//pa也是个变量，&pa取出pa在内存中起始地址
//
//	printf("%d\n%d", *pa, **ppa);
//	return 0;
//}



//指针数组 - 数组

//int main()
//{
//	int arr[10];//整形数组 - 存放整形的数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* pch[5];//字符指针的数组
//	return 0;
//}



