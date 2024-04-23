import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class App {
    public static void main(String[] args) throws Exception {
        List<Employee> employees = Arrays.asList(
            new Employee("Ali Şen", 21d), 
        new Employee("Veli Demir", 28d), 
        new Employee("Niğde Bakır", 22d), 
        new Employee("Sıla Aslı", 24d), 
        new Employee("Mehmet Yozgat", 27d)); 

        for(Employee employee : employees){
            System.out.println(employee);
        }

        System.out.println("---------------");
        Collections.sort(employees);

        showList(employees);
    }
    private static void showList(Iterable listX){
        for(Object employee : listX){
            System.out.println(employee);
        }
    }
}
