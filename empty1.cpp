/*
请编写一个函数fun，它的功能是:
将ss所指字符串中所有下标为奇数位置上的字母转换成大写（若该位置上不是字母，则不转换）。
例如，若输入"abc4EFG"，则应输出"aBc4EFG"。
*/

#include <stdio.h>
#include <string.h>
void fun(char *ss)
{
	int i = 0;
	while (ss[i] != '\0') {  // 遍历字符串
		if (i % 2 == 1 && ss[i] >= 'a' && ss[i] <= 'z') {
			// 如果索引为奇数，且是小写字母，则转换为大写
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