
int rand()

{
    static int i =0;
    i++;
    if (i == 1)
        return (8); //8 % 15 + 1 = 9
    else if (i == 2)
        return (8); //9
    else if (i == 3)
        return(7); //7 % 75 + 1 = 8
    else if (i == 4)
        return(9); // 9 % 75 +1 =10

    else if (i == 5)
        return 23; //23  %  75 + 1 = 24
    else if (i == 6)
        return 74; //75


    return 0 ;
}

