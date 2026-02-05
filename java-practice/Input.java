import java.util.Scanner;
class Input {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = in.nextLine();
        System.out.println("Your name is "+ name);
    }
}

class NumberInput {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter your lucky number : ");
        int number = in.nextInt();
        System.out.println("Your lucky number is : "+ number);
    }
}

class CrushInput {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter your crush name : ");
        String crush = in.nextLine();
        System.out.println("Your crush name is : "+ crush);
    }
}

