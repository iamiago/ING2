clc;
Ncm = 1000000;
delta=0.03;
a=0;
X=Chaine_valeur_TRI(Ncm);
repartition_graphe(a,delta,X);
densite_Emp_graphe(a,delta,X)


function[X]=V_A_TRI()
U=rand();
if U<1/2;
    X=sqrt(2*U);
else
    X=2-sqrt(2*(1-U));
end
end

function[X]=Chaine_valeur_TRI(Ncm)
esp=0;
var=0;
for n=1:Ncm
    X(n)=V_A_TRI();
    esp=esp+X(n);
    var=var+X(n)^2;
end
esperance=esp/Ncm;
variance=var/Ncm-(esperance)^2;
disp('esperance empirique');
disp(esperance);
disp('variance empirique');
disp(variance);
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
[P,x]=fonction_repartition(X,a,delta)
figure;
plot(x,P,'ro','MarkerSize',4,'MarkerFaceColor', 'r' );
xlabel 'x'
ylabel 'F_X(x)'
title 'Fonction de repartition emperique de v.a. Tri,'
disp(toc);% 'LineWidth',1,
end

function[P,x]=fonction_Emp_densite(X,a,delta)
N_x=100;
for i =1:N_x+1
    x(i)=a+delta*(i-1);
    cont=0;
    for n=1:length(X)
        if X(n)<=x(i)+delta && X(n)>x(i)
            cont=cont+1;
        end
    end
    P(i)=cont/(length(X));
end
end
function[]=densite_Emp_graphe(a,delta,X)
[P,x]=fonction_Emp_densite(X,a,delta);
figure;
plot(x,P,'ro','MarkerSize',4,'MarkerFaceColor', 'r' );
xlabel 'x'
ylabel 'f_X(x)'
title 'Fonctions de densité '
end