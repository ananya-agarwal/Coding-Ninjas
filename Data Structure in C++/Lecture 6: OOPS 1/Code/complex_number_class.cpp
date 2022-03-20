/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers
{
   private:
    int real,imaginery;
   public:
    ComplexNumbers(int real, int imaginery)
    {
        this->real = real;
        this->imaginery = imaginery;
    }
    void plus(ComplexNumbers c2)
    {
        int real_plus = real + c2.real;
        int imag_plus = imaginery + c2.imaginery;
        real = real_plus;
        imaginery = imag_plus;
    }
    void multiply(ComplexNumbers c2)
    {
        int mul_r = (real * c2.real) - (imaginery * c2.imaginery);
        int mul_i = (imaginery * c2.real) + (real * c2.imaginery);
        real = mul_r;
        imaginery = mul_i;
    }
    void print()
    {
        cout<<real<<" + i"<<imaginery<<endl;
    }
};
