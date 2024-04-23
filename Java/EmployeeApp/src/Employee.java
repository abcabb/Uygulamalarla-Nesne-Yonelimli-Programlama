import javax.print.attribute.standard.MediaSize.Other;

public class Employee implements Comparable{
    private String fullName;
    private Double salary;

    public Employee(String fullName, Double salary){
        this.fullName = fullName;
        this.salary = salary;
    }

    public String getFullName(){
        return this.fullName;
    }
    public void setFullName(String fullName){
        this.fullName = fullName;
    }
    public Double getSalary(){
        return this.salary;
    }
    public void setSalary(Double salary){
        this.salary = salary;
    }

    @Override
    public String toString(){
        return this.fullName  + " " + this.salary;
    }

    @Override
    public int compareTo(Object other) {
        if(other instanceof Employee){
            Employee emp = (Employee)other;
            return this. getSalary().compareTo(emp.getSalary());
        }
        throw new UnsupportedOperationException("Unimplemented method 'compareTo'");
    }
}