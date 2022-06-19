void Leaders(int* arr,int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] < arr[j])
                break;
        }   
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
  }
}
