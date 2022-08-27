// 문제
// 철수의 성적을 국어, 수학, 영어 순서로 입력 받은 뒤
// 세 성적의 총합을 구조체 멤버 total에 할당해주는 함수, 
// 그 값을 받아 평균을 구조체 멤버 avg에 할당해주는 함수, 
// 평균을 비교해 등급을 구조체 멤버 grade에 할당해주는 함수를 
// 작성하고 main에서 각 총합, 평균, 등급을 출력해보세요. 
// (90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 60점 미만은 F)
// ※ 모든 함수는 반환값이 존재하지 않는 형태로 작성해보세요.
// ※ 필요한 변수들은 구조체를 통해서 선언하세요. 


#include <stdio.h>

typedef struct {
	int kor, mat, eng, total;
	double avg;
	char grade;
}Student;


void Total(Student* st)
{
	st->total = st->kor + st->mat + st->eng;
}

void Avg(Student* st)
{
	st->avg = st->total / 3.0;
}

void Grade(Student* st)
{
	switch ((int)st->avg / 10)
	{
	case 10:
	case 9:
		st->grade = 'A';
		break;
	case 8:
		st->grade = 'B';
		break;
	case 7:
		st->grade = 'C';
		break;
	case 6:
		st->grade = 'D';
		break;
	default:
		st->grade = 'F';
		break;
		}
}

int main()
{



	Student st;

	printf("국어, 수학, 영어 성적 입력 : ");
	scanf("%d %d %d", &st.kor, &st.mat, &st.eng);

	Total(&st);
	Avg(&st);
	Grade(&st);

	printf("총합: %d\n", st.total);
	printf("평균: %.2f\n", st.avg);
	printf("등급: %c\n", st.grade);


	return 0;
}