
package allpackages;

public class ArrayRotation {
    static void rotation(int a[], int d)
    {
        if(d  == 0)
            return;
        int n = a.length;
        reverse(a, 0, d - 1);
        reverse(a, d, n - 1);
        reverse(a, 0, n - 1);
        
    }
    static void reverse(int a[], int s, int e)
    {
        int temp;
        while(s < e)
        {
            temp = a[s];
            a[s] = a[e];
            a[e] = temp;
            s++;
            e--;
        }
    }
    
    static void printarray(int a[])
    {
        int n = a.length;
        for(int i = 0; i < n; i++)
        {
            System.out.print(a[i] + " ");
        }
    }
    
    public static void main(String[] args)
    {
        int arr[] = {1, 2, 3, 4, 5, 6, 7};
        int d = 2;
        rotation(arr, d);
        printarray(arr);
        
    }
    
}
