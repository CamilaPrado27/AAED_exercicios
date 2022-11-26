int fibonacci(int n){ 
    int i,fib1=1,fib2=0,soma;
    for(i=1;i<=n;i++){
        soma=fib1+fib2;
        fib1=fib2;
        fib2=soma;
    }
    return fib2;
}

//Total de Contagens = 6n + 2