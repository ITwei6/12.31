#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char board[3][3];
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			scanf("%c ", &board[i][j]);
//		}
//	}
//	
//	return 0;
//}
//scanf(" %c"),%c前面加上一个空格，可以消除字符之前的空白部分！也可以getchar（）消除空白部分
int main()
{
	char s[100];
	scanf("%s", &s);
	printf("%s", s);


#define _CRT_SECURE_NO_WARNINGS
	//试除法----求2-n之间的素数
#include <stdio.h>
//int main()
//{
//	int n;
//	int count = 0;
//	while (scanf("%d", &n) != -1)
//	{
//		int i;
//		for (i = 2;i <= n;i++)
//		{
//			//产生i~n的数字
//			//判断每个数字是否为素数
//			int j;
//			for (j = 2;j < i;j++)
//			{
//				if (i % j == 0)
//				{
//					count++;
//					break;
//				}
//			}
//			if (j == i)
//			{
//				printf("%d ", i);
//			}
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int count = 0;
//	int i, j;
//	int arr1[101][101];
//	int arr2[101][101];
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%.2f", 100.0 * count / (n * m));
//	return 0;
//}
//int main()
//{
//	char a, b;
//	while (scanf("%s%s", &a, &b) != -1)
//	{
//		if (a == "admin" && b == "admin")
//			printf("Login Success!\n");
//		else
//			printf("Login Fail!\n");
//	}
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char name[100];//字符串存放
//	char password[100];
//	while (scanf("%s %s", &name, &password) != -1)
//	{
//		//首先字符串之间比较不能用等号。
//		//字符串比较有个特定库函数用来比较字符串----strcmp
//		if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else
//			printf("Login Fail\n!");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1;i <= 2019;i++)
//	{
//		int m=i;
//		while (m)
//		{
//			
//			if (m%10 == 9)
//			{
//				count++;
//				break;
//			}
//			m = m / 10;


//		/*if (i % 10 == 9)
//		{
//			count++;
//		}
//		else if (i % 100 == 9)
//		{
//			count++;
//		}
//		else if (i % 1000 == 9)
//		{
//			count++;
//		}*/
//		
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	
//		int i;
//		int count = 0;
//		for (i = 1;i <= 2019;i++)
//		{
//			if (i % 10 == 9 || (i / 10) % 10 == 9 || (i / 10 / 10) % 10 == 9 || (i / 10 / 10 / 10) % 10 == 9)
//			{
//				count++;
//			}
//		}
//		printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	if (n % 2 == 1)
//	{
//		printf("%d %d", n / 2 + 1, n / 2);
//	}
//	else
//		printf("%d %d", n / 2, n / 2);
////	int a_count = 0;
////	int o_count = 0;
////	for (i = 1;i <= n;i++)
////	{
////		if (i % 2 == 0)
////		{
////			a_count++;
////		}
////		else
////		{
////			o_count++;
////		}
////	}
////	printf("%d %d", o_count, a_count);
//	return 0;
// }
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double score[101] = { 0 };
//	int i;
//	double max = 0.0;
//	double min = 100.0;
//	double sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%lf", &score[i]);
//		if (score[i] > max)
//		{
//			max = score[i];
//		}
//		if (score[i] < min)
//		{
//			min = score[i];
//		}
//		sum += score[i];
//	}
//	
//	
//	printf("%.2lf %.2lf %.2lf", max, min,sum/n );
//
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double score;
//	int i;
//	double max = 0.0;
//	double min = 100.0;
//	double sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%lf", &score);
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			max = score;
//		}
//		sum += score;
//	}
//	printf("%.2lf %.2lf %.lf", max, min, score / n);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[50];
//	int i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int insert;
//	scanf("%d", &insert);
//	for (i = n - 1;i >= 0;i--)
//	{
//		if (arr[i] > insert)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = insert;
//			break;
//		}
//	}
//	if (insert < arr[0])
//	{
//		arr[0] =insert;
//	}
//	for (i = 0;i < n + 1;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char password1[100];
//	char password2[100];
//	scanf("%s%s", &password1, &password2);
//	if (strcmp(password1, password2) == 0)
//	{
//		printf("same\n");
//	}
//	else
//	{
//		printf("different\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	int arr[10][10];
//	scanf("%d%d", &n, &m);
//	int i, j;
//	int sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9;i>=0;i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n, i;
//	int po = 0;
//	int ne = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &n);
//		if (n > 0)
//		{
//			po++;
//		}
//		else
//		{
//			ne++;
//		}
//	}
//	printf("positive:%d\nnegative:%d\n", po, ne);
//	return 0; 
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int arr[50];
//	int sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%d", sum);
//	return 0;
//}
	/*int main()
	{
		int n, score, i;
		scanf("%d", &n);
		int max = 0;
		int min = 1000;
		for (i = 0;i < n;i++)
		{
			scanf("%d", &score);
			if (score > max)
			{
				max = score;
			}
			if (score < min)
			{
				min = score;
			}
		}
		printf("%d", max - min);
		return 0;
	}
}*/