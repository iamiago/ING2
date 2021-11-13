clear;
Nmc=10000;
lambda=5;
a=0;
delta=0.2;
X=Chaine_valeurs_Poisson(lambda,Nmc);
repartition_graphe(a,delta,X);
Densite_empirique(Nmc,a,X,delta);

function[X]=V_A_Poisson(lambda)
n=0;
proba=exp(-lambda);
F=proba;
U=rand();
while U>F
    proba=proba*lambda/(n+1);
    F=F+proba;
    n=n+1;
end
X=n;
end

function[X]=Chaine_valeurs_Poisson(lambda,Nmc)
for n=1:Nmc
    X(n)=V_A_Poisson(lambda);
end
end
function[P,x]=fonction_repartition(X,a,delta)
N_x=100;
for i =1:N_x+1
    x(i)=a+delta*(i-1);
    cont=0;
    for n=1:length(X)
        if X(n)<=x(i)
            cont=cont+1;
        end
    end
    P(i)=cont/(length(X));
end
end
function[]=repartition_graphe(a,delta,X)
tic;
[P,x]=fonction_repartition(X,a,delta);
figure;
plot(x,P,'ro','MarkerSize',4,'MarkerFaceColor', 'r' );
xlabel 'x'
ylabel 'F_X(x)'
title 'Fonction de repartition emperique de v.a. Poisson,'
disp(toc);% 'LineWidth',1,
end

function[]= Densite_empirique(Nmc,a,X,delta)
for i = 1 : Nmc
    y(i) = a +delta*(i-1);
    counter=0;
    for n = 1 : Nmc
        if X(n)<= y(i)+delta && X(n)<= y(i)
            counter = counter +1;
        end
    end
    Proba(i)=counter/Nmc;
    Densite(i)=Proba(i)/delta; 
end
plot(y, Densite);
end