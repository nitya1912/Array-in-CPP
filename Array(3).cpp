#include <iostream>
using namespace std;
   
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if(max < arr[i])
        { 
            max == arr[i];
        }
    }
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > arr[i])
        {
            min == arr[i];
        }
    }
    cout << "Largest element : " << max;
    cout << "Smallest element : " << min;
    return 0;
}
