#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	int a = 1000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("myfile.txt", "w");
//	if (pf != NULL)
//	{
//		fputs("fopen example", pf);
//		fclose(pf);
//		pf = NULL;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("example.txt", "wb");
//	fputs("this is an apple.", pf);
//	fseek(pf, 9, SEEK_SET);
//	fputs(" sam", pf);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("myfile.txt", "rb");
//	long size;
//	if (pf == NULL)
//	{
//		/*peeror("error opening file");*/
//	}
//	else
//	{
//		fseek(pf, 0, SEEK_END);
//		size = ftell(pf);
//		fclose(pf);
//		pf = NULL;
//		printf("size of myfile.txt: %ld bytes\n", size);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n;
//	char buffer[27];
//	FILE* pf = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//	{
//		fputc(n, pf);
//	}
//	rewind(pf);
//	fread(buffer, 1, 26, pf);
//	fclose(pf);
//	pf = NULL;
//	buffer[26] = '\0';
//	puts(buffer);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int c;
//	FILE* pf = fopen("test.txt", "r");
//	while ((c = fgetc(pf)) != EOF)
//	{
//		putchar(c);
//	}
//	if (ferror(pf))
//	{
//		puts("I/O error when reading");
//	}
//	else if (feof(pf))
//	{
//		puts("end of file reached successfully");
//	}
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}

int main()
{
	printf("%d\n", '1' - '0');
	system("pause");
	return 0;
}