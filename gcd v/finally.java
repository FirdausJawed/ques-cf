class Main {
    public static void main(String args[]) {
        try {
            int num = 67 / 0;
            System.out.println(num);
        }
        catch (ArithmeticException e) {
            System.out.println("Invalid");
        }
        finally {
        }
    }
}