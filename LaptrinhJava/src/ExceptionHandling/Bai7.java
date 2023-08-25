package ExceptionHandling;

class ErrorIndex extends IndexOutOfBoundsException{
    public ErrorIndex(){}
    @Override
    public String getMessage()
    {
        return "Loi vi tri mang!";
    }
}
class ErrorDevidebyZero extends ErrorIndex{
    
}
public class Bai7 {
    
}
