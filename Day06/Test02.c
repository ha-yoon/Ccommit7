#include <stdio.h>

// ����
// ö���� ������ ����, ����, ���� ������ �Է� ���� ��
// �� ������ ������ ����ü ��� total�� �Ҵ����ִ� �Լ�, 
// �� ���� �޾� ����� ����ü ��� avg�� �Ҵ����ִ� �Լ�, 
// ����� ���� ����� ����ü ��� grade�� �Ҵ����ִ� �Լ��� 
// �ۼ��ϰ� main���� �� ����, ���, ����� ����غ�����. 
// (90�� �̻��� A, 80�� �̻��� B, 70�� �̻��� C, 60�� �̻��� D, 60�� �̸��� F)
// �� ��� �Լ��� ��ȯ���� �������� �ʴ� ���·� �ۼ��غ�����.
// �� �ʿ��� �������� ����ü�� ���ؼ� �����ϼ���. 


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

	//printf("���� ���� ���� ���� �Է� : ");
	//scanf("%d %d %d", &st.kor, &st.math, &st.eng);

	//Total(st.kor, st.math, st.eng, &st.total);
	//Avg(st.total, &st.avg);
	//Grade(st.avg, &st.grade);

	//printf("����: %d\n", st.total);
	//printf("���: %.2f\n", st.avg);
	//printf("���: %c\n", st.grade);

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

	printf("���: %d %d\n", d.data1, d.data2);

	return 0;
}
