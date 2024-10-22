public class Main {

    public static void main(String[] args) {
        int number = 24; // Replace this with the desired input number
        int largestPrime = getLargestPrime(number);

        if (largestPrime == -1) {
            System.out.println("Invalid input. Please provide a number greater than 1.");
        } else {
            System.out.println("Largest Prime Factor: " + largestPrime);
        }
    }

    public static int getLargestPrime(int number) {
        if (number <= 1) {
            return -1; // Invalid input
        }

        for (int i = number - 1; i > 1; i--) {
            if (number % i == 0) {
                number = i;
            }
        }
        return number;
    }
}
