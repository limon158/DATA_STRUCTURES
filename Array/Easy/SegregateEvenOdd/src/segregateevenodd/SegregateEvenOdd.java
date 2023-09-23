/*
Segregate even and odd numbers using Lomuto’s Partition Scheme
*/
package segregateevenodd;

public class SegregateEvenOdd {
    static void evenOdd(int a[], int n)
    {
        int i = -1, j = 0;
        while (j != n)
        {
            if(a[j] % 2 == 0)
            {
                i++;
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        
        for (int k = 0; k < n; k++)
        {
            System.out.print(a[k] + " ");
        }
    }

    public static void main(String[] args) {
//        int array[] = {7, 2, 9, 4, 6, 1, 3, 8, 5};
        int array[] = {6, 7, 2, 5, 4, 1, 9, 8};
        int n = array.length;
        
        evenOdd(array, n);
    }
    
}
