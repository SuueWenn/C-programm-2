/*
���дһ������fun�����Ĺ�����:
��ss��ָ�ַ����������±�Ϊ����λ���ϵ���ĸת���ɴ�д������λ���ϲ�����ĸ����ת������
���磬������"abc4EFG"����Ӧ���"aBc4EFG"��
*/

#include <stdio.h>
#include <string.h>
void fun(char *ss)
{
	int i = 0;
	while (ss[i] != '\0') {  // �����ַ���
		if (i % 2 == 1 && ss[i] >= 'a' && ss[i] <= 'z') {
			// �������Ϊ����������Сд��ĸ����ת��Ϊ��д
			ss[i] = ss[i] - 'a' + 'A';
		}
		i++;
	}
}

int main()
{
	char tt[51];
	printf("\nPlease enter an character string within 50 characters:\n");
	gets(tt);
	printf("\n\nAfter changing, the string\n  \"%s\"", tt);
	fun(tt);
	printf("\nbecomes\n  \"%s\"", tt);
	return 0;
}