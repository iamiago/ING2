clear;
clc;
Nmc=1000000;
a=-5;
delta=0.1;
[X,Y]=Chaine_Box_Muller(Nmc);
densite_graph(a,delta,X);
repartition_graphe(a,delta,X);

function[X,Y]=Box_Muller()
u1=rand();
u2=rand();
O=2*pi*u1;
R= sqrt(-2*log(u2));
X=R*cos(O);
Y=R*sin(O);
end



function[X,Y] =Chaine_Box_Muller(Nmc)
EX=0;VX=0;EY=0;VY=0;
for n=1 : Nmc
    [X(n),Y(n)] = Box_Muller();
    EX=EX+X(n);
    VX=VX+ (X(n))^2;
    EY=EY+Y(n);
    VY=VY+(Y(n))^2;
end
end

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