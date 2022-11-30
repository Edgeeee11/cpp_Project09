#include<iostream>

using namespace std;

int main()

{
    int N;
    int Array[N];

	printf("Enter a number");
	scanf("%i", &N);

    for(int i = 0; i < N; i++)
    {
        cout<<"Your massive ["<<i<<"] = ";
        cin>>Array[i];
    }
    float Max = Array[0],Min = Array[0];
    for(int i = 1; i < N; i++)
    {
        if(Max < Array[i])
            Max = Array[i];
        if(Min > Array[i])
            Min = Array[i];
    }
    cout<<"Max: "<< Max << endl;
    cout<<"Min: "<< Min << endl;

  	int sum = Max + Min;
    printf("Your summa of massive's elements is = %i", sum);
    float sum2 = (Max + Min)/2;
    printf("Your srednee  arefmet of massive's elements is = %f", sum2);
}
