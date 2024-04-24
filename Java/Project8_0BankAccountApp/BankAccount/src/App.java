public class App {
    public static void main(String[] args) throws Exception {

        Bank bank1 = new Bank();
      
        Account myAccount = new Account(100235, "Semi Şen", 1020.26);
        Account backupAccount = new Account(100236, "Serpil Şen", 500000.86);

        System.out.println(Account.accounts);

        myAccount.deposit(5000.1);
        backupAccount.deposit(500000.1);

        
    }
}
