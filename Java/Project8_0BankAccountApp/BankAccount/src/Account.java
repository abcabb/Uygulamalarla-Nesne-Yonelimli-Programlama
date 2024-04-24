import java.util.List;
import java.util.ArrayList;
import java.time.LocalDate;

public class Account {
    private int accountNumber;
    private String owner;
    private Double balance;

    public static List<Account> accounts = new ArrayList<>();

    public Account(){}

    public Account(int accountNumber, String owner, Double balance){
        this.accountNumber = accountNumber;
        this.owner = owner;
        this.balance = balance;

        accounts.add(this);
    }

    public void deposit(Double amount){
        this.balance += amount;
        System.out.println("Deposit successful. New balance = " + this.balance);
        Bank.transactionHistory.add("Transaction Type : " + this.getClass().getName() + " - " + " Amount : " + amount + " - " + " Date : " + LocalDate.now());
    }
    public void withdraw(Double amount){
        if(this.balance < amount){
            System.out.println("Withdraw unsuccessful. Unsufficent balance.");
        }else{
        this.balance -= amount;
        System.out.println("Withdraw successful. New balance = " + this.balance);
        Bank.transactionHistory.add("Transaction Type : " + this.getClass().getName() + " - " + " Amount : " + amount + " - " + " Date : " + LocalDate.now());
        }
    }
    public void viewBalance(){
        System.out.println("Current balance = " + this.balance);
    }

    @Override
    public String toString(){
        return String.format(accountNumber + " - " + owner + " - " + balance + "$\n");
    }
}