from typing import List

def commonPrefix(arr: List[str], n: int) -> str:
    # Write your code here
    arr.sort()

    ans=""

    l=min(len(arr[0]),len(arr[n-1]))

    fst = arr[0]

    lst = arr[n-1]

 

    for i in range(l):

        if(fst[i]==lst[i]):

            ans+=fst[i]

        else:

            break

    if(ans==""):

        return -1

    return ans