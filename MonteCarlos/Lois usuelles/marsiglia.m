clear 
clc
Nmc=1000000;
delta=0.02;
a=0;

for n=1:Nmc
    S=2;
    while S>1
        u1=rand();
        u2=rand();
        v1=2*u1-1;
        v2=2*u2-1;
        S=(v1)^2+(v2)^2;
    end
    X(n)=S;
end
densite_graph(a,delta,X);
repartition_graphe(a,delta,X);
function[P,x]=fonction_densite(X,a,delta)
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
function[]=densite_graph(a,delta,X);
[P,x]=fonction_densite(X,a,delta);
figure;
plot(x,P,'ro','MarkerSize',4,'MarkerFaceColor', 'r' );
xlabel 'x'
ylabel 'f_X(x)'
title 'Fonctions de densité '
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
title 'Fonction de repartition'
disp(toc);% 'LineWidth',1,
end
        