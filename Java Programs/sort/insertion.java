public class insertion
{
   public static void main(String args[] )
   {
     int arr[] = { 25, 17, 31, 13, 2 } ;
     int i, j, k, temp ;
    System.out.print( "Insertion sort.\n" ) ;
    System.out.print( "\nArray before sorting:\n") ;
    for ( i = 0 ; i <= 4 ; i++ )
        System.out.print( "\t"+ arr[i] ) ;
    for ( i = 1 ; i <= 4 ; i++ )
    {
        for ( j = 0 ; j < i ; j++ )
        {
            if ( arr[j] > arr[i] )
            {
                temp = arr[j] ;
                arr[j] = arr[i] ;

                for ( k = i ; k > j ; k-- )
                    arr[k] = arr[k - 1] ;

                arr[k + 1] = temp ;
            }
        }
    }
    System.out.print( "\n\nArray after sorting:\n") ;
    for ( i = 0 ; i <= 4 ; i++ )
        System.out.print( "\t"+ arr[i] ) ;
   }
}
