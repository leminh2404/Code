// var a = 5;
// a++;
// console.log(a);
// var i = 0;
// var y = "string";
// console.log(y + ' is myString');
// if (i === y) {
//     console.log("true");
// }
// else
//     console.log("false");
// console.log(typeof (i));
// console.log(typeof (y));
// const check = true;
// console.log(check);
// console.log(typeof (check));
// const x = 1.0;
// console.log(x / 2);
var obj1 = {
    Masv: "123",
    Hoten: "Nguyen Van A"
};
console.log(obj1);
console.log(typeof (obj1));
var obj2 = obj1;
obj2.Hoten = "Nguyen Thi B";
console.log(obj2, obj1);
let arr = [1, 2, 3, 4, 5]
console.log(arr);
console.log(...arr);
let arr2 = arr.filter((x) => x % 2 == 0)
console.log(...arr2)
let arr3 = arr.map((x) => {
    const y = x + 1;
    return x + y;
})
console.log(...arr3)
let obj = {
    Masv: "123",
    Tensv: "Nguyen Van A",
    SayHi: function () {
        console.log("Hello", this.Tensv);
    },
    obj3: {
        Namsinh: 2003,
        Nammat: 2090
    }
}
console.log(obj)
obj.SayHi();
// OOP
