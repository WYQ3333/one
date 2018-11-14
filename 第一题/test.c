//��һ�⣺
//ʾ�� :
//���� : [1, 8, 6, 2, 5, 4, 8, 3, 7]
//��� : 49

//ͷ�ļ���Ϊ�˲��Լ��ϵ�
#include<stdio.h>
#include<Windows.h>

int maxArea(int* height, int heightSize) {
	int i = 0;
	int j = 0;
	int max = 0;
	for (i = 0; i < heightSize; i++)
	{
		for (j = i + 1; j < heightSize; j++)
		{
			int ret = height[i]>height[j] ? (height[j] * (j - i)) : (height[i] * (j - i));
			if (ret >= max)
			{
				max = ret;
			}
		}
	}
	return max;
}

/////////////////////////////////////////////////
//���Դ��룺
int main()
{
	int height[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
	int heightSize = sizeof(height) / sizeof(height[0]);
	int ret = maxArea(height, heightSize);
	printf("%d ", ret);
	system("pause");
	return 0;
}
