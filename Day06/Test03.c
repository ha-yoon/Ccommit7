// ����
// ö���� ������ ����, ����, ���� ������ �Է� ���� ��
// �� ������ ������ ����ü ��� total�� �Ҵ����ִ� �Լ�, 
// �� ���� �޾� ����� ����ü ��� avg�� �Ҵ����ִ� �Լ�, 
// ����� ���� ����� ����ü ��� grade�� �Ҵ����ִ� �Լ��� 
// �ۼ��ϰ� main���� �� ����, ���, ����� ����غ�����. 
// (90�� �̻��� A, 80�� �̻��� B, 70�� �̻��� C, 60�� �̻��� D, 60�� �̸��� F)
// �� ��� �Լ��� ��ȯ���� �������� �ʴ� ���·� �ۼ��غ�����.
// �� �ʿ��� �������� ����ü�� ���ؼ� �����ϼ���. 


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

	printf("����, ����, ���� ���� �Է� : ");
	scanf("%d %d %d", &st.kor, &st.mat, &st.eng);

	Total(&st);
	Avg(&st);
	Grade(&st);

	printf("����: %d\n", st.total);
	printf("���: %.2f\n", st.avg);
	printf("���: %c\n", st.grade);


	return 0;
}