int minSwap(int *arr, int n, int k) {
    
    int mi=INT_MAX;
    int count=0;
    int good=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            good++;
        }
    }
    
    int bad=0;
    for(int i=0;i<good;i++)
    {
        if(arr[i]>k)
        {
            bad++;
        }
    }
    int i=0,j=good-1;
    while(j<n)
    {
        mi=min(mi,bad);
        j++;
        if(j<n&&arr[j]>k)
        {
            bad++;
        }
        if(arr[i]>k)
        {
            bad--;
        }
        i++;
    }
    if(mi==INT_MAX)
    {
        return 0;
    }
    else
    {
        return mi;
    }
}
