import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class SetOperations {
	public static void main( String args[] ) throws IOException {
	BufferedReader obj = new BufferedReader( new InputStreamReader( System.in ) );
		int sizen1 = Integer.parseInt( args[ 0 ] );
		int sizen2 = Integer.parseInt( args[ 1 ] );
		int arrayn1[], arrayn2[], i, j, k, count;	
		arrayn1 = new int[ sizen1 ];
		arrayn2 = new int[ sizen2 ];
		System.out.println( "Enter the array elements(A)" );
		i = 0;
		for ( int i = 0 ;i <size1 ;i++){
			arrayn1[ i ] = Integer.parseInt( obj.readLine() );
		}
		System.out.println( "Enter the array elements(B)" );
		for ( int i = 0 ;i <size1 ;i++){
			arrayn2[ i ] = Integer.parseInt( obj.readLine() );
		}
		int union[]=new int[ sizen1 + sizen2 ];
		for( i = 0; i < sizen1; i++ ) {
			union[ i ] = arrayn1[ i ];
		}
		j = i;
		for( i = 0; i < sizen2; i++ ) {
			for( k = 0; k < j; k++ ) {
				if( arrayn2[ i ] == union[ k ] ) {
					break;
				}
			}
			if( k == j ) {
				union[ j++ ] = arrayn2[ i ];
			}
		}
		System.out.println( "Union:" );
		for( i = 0; i < j; i++ ) {
			System.out.print( union[ i ] + " " );
		}
	}
}
