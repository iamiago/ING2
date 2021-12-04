#ifndef FINANCE_H
#define FINANCE_H


class Finance
{
    public:
        Finance(double cap, double r);
        void calculateCapital(int years);
        void calulateNbYears(int capital);

    protected:

    private:
        double capital;
        double rate;
};

#endif // FINANCE_H
