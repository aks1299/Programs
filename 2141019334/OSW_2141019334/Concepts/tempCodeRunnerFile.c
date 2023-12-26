int ivar = 1234;
    printf(":%*.*d:\n",10,4,ivar);
    printf(":%-*.*d:\n",10,4,ivar);

    char line[]="hexadecimal";
    printf(":%10s: :%15s: :%15.5s: :%.5s:\n",line,line,line,line);
