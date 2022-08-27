#include <stdio.h>

// 문제
// 철수의 성적을 국어, 수학, 영어 순서로 입력 받은 뒤
// 세 성적의 총합을 구조체 멤버 total에 할당해주는 함수, 
// 그 값을 받아 평균을 구조체 멤버 avg에 할당해주는 함수, 
// 평균을 비교해 등급을 구조체 멤버 grade에 할당해주는 함수를 
// 작성하고 main에서 각 총합, 평균, 등급을 출력해보세요. 
// (90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 60점 미만은 F)
// ※ 모든 함수는 반환값이 존재하지 않는 형태로 작성해보세요.
// ※ 필요한 변수들은 구조체를 통해서 선언하세요. 


//typedef struct {
//	int kor, math, eng, total;
//	double avg;
//	char grade;
//}Student;
//
//void Total(int kor, int math, int eng, int* total)
//{
//	*total = kor + math + eng;
//}
//
//void Avg(int total, double* avg)
//{
//	*avg = total / 3.0;
//}
//
//void Grade(double avg, char* grade)
//{
//	switch ((int)avg / 10)
//	{
//	case 10:
//	case 9:
//		*grade = 'A';
//		break;
//	case 8:
//		*grade = 'B';
//		break;
//	case 7:
//		*grade = 'C';
//		break;
//	case 6:
//		*grade = 'D';
//		break;
//	default:
//		*grade = 'F';
//		break;
//	}
//}
	
	//Student st;

	//printf("국어 수학 영어 성적 입력 : ");
	//scanf("%d %d %d", &st.kor, &st.math, &st.eng);

	//Total(st.kor, st.math, st.eng, &st.total);
	//Avg(st.total, &st.avg);
	//Grade(st.avg, &st.grade);

	//printf("총합: %d\n", st.total);
	//printf("평균: %.2f\n", st.avg);
	//printf("등급: %c\n", st.grade);

typedef struct {
		int data1;
		int data2;

}Data;

void Func(Data* d)
{
	(*d).data1 = 11;
	d->data2 = 22;
}

int main()
{

	Data d;

	d.data1 = 10;
	d.data2 = 20;

	Func(&d);

	printf("출력: %d %d\n", d.data1, d.data2);

	return 0;
}
