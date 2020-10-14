#include <stdio.h>
#include <stdlib.h> //랜덤함수 호출

void Swap(int arr[], int a, int b) // a,b 스왑 함수 
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int divide(int arr[], int left, int right)
{
	int pivot = arr[letf]; // 피봇 기준 선언
	int low = left + 1;
	int hight = right; /// right를 기본적으로 high로 정한다. 
	
	while(low <= right && pivot >= arr[low]) // 피봇보다 큰값 
	{
		low++;
	}
	while(high > = (left+1) && pivot <= arr[high]) // 피봇보다 작은 값
	{
		high--; 
	}
	while
}
int Partition(int arr[], int left, int right)
{
    int pivot = arr[left];
    int low = left + 1;
    int high = right;
 
    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (low <= right && pivot >= arr[low]) // 피벗보다 큰 값을 찾는 과정 
        {
            low++;  
        }
        while (high >= (left+1)  && pivot <= arr[high]) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; 
        }
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            Swap(arr, low, high);  
        }
    }
    Swap(arr, left, high); // 피벗과 high가 가리키는 대상을 교환 
    return high;  // 옮겨진 피벗의 위치정보를 반환 
 
}
 
 
void QuickSort(int arr[], int left, int right)
{
    if (left <= right)
    {
        int pivot = Partition(arr, left, right); // 둘로 나누어서
        QuickSort(arr, left, pivot - 1); // 왼쪽 영역을 정렬한다.
        QuickSort(arr, pivot + 1, right); // 오른쪽 영역을 정렬한다.
    }
}

int main()
{
    int n,i;
   

	
    printf("size :");
    scanf("%d",&n);
	int *arr = (int)malloc(sizeof(int) * n); // 동적할당 
	for(i = 0 ; i < n ; i++)
		 arr[i]=rand()%n;

	 

    QuickSort(arr,0,n-1);

	printf("\n\n result\n\n")
    for(i = 0 ; i < n ; i++)
        printf("%d ", arr[i]);
	printf("\n");

    return 0;
}
