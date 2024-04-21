import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class App {
    public static void main(String[] args) throws Exception {
        List<Integer> numbers = Arrays.asList(60, 70, 40, 90, 80); 

        for(Integer number : numbers){
            System.out.println(number);
        }

        System.out.println("---------------");
        Collections.sort(numbers);

        showList(numbers);
    }

    private static void showList(List<Integer> listX){
        for(Integer number : listX){
            System.out.println(number);
        }
    }
}
