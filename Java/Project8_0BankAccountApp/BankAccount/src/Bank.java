import java.util.ArrayList;
import java.util.List;

public class Bank extends Account{
    public static List<String> transactionHistory = new ArrayList<>();
    
    public void displayBankInfo(){
        
    } 
    
    public static void trackTransaction(String description){
        transactionHistory.add(description);
    }
}
