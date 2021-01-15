def merge(left, middle, right):
        left_array = []
        right_array = []
        for i in range(left, middle+1):
            left_array.append(a[i])
        for i in range(middle+1, right+1):
            right_array.append(a[i])
        l = 0
        r = 0
        m = left
        while(l < len(left_array) and r < len(right_array)):
            if (left_array[l] <= right_array[r]):
                a[m] = left_array[l]
                l += 1
                m += 1
            elif (right_array[r] < left_array[l]):
                a[m] = right_array[r]
                r += 1
                m += 1
                global numberOfInversion
                numberOfInversion += len(left_array) - l
        while(l < len(left_array)):
            a[m] = left_array[l]
            m += 1
            l += 1
        while(r < len(right_array)):
            a[m] = right_array[r]
            m += 1
            r += 1
    def mergeSort(left, right):
        if (left < right):
            middle = int((left + right) / 2)
            mergeSort(left, middle)
            mergeSort(middle+1, right)
            merge(left, middle, right)
    global numberOfInversion
    numberOfInversion = 0
    mergeSort(0, n-1)
    return numberOfInversion
