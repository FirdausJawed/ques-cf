
class example2 {
    public static void main(String[] args) {

        try {
            String str = "123";
            int num = Integer.parseInt(str);
            System.out.println("try block fully executed");

        }

        catch (NumberFormatException ex) {

            System.out.println("catch block executed...");

        }

        finally {
            System.out.println("finally block executed");
        }

    }
}
