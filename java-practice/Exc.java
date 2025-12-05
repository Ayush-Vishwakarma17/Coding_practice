public class Exc{
    public static void main(String[] args) {
        try {
            int n = 10/0;
        }catch(Exception n) {
            System.out.println(n);
        }
        Age obj = new Age();
        obj.show();
    }
}


//parent class name

    class Name{
        String name = "Ayush";
    }

    //child class age

    class Age extends Name{
        String age = "20";
        
        void show() {
            System.out.println(name + " " + age);
        }

    }

    
    
