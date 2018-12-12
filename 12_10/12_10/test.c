////1.模拟实现strncpy 
////2.模拟实现strncat
////3.模拟实现strncmp
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//char* my_strncpy(char* q,const char* p, int n)
//{
//	char* str = q;
//	assert(q);
//	assert(p);
//	//拷贝字符到目标字符串
//	while (n && (*q++ = *p++))
//	{
//		n--;
//	}
//	//如果源字符串长度小于n，则后面加0，直到n个
//	if (n)
//	{
//		while (--n)
//		{
//			*q++ = '\0 ';
//		}
//	}
//	return str;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	printf("%s\n",my_strncpy(arr, "i love you", 10));
//  
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//char* my_strncat(char* q, const char* p, int n)
//{
//	char* str = q;
//	assert(q);
//	assert(p);
//	while (*q)
//	{
//		q++;
//	}
//	while (n--)
//	{
//		if (!(*q++ = *p++))
//		{
//			return str;
//		}
//	}
//	*q = '\0';
//	return str;
//}
//int main()
//{
//	char arr[20] = "i love " ;
//	printf("%s\n",my_strncat(arr, "you are ", 3));
//	system("pause");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//int my_strncmp(const char* q, const char* p, int n)
//{
//	assert(q);
//	assert(p);
//	if (n == 0)
//	{
//		return 0;
//	}
//	while ((n--) && *q && *p && (*q == *p))
//	{
//		q++;
//		p++;
//	}
//	return *q - *p;
//}
//int main()
//{
//	char arr[20] = "i love you";
//	printf("%d\n", my_strncmp(arr, "i like you", 6));
//	system("pause");
//	return 0;
//}