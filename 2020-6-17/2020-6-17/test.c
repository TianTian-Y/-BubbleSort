#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)


//int BubbleSort(int *arr, int num)
//{
//	int i = 0;
//	
//	for (; i < num-1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//				for (; j<num-1-i; j++)
//				{
//					if (arr[j]>arr[j + 1]){
//						int temp = 0;
//						temp = arr[j];
//						arr[j] = arr[j + 1];
//						arr[j + 1] = temp;
//						flag = 0;
//					}
//				}
//				if (1 == flag){
//					break;
//				}
//
//	}
//}
void Show(int arr[], int num)
{
	int i = 0;
	for (; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//int BubbleSort(int *arr, int num)
//{
//	int i = 0;
//	
//	for (; i < num-1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//				for (; j<num-1-i; j++)
//				{
//					if (arr[j]>arr[j + 1]){
//						int temp = 0;
//						temp = arr[j];
//						arr[j] = arr[j + 1];
//						arr[j + 1] = temp;
//						flag = 0;
//					}
//				}
//				if (1 == flag){
//					break;
//				}
//
//	}
//}
//init(int arr[], int num)
//{
//	int i = 0;
//	for (; i < num; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//void reverse(int *arr, int num)
//{
//	int i = 0;
//	for (; i < num; i++)
//	{
//		if (i != num - 1 - i){
//			int temp = 0;
//			temp = arr[i];
//			arr[i] = arr[num - 1 - i];
//			arr[num - 1 - i] = temp;
//		}
//		else{
//			break;
//		}
//		
//	}
//}
void Swap(int a[], int num1,int b[], int num2)
{
	int i = 0;
	for (; i < num1; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 0 };
	int num1 = 0;
	int num2 = 0;
	num1 = sizeof(a) / sizeof(a[0]);
	num2 = sizeof(b) / sizeof(b[0]);
	//init(arr, num);
	Show(a, num1);
	Show(b, num1);
	Swap(a, num1,b, num2);
	//reverse(arr, num);
	Show(a, num1);
	Show(b, num1);
	//Show(arr, num);
	//BubbleSort(arr, num);
	//Show(arr, num);
	system("pause");
	return 0;
}