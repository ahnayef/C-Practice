#include <iostream>
#include <string>

using namespace std;




// void bubbleSort(int arr[], int len)
// {
//     for (int i = 0; i < len -1; i++)
//     {
//         for (int j = 0; j < len -i -1; j++)
//         {
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
        
//     }
    
// }

int main()
{

    string s;

    cin >> s;

    // int arr[5] = {2, 8, 9, 1, 3};

    // bubbleSort(arr, 5);

    int n=0;
   
    int nums[100];
    int arrlen=0;





   while (s[n]!='\0')
   {
    if (s[n]!='+')
    {
        nums[arrlen]= int(s[n] - 0);
    }
    
    n++;
   }

   
   for (int i = 0; i < arrlen+1; i++)
   {
    cout<<nums[i] << " ";
   }
   
   
    
    

    return 0;
}