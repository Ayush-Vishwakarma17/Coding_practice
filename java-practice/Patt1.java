public class Patt1 {
    public static void main (String args[]) {
        for (int i = 4; i >= 0; i--) {
            int temp = i;
            
            while (temp>0) {
                System.out.print('*');
                temp--;
               
            }if (i != 0) {
                System.out.print('\n');
            }
            
        }
        
    }
}