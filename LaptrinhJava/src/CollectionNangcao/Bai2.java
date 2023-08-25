package CollectionNangcao;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.TreeMap;

class Order {
    private int IdOrder;
    private Date OrdDate;
    private String CustomerID;

    public int getIdOrder() {
        return IdOrder;
    }

    public void setIdOrder(int idOrder) {
        this.IdOrder = idOrder;
    }

    public Date getOrdDate() {
        return OrdDate;
    }

    public void setOrdDate(Date ordDate) {
        this.OrdDate = ordDate;
    }

    public String getCustomerID() {
        return CustomerID;
    }

    public void setCustomerID(String customerID) {
        this.CustomerID = customerID;
    }

    public Order() {
    }

    public Order(int idOrder, Date ordDate, String customerID) {
        this.IdOrder = idOrder;
        this.OrdDate = ordDate;
        this.CustomerID = customerID;
    }

    @Override
    public String toString() {
        return "\n    ++ Order [IdOrder=" + IdOrder + ", OrdDate=" + OrdDate + ", CustomerID=" + CustomerID + "]";
    }
}

class OrderDetail {
    private int IdOrder;
    private int IdDetail;
    private int ItemID;
    private int Amount;
    private float Price;

    public int getIdOrder() {
        return IdOrder;
    }

    public void setIdOrder(int idOrder) {
        this.IdOrder = idOrder;
    }

    public int getIdDetail() {
        return IdDetail;
    }

    public void setIdDetail(int idDetail) {
        this.IdDetail = idDetail;
    }

    public int getItemID() {
        return ItemID;
    }

    public void setItemID(int itemID) {
        this.ItemID = itemID;
    }

    public int getAmount() {
        return Amount;
    }

    public void setAmount(int amount) {
        this.Amount = amount;
    }

    public float getPrice() {
        return Price;
    }

    public void setPrice(float price) {
        this.Price = price;
    }

    public OrderDetail() {
    }

    public OrderDetail(int idOrder, int idDetail, int itemID, int amount, float price) {
        this.IdOrder = idOrder;
        this.IdDetail = idDetail;
        this.ItemID = itemID;
        this.Amount = amount;
        this.Price = price;
    }

    @Override
    public String toString() {
        return "\n      +++ OrderDetail [IdOrder=" + IdOrder + ", IdDetail=" + IdDetail + ", ItemID=" + ItemID
                + ", Amount="
                + Amount + ", Price=" + Price + "]";
    }

}

class Purchase {
    private int IdPurchase;
    private Date purDate;
    private String SupplierID;

    public Purchase() {
    }

    public Purchase(int idPurchase, Date purDate, String supplierID) {
        this.IdPurchase = idPurchase;
        this.purDate = purDate;
        this.SupplierID = supplierID;
    }

}

class PurchaseDetail {
    private int IdPurchase;
    private int IdDetail;
    private int ItemID;
    private int Amount;
    private float Price;

    public PurchaseDetail() {
    }

    public PurchaseDetail(int idPurchase, int idDetail, int itemID, int amount, float price) {
        this.IdPurchase = idPurchase;
        this.IdDetail = idDetail;
        this.ItemID = itemID;
        this.Amount = amount;
        this.Price = price;
    }

}

class Supplier {
    private String IdSup;
    private String Name;
    private String Address;
    private String Tel;

    public Supplier() {
    }

    public Supplier(String idSup, String name, String address, String tel) {
        this.IdSup = idSup;
        this.Name = name;
        this.Address = address;
        this.Tel = tel;
    }

}

class Customer {
    private String IdCus;
    private String Name;
    private String Adress;
    private String Tel;

    public Customer(String IdCus) {
        this.IdCus = IdCus;
    }

    public String getIdCus() {
        return IdCus;
    }

    public void setIdCus(String idCus) {
        IdCus = idCus;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public String getAdress() {
        return Adress;
    }

    public void setAdress(String adress) {
        Adress = adress;
    }

    public String getTel() {
        return Tel;
    }

    public void setTel(String tel) {
        Tel = tel;
    }

    public Customer() {
    }

    public Customer(String idCus, String name, String adress, String tel) {
        this.IdCus = idCus;
        this.Name = name;
        this.Adress = adress;
        this.Tel = tel;
    }

    public String toString() {
        return "+ Id cus: " + IdCus + ", name: " + Name + ", address: " + Adress + ", tel: " + Tel + ", ";
    }
}

public class Bai2 {
    public static void main(String[] args) throws ParseException {
        // 2.2.1. Xây dựng và chèn các hoá đơn vào CTDL
        // customer: mã, tên, địa chỉ, sđt
        // order (hoá đơn): mã hoá đơn, ngày tạo, mã khách hàng
        // orderdetail (chi tiết hoá đơn): mã hoá đơn, chi tiết id, mã hàng, số lượng,
        // giá
        Customer cus1 = new Customer("Cus01", "Johny", "US", "01234");
        Customer cus2 = new Customer("Cus02", "Wicky", "UK", "01235");
        Customer cus3 = new Customer("Cus03", "Fenka", "Russia", "01236");
        DateFormat date = new SimpleDateFormat("yyyy-MM-dd");
        // cus1 có 2 hoá đơn, cus 2 có 2 hoá đơn, cus 3 có 1 hoá đơn
        Order or1 = new Order(1, date.parse("2021-06-08"), "Cus01");
        Order or2 = new Order(2, date.parse("2020-05-09"), "Cus01");
        Order or3 = new Order(3, date.parse("2020-06-08"), "Cus02");
        Order or4 = new Order(4, date.parse("2020-03-08"), "Cus02");
        Order or5 = new Order(5, date.parse("2020-07-06"), "Cus03");
        // Tạo thông tin cho từng hoá đơn
        // Của Order có id=1, 2 mặt hàng
        OrderDetail orDetail1 = new OrderDetail(1, 1, 1, 10, 100);
        OrderDetail orDetail2 = new OrderDetail(1, 2, 5, 7, 20);
        // Của Order có id=2, 2 mặt hàng
        OrderDetail orDetail3 = new OrderDetail(2, 3, 3, 10, 100);
        OrderDetail orDetail4 = new OrderDetail(2, 4, 7, 7, 20);
        // Của Order có id=3, 2 mặt hàng
        OrderDetail orDetail5 = new OrderDetail(3, 5, 2, 5, 80);
        // Của Order có id=4, 2 mặt hàng
        OrderDetail orDetail6 = new OrderDetail(4, 6, 4, 5, 80);
        OrderDetail orDetail7 = new OrderDetail(4, 7, 1, 5, 70);
        OrderDetail orDetail8 = new OrderDetail(4, 8, 2, 6, 90);
        // Của Order có id=5, 2 mặt hàng
        OrderDetail orDetail9 = new OrderDetail(5, 9, 4, 6, 120);
        OrderDetail orDetail10 = new OrderDetail(5, 10, 6, 10, 110);
        // Mỗi ArrayList lưu trữ thông tin của hoá đơn tương ứng
        ArrayList<OrderDetail> ordet1 = new ArrayList<>(); // hoá đơn 1 có 2 mặt hàng cus1
        ordet1.add(orDetail1);
        ordet1.add(orDetail2);
        ArrayList<OrderDetail> ordet2 = new ArrayList<>(); // hoá đơn 2 có 2 mặt hàng cus1
        ordet2.add(orDetail3);
        ordet2.add(orDetail4);
        ArrayList<OrderDetail> ordet3 = new ArrayList<>(); // hoá đơn 3 có 1 mặt hàng cus2
        ordet3.add(orDetail5);
        ArrayList<OrderDetail> ordet4 = new ArrayList<>(); // hoá đơn 4 có 4 mặt hàng cus2
        ordet4.add(orDetail6);
        ordet4.add(orDetail7);
        ordet4.add(orDetail8);
        ArrayList<OrderDetail> ordet5 = new ArrayList<>(); // hoá đơn 5 có 5 mặt hàng cus3
        ordet5.add(orDetail9);
        ordet5.add(orDetail10);
        Comparator<Order> cptOr = new Comparator<Order>() {
            @Override
            public int compare(Order o1, Order o2) {
                return o1.getIdOrder() - o2.getIdOrder();
            }
        };
        TreeMap<Order, ArrayList<OrderDetail>> order1 = new TreeMap<>(cptOr); // lưu trữ hoá đơn của khách hàng tương
                                                                              // ứng
        order1.put(or1, ordet1); // hoá đơn 1 có thông tin 1
        order1.put(or2, ordet2); // hoá đơn 2 có thông tin 2
        TreeMap<Order, ArrayList<OrderDetail>> order2 = new TreeMap<>(cptOr);
        order2.put(or3, ordet3);
        order2.put(or4, ordet4);
        TreeMap<Order, ArrayList<OrderDetail>> order3 = new TreeMap<>(cptOr);
        order3.put(or5, ordet5);
        Comparator<Customer> cptCus = new Comparator<Customer>() {
            @Override
            public int compare(Customer cus1, Customer cus2) {
                return cus1.getIdCus().compareTo(cus2.getIdCus());
            }
        };
        TreeMap<Customer, TreeMap<Order, ArrayList<OrderDetail>>> orcus = new TreeMap<>(cptCus);
        orcus.put(cus1, order1);
        orcus.put(cus2, order2);
        orcus.put(cus3, order3);
        for(Customer cus : orcus.keySet())
        // mỗi khách hàng sẽ có 1 treemap để lưu giữ các hoá đơn đặt mua, như 1 khách
        // hàng có thể có nhiều hoá đơn
        // bên trong treemap đó sẽ có hoá đơn làm key, và arraylist chi tiết hoá đơn làm
        // value,
        // chi tiết hoá đơn được arraylist lưu trữ
        // Mỗi hoá đơn sẽ có nhiều thông tin sản phẩm được mua

        // 1. Thực hành tìm kiếm danh sách hoá đơn theo mã khách hàng
        Customer cus = new Customer("Cus01");
        System.out.println(" Customer's info: ");
        System.out.println(orcus.get(cus));

        // 2. In ra các khách hàng có tổng giá trị hóa đơn cao nhất
        TreeMap<Float, Customer> pr = new TreeMap<>();
        TreeMap<Order, ArrayList<OrderDetail>> order = new TreeMap<>(cptOr); // lưu trữ hoá đơn
        ArrayList<OrderDetail> ordet = new ArrayList<>(); // lưu trữ thông tin mỗi đơn hàng
        for (Customer cs : orcus.keySet()) {
            order.putAll(orcus.get(cs));
            for (Order or : order.keySet()) {
                ordet.addAll(order.get(or));
                float pri = 0;
                for (OrderDetail od : ordet)
                    pri += od.getPrice();
                pr.put(pri, cs);
            }
            ordet.clear();
            order.clear();
        }
        Float res = pr.lastKey();
        System.out.println(" Customer's price largest: " + pr.get(res));

        // 3. In ra các khách hàng có số lượng hóa đơn nhiều nhất
        TreeMap<Integer,Customer> cntor = new TreeMap<>();
    }
}