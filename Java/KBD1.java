class KBD1  //Input 10 chr. & cnt wovels char. (ignoring cases)
{
    public static void main(String[]avgs)
    {
        char ch=32;
        int i=1,ma=0,me=0,mi=0,mo=0,mu=0,oth=0;
        while(i<=10)
        {
            System.out.println("character:");
            try
            {
                ch=(char)System.in.read();
                System.in.skip(5);
            }
            catch (Exception e) {}
            switch (ch)
            {
                case 'A':
                case 'a':
                    ma++;
                    break;
                case 'E':
                case 'e':
                    me++;
                    break;
                case 'I':
                case 'i':
                    mi++;
                    break;
                case 'O':
                case 'o':
                    mo++;
                    break;
                case 'U':
                case 'u':
                    mu++;
                    break;
                default:
                    oth++; 
                    break;
            }
            i++;
        }
        System.out.println("A:"+ma+"\tE:"+me+"\nI:"+mi+"\tO:"+mo+"\nU:"+mu+"\tOther:"+oth);
    }
}

/*
I/p:
character:
A
character:
h
character:
C
character:
d
character:
e
character:
P
character:
T
character:
y
character:
u
character:
k

O/p:
A:1     E:1
I:0     O:0
U:1     Other:7
*/