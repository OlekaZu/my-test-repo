using System;
​
class DecimalTest
{
    public static void Main()
    {
​
        int testint = -123;
​
        // Decimal test = (decimal)-9999999999.5345345;
        // Decimal test = (decimal)0.001;
        Decimal test = Convert.ToDecimal(testint);
        int[] bits = decimal.GetBits(test);
        string bin = Convert.ToString(bits[0], 2).PadLeft(32, '0');
        for (int i = 4; i <= bin.Length; i += 4) {
            bin = bin.Insert(i, " ");
            i++;
        }
        Console.Write("LOW  : ");
        Console.WriteLine(bin);
        Console.Write("MID  : ");
        bin = Convert.ToString(bits[1], 2).PadLeft(32, '0');
        for (int i = 4; i <= bin.Length; i += 4) {
            bin = bin.Insert(i, " ");
            i++;
        }
        Console.WriteLine(bin);
        Console.Write("HIGH : ");
        bin = Convert.ToString(bits[2], 2).PadLeft(32, '0');
        for (int i = 4; i <= bin.Length; i += 4) {
            bin = bin.Insert(i, " ");
            i++;
        }
        Console.WriteLine(bin);
        Console.Write("SCALE: ");
        bin = Convert.ToString(bits[3], 2).PadLeft(32, '0');
        for (int i = 4; i <= bin.Length; i += 4) {
            bin = bin.Insert(i, " ");
            i++;
        }
        Console.WriteLine(bin);
        Console.WriteLine(test);
    }
}