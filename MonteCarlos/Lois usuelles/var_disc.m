clear;
clc;
p=[0.25 0.3 0.1 0.18 0.05 0.08 0.02 0.02];
a=[1 2 3 4 5 6 7 8];
Nmc=1000;
disp(sum(p));
V_A_Discrete(p,a);
X=Chaine_valeurs_V_A(p,a,Nmc);
disp(X)

function[X]=V_A_Discrete(p,a)
n=1;
F=p(1);
U=rand();
while U>F
    F=F+p(n+1);
    n=n+1;
end

X=a(n);
end
function[X]=Chaine_valeurs_V_A(p,a,Nmc)
esp=0;
var=0;
for n=1:Nmc
    X(n)=V_A_Discrete(p,a);
    esp=esp+X(n);
    var=var+X(n)^2;
end
esperance=esp/Nmc;
variance=var/Nmc-(esperance)^2;
disp('esperance empirique');
disp(esperance);
disp('variance empirique');
disp(variance);
esperance_th=p*a';
% variance_th=(a- esperance_th).^2*p';
variance_th=a.^2*p'-esperance_th^2;
disp('esperance theorique');
disp(esperance_th);
disp('variance theorique');
disp(variance_th);
end