// palindrom with 2 pointers
{
    int number = Int32.Parse(Console.ReadLine());
    int numCopy = number;

    int left = 0;
    int right = number % 10;

    int i = 0;
    int j = 0;
    int m = 0;
    if (numCopy / 10 == 0)
    {
        Console.WriteLine("this is a palindrom");
        return;
    }
    while (numCopy > 0)
    {
        left = numCopy;
        numCopy /= 10;
        j++;
    }

    while (i != j && i < j)
    {
        m = 0;
        numCopy = number;
        while (m < j - 1)
        {
            numCopy /= 10;
            m++;
        }
        left = numCopy % 10;
        numCopy = number;
        for (int k = 0; k < i; k++)
        {
            numCopy /= 10;
        }
        right = numCopy % 10;
        if (left != right)
        {
            Console.WriteLine("not a palindrom");
            return;
        }
        j--;
        i++;


    }
    Console.WriteLine("this number is a palindrom");
}