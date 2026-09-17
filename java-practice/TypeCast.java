public class TypeCast {
    public static void main (String args[]) {
        //first thing known as type conversion

        //when store the small data type values to big data types primitive
        //widerning or implicit casting

        //byte --> short --> int ---> float ---> long ----> double
        // it is known as widening conversion 

        short b = 12;

        //if we do not cover the 2B insider the brackets then b will be consider integer
        //and java will type promote it so we will get lossy conversion error
        
        short a = (short)(2*b);
        int c = a;
        System.out.print(a);
    }
}