void Sort012(int *arr, int n)
{
   int hi=n-1;
   int low=0;
   int mid=0;
   while(mid<=hi)
   {
      if(arr[mid]==0)
      {
         swap(arr[low++],arr[mid++]);
      }
     else if(arr[mid]==1)
      {
       mid++;
      }
     else if(arr[mid]==2)
      {
         swap(arr[mid],arr[hi--]); 
      }
   }
}

