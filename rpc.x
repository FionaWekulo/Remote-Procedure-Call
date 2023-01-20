struct number{
    int i;
};
struct inputs{
    int i;
    string j <>;
};

program RPC_PROGRAM{
    version RPC_VERSION{
        int square(number)=1;
        float multiplication(inputs)=2;
        string stringify(number)=3;
    }=1;
}=0x23451111;