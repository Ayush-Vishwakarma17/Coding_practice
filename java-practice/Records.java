import java.util.*;

class Records {
    public static void main (String[] agrs) {
        Scanner in = new Scanner (System.in);
        System.out.println("\nHi what you want to do today?");
        System.out.println("\n1. See Students Enrolled \n2. Insert Student \n3. Delete Student \n4. Get Id of Student\n");
        int operation = in.nextInt();
    }

    ArrayList<String> list = new ArrayList<>();
    list.add("Ayush Vishwakarma");
    list.add("Roshni Vishwakarma");
    
    if (operation == 1) {   

        for (int name: list) {
            System.out.println("\n"+name);
        }

    }   else if (operation == 2) {

        System.out.println("\nEnter the name of new Student: \n")
        Scanner in = new Scanner(System.in);
        String name = in.nextLine();
        list.add(name);

    }   else if (operation == 3) {

        System.out.println("\nEnter the name of Student to Delete: \n");
        Scanner in = new Scanner(System.in);
        String name = in.nextLine();

        for (int i = 0; i < list.length; i++) {
            if (name == list[i]) {
                list.remove(list[i]);
                break;
            }
        }

    } else if (operation == 4) {

        System.out.println("\nEnter the name of Student to get id: \n");
        Scanner in = new Scanner(System.in);
        String name = in.nextLine();

        for (int i = 0; i < list.length; i++) {
            if (name == list[i]) {
                System.out.println("\n"name + "'s Id is: "i);
                break;
            }
        }
        
    }
}