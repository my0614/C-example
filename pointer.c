#include <stdio.h>

void get_int(int *px, int *py)
{
	printf("정수의 합은 %d",*px+*py); // get_int의 인수로 받은 px,py의 수조의 값을 더하기 
}

int main()
{
	int a,b;
	printf("2개의 정수를 입력하시오(예 : 10 20) : "); 
	scanf("%d %d",&a,&b); // 2개의 값 입력받기 
	int *px; // 포인터 변수선언 
	int *py; // 포인터 변수선언 
	
	px = &a; // 입력받은 a의 주소를 가르키도록 
	py = &b; // 입력답은 b의 주소를 가르키도록 

	get_int(px,py); // get_int라는 함수의 매개변수에 입력값의 주소를 가르키는 변수 넣어주기 
	return 0;
}
