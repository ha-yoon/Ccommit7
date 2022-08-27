#include <stdio.h>

// ---- 구조체 ----
// 여러개의 멤버들을 모아서 하나의 새로운 자료형을 만드는 개념
// 구조체 변수의 멤버에 접근할 때는 구조체 변수, 멤버 형식으로 접근한다. 
//      ex) struct Data d;
//				d.datal = 10;
// 구조체의 크기는 구조체 멤버들을 모두 더한 크기이다. 
//
// 기본 구조체 정의 원형:
//   struct 구조체 이름 {
//			멤버;
//		};


// ---- 구조체 포인터 ----
// 구조체 포인터를 이용해서 역참조를 진행할 때는 기본적으로 ->(애로우)를 사용해서 진행한다. 
// 별도로 *를 사용할 수 있는데 이 때는 우선 순위 때문에 괄호로 묶어준다. 
//			ex) (*d).data1 == d -> data1


// 별칭 구조체 정의
// 별칭 구조체를 사용하면 구조체 이름, 별칭 모두 사용 가능 
//typedef struct Data {     //struct Data 가 너무 길기 때문에 typedef를 이용해 별칭을 사용
//	int data1;
//	int data2;
//	
//}Da;     //Da 로 별칭 정의 


// 익명 구조체 정의
// 익명 구조체를 사용하면 구조체 이름으로 변수 선언 x, 별칭만 사용 가능
typedef struct {     
	int data1;
	int data2;

}Da;     //Da 로 별칭 정의 

int main()
{
	struct Data d;
	Da d2;     //위에서 정의한 별칭 구조체 사용

	d.data1 = 10;
	d.data2 = 20;

	printf("출력: %d %d\n", d.data1, d.data2);
	printf("d의 크기: %d\n", sizeof(d));

	return 0;
}