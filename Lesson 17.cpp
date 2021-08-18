
#include <iostream>
#include <chrono>
#include <ctime>   

int correctDay()
{
	struct tm newtime;
	time_t t = time(nullptr);
	localtime_s(&newtime, &t);
	return newtime.tm_mday;
}

int main()
{
	int  Sum;
	const int N = 3;
	int array[N][N]  ;
	for (int i = 0; i < N; i++)
	{
		
		for (int j = 0; j < N; j++)
		{
			
			Sum = i + j;
			std::cout << "Array element=" << Sum << " ";
		
			if (Sum == correctDay() % N)
			{
				std::cout <<"\n"<<"Summa equal to modulo=" << Sum<<" ";
			}
		    

		}
	}
}