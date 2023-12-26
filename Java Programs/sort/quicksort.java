//QUICK SORT program
public class quicksort
{
  
public static void main(String args[] )
{
	int arr[] = { 11, 2, 9, 13, 57, 25, 17, 1, 90, 3, 99 } ;
	int i ;

	System.out.print ( "Quick sort.\n" ) ;
	System.out.print ( "\nArray before sorting:\n") ;

	for ( i = 0 ; i <= 9 ; i++ )
		System.out.print( "\t"+ arr[i] ) ;

	quicksort ( arr, 0, 9 ) ;

	System.out.print ( "\nArray after sorting:\n") ;

	for ( i = 0 ; i <= 9 ; i++ )
		System.out.print ( "\t"+ arr[i] ) ;

}
//Quick sort Recursive Function
public static void quicksort ( int a[ ], int lower, int upper )
{
	int i ;
	if ( upper > lower )
	{
		i = split ( a, lower, upper ) ;
		quicksort ( a, lower, i - 1 ) ;
		quicksort ( a, i + 1, upper ) ;
	}
}
//Function to divide array into two parts
public static int split ( int a[ ], int lower, int upper )
{
	int i, p, q, t ;

	p = lower + 1 ;
	q = upper ;
	i = a[lower] ;

	while ( q >= p )
	{
		while ( a[p] < i )
			p++ ;

		while ( a[q] > i )
			q-- ;

		if ( q > p )
		{
			t = a[p] ;
			a[p] = a[q] ;
			a[q] = t ;
		}
	}
	t = a[lower] ;
	a[lower] = a[q] ;
	a[q] = t ;
	return q ;
}
}
