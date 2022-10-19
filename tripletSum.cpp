//Triplet sum

//You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the array/list which sum to X.
//Note :
//Given array/list can contain duplicate elements.
void merge(int *arr, int s, int mid, int e)
{
    int left = mid - s + 1;
    int right = e - mid;
    int n = left + right;

    int leftArray[left], rightArray[right], finalArray[n];

    for (int i = 0, j = s; i < left; i++, j++)
    {
        leftArray[i] = arr[j];
    }

    for (int i = 0, j = mid + 1; i < right; i++, j++)
    {
        rightArray[i] = arr[j];
    }

    int i = 0, j = 0, k = 0;

    while (k < n)
    {
        if (i == left)
        {
            finalArray[k] = rightArray[j];
            j++;
        }
        else if (j == right)
        {
            finalArray[k] = leftArray[i];
            i++;
        }
        else if (leftArray[i] <= rightArray[j])
        {
            finalArray[k] = leftArray[i];
            i++;
        }
        else
        {
            finalArray[k] = rightArray[j];
            j++;
        }

        k++;
    }

    for (int i = 0, j = s; i < n; i++, j++)
    {
        arr[j] = finalArray[i];
    }
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int pairSum(int *arr, int startIndex, int endIndex, int num)
{
    int numPair = 0;
    while (startIndex < endIndex)
    {
        if (arr[startIndex] + arr[endIndex] < num)
        {
            startIndex++;
        }
        else if (arr[startIndex] + arr[endIndex] > num)
        {
            endIndex--;
        }
        else
        {
            int elementAtStart = arr[startIndex];
            int elementAtEnd = arr[endIndex];
            if (elementAtStart == elementAtEnd)
            {
                int totalElementsFromStartToEnd = (endIndex - startIndex) + 1;
                numPair += (totalElementsFromStartToEnd * (totalElementsFromStartToEnd - 1) / 2);
                return numPair;
            }
            int tempStartIndex = startIndex + 1;
            int tempEndIndex = endIndex - 1;
            while (tempStartIndex <= tempEndIndex && arr[tempStartIndex] == elementAtStart)
            {
                tempStartIndex += 1;
            }
            while (tempEndIndex >= tempStartIndex && arr[tempEndIndex] == elementAtEnd)
            {
                tempEndIndex -= 1;
            }
            int totalElementsFromStart = (tempStartIndex - startIndex);
            int totalElementsFromEnd = (endIndex - tempEndIndex);
            numPair += (totalElementsFromStart * totalElementsFromEnd);
            startIndex = tempStartIndex;
            endIndex = tempEndIndex;
        }
    }
    return numPair;
}

int tripletSum(int *arr, int n, int num)
{
    mergeSort(arr, 0, n-1);
    int numTriplets = 0;
    for (int i = 0; i < n; i++)
    {
        int pairSumFor = num - arr[i];
        int numPairs = pairSum(arr, (i + 1), (n - 1), pairSumFor);
        numTriplets += numPairs;
    }
    return numTriplets;
}
