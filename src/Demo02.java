public class Demo02 {
    public static void main(String[]args){
//        byte i = 128;
        int i = 128;
        byte a = (byte)i;
        // 强制转化 （类型） 从高到低
        // 自动转换 从低-> 高
        System.out.println(a);
        int money = 10_000_000;
        System.out.println(money);
        /*
        注意点：
        1. 不能对布尔值进行转换
        2. 不能把对象类型转换为不相干的类型
        3. 在把高容量转换到低容量时，强制转换
        4. 转换的时候可能存在内存溢出，或者精度问题！

         */
    }
}
