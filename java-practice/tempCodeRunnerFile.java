public class Constructor {
    int x = 20;
    Constructor(int data) {
        System.out.println("Data before the updation: " + x);
        x = data;
        System.out.println("Data after the updation: " + x);
    }
    public static void main(String[] args) {
        Constructor obj = new Constructor(17);
    }
}